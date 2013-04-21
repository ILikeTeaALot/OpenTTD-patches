/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file town_map.h Accessors for towns */

#ifndef TOWN_MAP_H
#define TOWN_MAP_H

#include "tile/common.h"
#include "clear_map.h"
#include "road_map.h"
#include "house.h"

/**
 * Get the index of which town this house/street is attached to.
 * @param t the tile
 * @pre IsHouseTile(t) or IsRoadTile(t) or IsLevelCrossingTile(t)
 * @return TownID
 */
static inline TownID GetTownIndex(TileIndex t)
{
	assert(IsHouseTile(t) || IsRoadTile(t) || IsLevelCrossingTile(t));
	return _mc[t].m2;
}

/**
 * Set the town index for a road or house tile.
 * @param t the tile
 * @param index the index of the town
 * @pre IsHouseTile(t) or IsRoadTile(t) or IsLevelCrossingTile(t)
 */
static inline void SetTownIndex(TileIndex t, TownID index)
{
	assert(IsHouseTile(t) || IsRoadTile(t) || IsLevelCrossingTile(t));
	_mc[t].m2 = index;
}

/**
 * Get the type of this house, which is an index into the house spec array
 * without doing any NewGRF related translations.
 * @param t the tile
 * @pre IsHouseTile(t)
 * @return house type
 */
static inline HouseID GetCleanHouseType(TileIndex t)
{
	assert(IsHouseTile(t));
	return _mc[t].m4 | (GB(_mc[t].m1, 6, 1) << 8);
}

/**
 * Get the type of this house, which is an index into the house spec array
 * @param t the tile
 * @pre IsHouseTile(t)
 * @return house type
 */
static inline HouseID GetHouseType(TileIndex t)
{
	return GetTranslatedHouseID(GetCleanHouseType(t));
}

/**
 * Set the house type.
 * @param t the tile
 * @param house_id the new house type
 * @pre IsHouseTile(t)
 */
static inline void SetHouseType(TileIndex t, HouseID house_id)
{
	assert(IsHouseTile(t));
	_mc[t].m4 = GB(house_id, 0, 8);
	SB(_mc[t].m1, 6, 1, GB(house_id, 8, 1));
}

/**
 * Check if the lift of this animated house has a destination
 * @param t the tile
 * @return has destination
 */
static inline bool LiftHasDestination(TileIndex t)
{
	return HasBit(_mc[t].m7, 3);
}

/**
 * Set the new destination of the lift for this animated house, and activate
 * the LiftHasDestination bit.
 * @param t the tile
 * @param dest new destination
 */
static inline void SetLiftDestination(TileIndex t, byte dest)
{
	SetBit(_mc[t].m7, 3);
	SB(_mc[t].m7, 0, 3, dest);
}

/**
 * Get the current destination for this lift
 * @param t the tile
 * @return destination
 */
static inline byte GetLiftDestination(TileIndex t)
{
	return GB(_mc[t].m7, 0, 3);
}

/**
 * Stop the lift of this animated house from moving.
 * Clears the first 4 bits of m7 at once, clearing the LiftHasDestination bit
 * and the destination.
 * @param t the tile
 */
static inline void HaltLift(TileIndex t)
{
	SB(_mc[t].m7, 0, 4, 0);
}

/**
 * Get the position of the lift on this animated house
 * @param t the tile
 * @return position, from 0 to 36
 */
static inline byte GetLiftPosition(TileIndex t)
{
	return GB(_mc[t].m1, 0, 6);
}

/**
 * Set the position of the lift on this animated house
 * @param t the tile
 * @param pos position, from 0 to 36
 */
static inline void SetLiftPosition(TileIndex t, byte pos)
{
	SB(_mc[t].m1, 0, 6, pos);
}

/**
 * Get the completion of this house
 * @param t the tile
 * @return true if it is, false if it is not
 */
static inline bool IsHouseCompleted(TileIndex t)
{
	assert(IsHouseTile(t));
	return HasBit(_mc[t].m1, 7);
}

/**
 * Mark this house as been completed
 * @param t the tile
 * @param status
 */
static inline void SetHouseCompleted(TileIndex t, bool status)
{
	assert(IsHouseTile(t));
	SB(_mc[t].m1, 7, 1, !!status);
}

/**
 * House Construction Scheme.
 *  Construction counter, for buildings under construction. Incremented on every
 *  periodic tile processing.
 *  On wraparound, the stage of building in is increased.
 *  GetHouseBuildingStage is taking care of the real stages,
 *  (as the sprite for the next phase of house building)
 *  (Get|Inc)HouseConstructionTick is simply a tick counter between the
 *  different stages
 */

/**
 * Gets the building stage of a house
 * Since the stage is used for determining what sprite to use,
 * if the house is complete (and that stage no longer is available),
 * fool the system by returning the TOWN_HOUSE_COMPLETE (3),
 * thus showing a beautiful complete house.
 * @param t the tile of the house to get the building stage of
 * @pre IsHouseTile(t)
 * @return the building stage of the house
 */
static inline byte GetHouseBuildingStage(TileIndex t)
{
	assert(IsHouseTile(t));
	return IsHouseCompleted(t) ? (byte)TOWN_HOUSE_COMPLETED : GB(_mc[t].m5, 3, 2);
}

/**
 * Gets the construction stage of a house
 * @param t the tile of the house to get the construction stage of
 * @pre IsHouseTile(t)
 * @return the construction stage of the house
 */
static inline byte GetHouseConstructionTick(TileIndex t)
{
	assert(IsHouseTile(t));
	return IsHouseCompleted(t) ? 0 : GB(_mc[t].m5, 0, 3);
}

/**
 * Sets the increment stage of a house
 * It is working with the whole counter + stage 5 bits, making it
 * easier to work:  the wraparound is automatic.
 * @param t the tile of the house to increment the construction stage of
 * @pre IsHouseTile(t)
 */
static inline void IncHouseConstructionTick(TileIndex t)
{
	assert(IsHouseTile(t));
	AB(_mc[t].m5, 0, 5, 1);

	if (GB(_mc[t].m5, 3, 2) == TOWN_HOUSE_COMPLETED) {
		/* House is now completed.
		 * Store the year of construction as well, for newgrf house purpose */
		SetHouseCompleted(t, true);
	}
}

/**
 * Sets the age of the house to zero.
 * Needs to be called after the house is completed. During construction stages the map space is used otherwise.
 * @param t the tile of this house
 * @pre IsHouseTile(t) && IsHouseCompleted(t)
 */
static inline void ResetHouseAge(TileIndex t)
{
	assert(IsHouseTile(t) && IsHouseCompleted(t));
	_mc[t].m5 = 0;
}

/**
 * Increments the age of the house.
 * @param t the tile of this house
 * @pre IsHouseTile(t)
 */
static inline void IncrementHouseAge(TileIndex t)
{
	assert(IsHouseTile(t));
	if (IsHouseCompleted(t) && _mc[t].m5 < 0xFF) _mc[t].m5++;
}

/**
 * Get the age of the house
 * @param t the tile of this house
 * @pre IsHouseTile(t)
 * @return year
 */
static inline Year GetHouseAge(TileIndex t)
{
	assert(IsHouseTile(t));
	return IsHouseCompleted(t) ? _mc[t].m5 : 0;
}

/**
 * Set the random bits for this house.
 * This is required for newgrf house
 * @param t      the tile of this house
 * @param random the new random bits
 * @pre IsHouseTile(t)
 */
static inline void SetHouseRandomBits(TileIndex t, byte random)
{
	assert(IsHouseTile(t));
	tile_set_random_bits(&_mc[t], random);
}

/**
 * Get the random bits for this house.
 * This is required for newgrf house
 * @param t the tile of this house
 * @pre IsHouseTile(t)
 * @return random bits
 */
static inline byte GetHouseRandomBits(TileIndex t)
{
	assert(IsHouseTile(t));
	return tile_get_random_bits(&_mc[t]);
}

/**
 * Set the activated triggers bits for this house.
 * This is required for newgrf house
 * @param t        the tile of this house
 * @param triggers the activated triggers
 * @pre IsHouseTile(t)
 */
static inline void SetHouseTriggers(TileIndex t, byte triggers)
{
	assert(IsHouseTile(t));
	SB(_mc[t].m0, 0, 5, triggers);
}

/**
 * Get the already activated triggers bits for this house.
 * This is required for newgrf house
 * @param t the tile of this house
 * @pre IsHouseTile(t)
 * @return triggers
 */
static inline byte GetHouseTriggers(TileIndex t)
{
	assert(IsHouseTile(t));
	return GB(_mc[t].m0, 0, 5);
}

/**
 * Get the amount of time remaining before the tile loop processes this tile.
 * @param t the house tile
 * @pre IsHouseTile(t)
 * @return time remaining
 */
static inline byte GetHouseProcessingTime(TileIndex t)
{
	assert(IsHouseTile(t));
	return GB(_mc[t].m1, 0, 6);
}

/**
 * Set the amount of time remaining before the tile loop processes this tile.
 * @param t the house tile
 * @param time the time to be set
 * @pre IsHouseTile(t)
 */
static inline void SetHouseProcessingTime(TileIndex t, byte time)
{
	assert(IsHouseTile(t));
	SB(_mc[t].m1, 0, 6, time);
}

/**
 * Decrease the amount of time remaining before the tile loop processes this tile.
 * @param t the house tile
 * @pre IsHouseTile(t)
 */
static inline void DecHouseProcessingTime(TileIndex t)
{
	assert(IsHouseTile(t));
	assert(GetHouseProcessingTime(t) != 0);
	_mc[t].m1--;
}

/**
 * Make the tile a house.
 * @param t tile index
 * @param tid Town index
 * @param counter of construction step
 * @param stage of construction (used for drawing)
 * @param type of house.  Index into house specs array
 * @param random_bits required for newgrf houses
 * @pre IsGroundTile(t)
 */
static inline void MakeHouseTile(TileIndex t, TownID tid, byte counter, byte stage, HouseID type, byte random_bits)
{
	assert(IsGroundTile(t));

	_mc[t].m0 = 0xC0;
	_mc[t].m1 = 0;
	_mc[t].m2 = tid;
	_mc[t].m3 = random_bits;
	SetHouseType(t, type);
	SetHouseCompleted(t, stage == TOWN_HOUSE_COMPLETED);
	_mc[t].m5 = IsHouseCompleted(t) ? 0 : (stage << 3 | counter);
	SetAnimationFrame(t, 0);
	SetHouseProcessingTime(t, HouseSpec::Get(type)->processing_time);
}

#endif /* TOWN_MAP_H */
