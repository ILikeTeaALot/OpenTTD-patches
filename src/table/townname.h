/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file table/townname.h Namepart tables for the town name generator */

#include "../core/enum_type.hpp"

static const char * const _name_finnish_real[] = {
	"Aijala",
	"Kisko",
	"Espoo",
	"Helsinki",
	"Tapiola",
	"J\xC3\xA4rvel\xC3\xA4",
	"Lahti",
	"Kotka",
	"Hamina",
	"Loviisa",
	"Kouvola",
	"Tampere",
	"Oulu",
	"Salo",
	"Malmi",
	"Pelto",
	"Koski",
	"Iisalmi",
	"Raisio",
	"Taavetti",
	"Joensuu",
	"Imatra",
	"Tapanila",
	"Pasila",
	"Turku",
	"Kupittaa",
	"Vaasa",
	"Pori",
	"Rauma",
	"Kolari",
	"Lieksa",
};

static const char * const _name_finnish_1[] = {
	"Hiekka",
	"Haapa",
	"Mylly",
	"Sauna",
	"Uusi",
	"Vanha",
	"Kes\xC3\xA4",
	"Kuusi",
	"Pelto",
	"Tuomi",
	"Terva",
	"Olki",
	"Hein\xC3\xA4",
	"Sein\xC3\xA4",
	"Rova",
	"Koivu",
	"Kokko",
	"M\xC3\xA4nty",
	"Pihlaja",
	"Pet\xC3\xA4j\xC3\xA4",
	"Kielo",
	"Kauha",
	"Viita",
	"Kivi",
	"Riihi",
	"\xC3\x84\xC3\xA4ne",
	"Niini",
};

static const char * const _name_finnish_2[] = {
	"Lappeen",
	"Lohjan",
	"Savon",
	"Lapin",
	"Pit\xC3\xA4j\xC3\xA4n",
	"Martin",
	"Kuusan",
	"Kemi",
	"Keri",
	"H\xC3\xA4meen",
	"Kangas",
};

static const char * const _name_finnish_3[] = {
	"harju",
	"linna",
	"j\xC3\xA4rvi",
	"kallio",
	"m\xC3\xA4ki",
	"nummi",
	"joki",
	"kyl\xC3\xA4",
	"lampi",
	"lahti",
	"mets\xC3\xA4",
	"suo",
	"laakso",
	"niitty",
	"luoto",
	"hovi",
	"ranta",
	"koski",
	"salo",
};

static const char * const _name_polish_1_m[] = {
	"Wielki ",
	"Ma\xC5\x82y ",
	"Z\xC5\x82y ",
	"Dobry ",
	"Nowy ",
	"Stary ",
	"Z\xC5\x82oty ",
	"Zielony ",
	"Bia\xC5\x82y ",
	"Modry ",
	"D\xC4\x99""bowy ",
};

static const char * const _name_polish_1_f[] = {
	"Wielka ",
	"Ma\xC5\x82""a ",
	"Z\xC5\x82""a ",
	"Dobra ",
	"Nowa ",
	"Stara ",
	"Z\xC5\x82ota ",
	"Zielona ",
	"Bia\xC5\x82""a ",
	"Modra ",
	"D\xC4\x99""bowa ",
};

static const char * const _name_polish_1_n[] = {
	"Wielkie ",
	"Ma\xC5\x82""e ",
	"Z\xC5\x82""e ",
	"Dobre ",
	"Nowe ",
	"Stare ",
	"Z\xC5\x82ote ",
	"Zielone ",
	"Bia\xC5\x82""e ",
	"Modre ",
	"D\xC4\x99""bowe ",
};

static const char * const _name_polish_2_o[] = {
	"Frombork",
	"Gniezno",
	"Olsztyn",
	"Toru\xC5\x84",
	"Bydgoszcz",
	"Terespol",
	"Krak\xC3\xB3w",
	"Pozna\xC5\x84",
	"Wroc\xC5\x82""aw",
	"Katowice",
	"Cieszyn",
	"Bytom",
	"Frombork",
	"Hel",
	"Konin",
	"Lublin",
	"Malbork",
	"Sopot",
	"Sosnowiec",
	"Gda\xC5\x84sk",
	"Gdynia",
	"Sieradz",
	"Sandomierz",
	"Szczyrk",
	"Szczytno",
	"Szczecin",
	"Zakopane",
	"Szklarska Por\xC4\x99""ba",
	"Bochnia",
	"Golub-Dobrzyn",
	"Chojnice",
	"Ostrowiec",
	"Otwock",
	"Wolsztyn",
};

static const char * const _name_polish_2_m[] = {
	"Jarocin",
	"Gogolin",
	"Tomasz\xC3\xB3w",
	"Piotrk\xC3\xB3w",
	"Lidzbark",
	"Rypin",
	"Radzymin",
	"Wo\xC5\x82omin",
	"Pruszk\xC3\xB3w",
	"Olsztynek",
	"Rypin",
	"Cisek",
	"Krotoszyn",
	"Stoczek",
	"Lubin",
	"Lubicz",
	"Milicz",
	"Targ",
	"Ostr\xC3\xB3w",
	"Ozimek",
	"Puck",
	"Rzepin",
	"Siewierz",
	"Stargard",
	"Starogard",
	"Turek",
	"Tymbark",
	"Wolsztyn",
	"Strzepcz",
	"Strzebielin",
	"Sochaczew",
	"Gr\xC4\x99""bocin",
	"Gniew",
	"Lubliniec",
	"Lubasz",
	"Lutomiersk",
	"Niemodlin",
	"Przeworsk",
	"Ursus",
	"Tyczyn",
	"Sztum",
	"Szczebrzeszyn",
	"Wolin",
	"Wrzeszcz",
	"Zgierz",
	"Zieleniec",
	"Drobin",
	"Garwolin",
};

static const char * const _name_polish_2_f[] = {
	"Szprotawa",
	"Pogorzelica",
	"Mot\xC5\x82""awa",
	"Lubawa",
	"Nidzica",
	"Kruszwica",
	"Bierawa",
	"Brodnica",
	"Chojna",
	"Krzepica",
	"Ruda",
	"Rumia",
	"Tuchola",
	"Trzebinia",
	"Ustka",
	"Warszawa",
	"Bobowa",
	"Dukla",
	"Krynica",
	"Murowana",
	"Niemcza",
	"Zaspa",
	"Zawoja",
	"Wola",
	"Limanowa",
	"Rabka",
	"Skawina",
	"Pilawa",
};

static const char * const _name_polish_2_n[] = {
	"Lipsko",
	"Pilzno",
	"Przodkowo",
	"Strzelno",
	"Susz",
	"Jaworzno",
	"Choszczno",
	"Mogilno",
	"Luzino",
	"Miasto",
	"Dziadowo",
	"Kowalewo",
	"Legionowo",
	"Miastko",
	"Zabrze",
	"Zawiercie",
	"Kochanowo",
	"Miechucino",
	"Mirachowo",
	"Robakowo",
	"Kosakowo",
	"Borne",
	"Braniewo",
	"Sulinowo",
	"Chmielno",
	"Jastrz\xC4\x99""bie",
	"Gryfino",
	"Koronowo",
	"Lubichowo",
	"Opoczno",
};

static const char * const _name_polish_3_m[] = {
	" Wybudowanie",
	" \xC5\x9Awi\xC4\x99tokrzyski",
	" G\xC3\xB3rski",
	" Morski",
	" Zdr\xC3\xB3j",
	" Wody",
	" Bajoro",
	" Kraje\xC5\x84ski",
	" \xC5\x9Al\xC4\x85ski",
	" Mazowiecki",
	" Pomorski",
	" Wielki",
	" Maly",
	" Warmi\xC5\x84ski",
	" Mazurski",
	" Mniejszy",
	" Wi\xC4\x99kszy",
	" G\xC3\xB3rny",
	" Dolny",
	" Wielki",
	" Stary",
	" Nowy",
	" Wielkopolski",
	" Wzg\xC3\xB3rze",
	" Mosty",
	" Kujawski",
	" Ma\xC5\x82opolski",
	" Podlaski",
	" Lesny",
};

static const char * const _name_polish_3_f[] = {
	" Wybudowanie",
	" \xC5\x9Awi\xC4\x99tokrzyska",
	" G\xC3\xB3rska",
	" Morska",
	" Zdr\xC3\xB3j",
	" Woda",
	" Bajoro",
	" Kraje\xC5\x84ska",
	" \xC5\x9Al\xC4\x85ska",
	" Mazowiecka",
	" Pomorska",
	" Wielka",
	" Ma\xC5\x82""a",
	" Warmi\xC5\x84ska",
	" Mazurska",
	" Mniejsza",
	" Wi\xC4\x99ksza",
	" G\xC3\xB3rna",
	" Dolna",
	" Wielka",
	" Stara",
	" Nowa",
	" Wielkopolska",
	" Wzg\xC3\xB3rza",
	" Mosty",
	" Kujawska",
	" Malopolska",
	" Podlaska",
	" Le\xC5\x9Bna",
};

static const char * const _name_polish_3_n[] = {
	" Wybudowanie",
	" \xC5\x9Awietokrzyskie",
	" G\xC3\xB3rskie",
	" Morskie",
	" Zdr\xC3\xB3j",
	" Wody",
	" Bajoro",
	" Kraje\xC5\x84skie",
	" \xC5\x9Al\xC4\x85skie",
	" Mazowieckie",
	" Pomorskie",
	" Wielkie",
	" Ma\xC5\x82""e",
	" Warmi\xC5\x84skie ",
	" Mazurskie ",
	" Mniejsze",
	" Wi\xC4\x99ksze",
	" G\xC3\xB3rne",
	" Dolne",
	" Wielkie",
	" Stare",
	" Nowe",
	" Wielkopolskie",
	" Wzg\xC3\xB3rze",
	" Mosty",
	" Kujawskie",
	" Ma\xC5\x82opolskie",
	" Podlaskie",
	" Le\xC5\x9Bne",
};

static const char * const _name_czech_real[] = {
	"A\xC5\xA1",
	"Bene\xC5\xA1ov",
	"Beroun",
	"Bezdru\xC5\xBEice",
	"Blansko",
	"B\xC5\x99""eclav",
	"Brno",
	"Brunt\xC3\xA1l",
	"\xC4\x8C""esk\xC3\xA1 L\xC3\xADpa",
	"\xC4\x8C""esk\xC3\xA9 Bud\xC4\x9Bjovice",
	"\xC4\x8C""esk\xC3\xBD Krumlov",
	"D\xC4\x9B\xC4\x8D\xC3\xADn",
	"Doma\xC5\xBElice",
	"Dub\xC3\xAD",
	"Fr\xC3\xBD""dek-M\xC3\xADstek",
	"Havl\xC3\xAD\xC4\x8Dk\xC5\xAFv Brod",
	"Hodon\xC3\xADn",
	"Hradec Kr\xC3\xA1lov\xC3\xA9",
	"Humpolec",
	"Cheb",
	"Chomutov",
	"Chrudim",
	"Jablonec nad Nisou",
	"Jesen\xC3\xADk",
	"Ji\xC4\x8D\xC3\xADn",
	"Jihlava",
	"Jind\xC5\x99ich\xC5\xAFv Hradec",
	"Karlovy Vary",
	"Karvin\xC3\xA1",
	"Kladno",
	"Klatovy",
	"Kol\xC3\xADn",
	"Kosmonosy",
	"Krom\xC4\x9B\xC5\x99\xC3\xAD\xC5\xBE",
	"Kutn\xC3\xA1 Hora",
	"Liberec",
	"Litom\xC4\x9B\xC5\x99ice",
	"Louny",
	"Man\xC4\x9Bt\xC3\xADn",
	"M\xC4\x9Bln\xC3\xADk",
	"Mlad\xC3\xA1 Boleslav",
	"Most",
	"N\xC3\xA1""chod",
	"Nov\xC3\xBD Ji\xC4\x8D\xC3\xADn",
	"Nymburk",
	"Olomouc",
	"Opava",
	"Or\xC3\xA1\xC4\x8Dov",
	"Ostrava",
	"Pardubice",
	"Pelh\xC5\x99imov",
	"Pol\xC5\xBEice",
	"P\xC3\xADsek",
	"Plze\xC5\x88",
	"Praha",
	"Prachatice",
	"P\xC5\x99""erov",
	"P\xC5\x99\xC3\xAD""bram",
	"Prost\xC4\x9Bjov",
	"Rakovn\xC3\xADk",
	"Rokycany",
	"Rudn\xC3\xA1",
	"Rychnov nad Kn\xC4\x9B\xC5\xBEnou",
	"Semily",
	"Sokolov",
	"Strakonice",
	"St\xC5\x99""edokluky",
	"\xC5\xA0umperk",
	"Svitavy",
	"T\xC3\xA1""bor",
	"Tachov",
	"Teplice",
	"T\xC5\x99""eb\xC3\xAD\xC4\x8D",
	"Trutnov",
	"Uhersk\xC3\xA9 Hradi\xC5\xA1t\xC4\x9B",
	"\xC3\x9Ast\xC3\xAD nad Labem",
	"\xC3\x9Ast\xC3\xAD nad Orlic\xC3\xAD",
	"Vset\xC3\xADn",
	"Vy\xC5\xA1kov",
	"\xC5\xBD\xC4\x8F\xC3\xA1r nad S\xC3\xA1zavou",
	"Zl\xC3\xADn",
	"Znojmo",
};


/* The advanced hyperintelligent Czech town names generator!
 * The tables and MakeCzechTownName() is (c) Petr Baudis 2005 (GPL'd)
 * Feel free to ask me about anything unclear or if you need help
 * with cloning this for your own language. */

/* Sing., pl. */
enum CzechGender {
	CZG_SMASC,
	CZG_SFEM,
	CZG_SNEUT,
	CZG_PMASC,
	CZG_PFEM,
	CZG_PNEUT,
	/* Special for substantive stems - the ending chooses the gender. */
	CZG_FREE,
	/* Like CZG_FREE, but disallow CZG_SNEUT. */
	CZG_NFREE
};

enum CzechPattern {
	CZP_JARNI,
	CZP_MLADY,
	CZP_PRIVL
};

/* [CzechGender][CzechPattern] - replaces the last character of the adjective
 * by this.
 * XXX: [CZG_SMASC][CZP_PRIVL] needs special handling: -ovX -> -uv. */
static const char * const _name_czech_patmod[][3] = {
	/* CZG_SMASC */ { "\xC3\xAD", "\xC3\xBD", "X" },
	/* CZG_SFEM */  { "\xC3\xAD", "\xC3\xA1", "a" },
	/* CZG_SNEUT */ { "\xC3\xAD", "\xC3\xA9", "o" },
	/* CZG_PMASC */ { "\xC3\xAD", "\xC3\xA9", "y" },
	/* CZG_PFEM */  { "\xC3\xAD", "\xC3\xA9", "y" },
	/* CZG_PNEUT */ { "\xC3\xAD", "\xC3\xA1", "a" }
};

/* This way the substantive can choose only some adjectives/endings:
 * At least one of these flags must be satisfied: */
enum CzechAllow {
	CZA_SHORT = 1,
	CZA_MIDDLE = 2,
	CZA_LONG = 4,
	CZA_ALL = ~0
};

DECLARE_ENUM_AS_BIT_SET(CzechAllow)

/* All these flags must be satisfied (in the stem->others direction): */
enum CzechChoose {
	CZC_NONE = 0, // No requirements.
	CZC_COLOR = 1,
	CZC_POSTFIX = 2, // Matched if postfix was inserted.
	CZC_NOPOSTFIX = 4, // Matched if no postfix was inserted.
	CZC_ANY = ~0
};

DECLARE_ENUM_AS_BIT_SET(CzechChoose)

struct CzechNameSubst {
	CzechGender gender;
	CzechAllow allow;
	CzechChoose choose;
	const char *name;
};

struct CzechNameAdj {
	CzechPattern pattern;
	CzechChoose choose;
	const char *name;
};

/* Some of items which should be common are doubled. */
static const CzechNameAdj _name_czech_adj[] = {
	{ CZP_JARNI, CZC_ANY, "Horn\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Horn\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Doln\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Doln\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "P\xC5\x99""edn\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Zadn\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Kosteln\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Havran\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "\xC5\x98\xC3\xAD\xC4\x8Dn\xC3\xAD" },
	{ CZP_JARNI, CZC_ANY, "Jezern\xC3\xAD" },
	{ CZP_MLADY, CZC_ANY, "Velk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Velk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Mal\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Mal\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Vysok\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "\xC4\x8C""esk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Moravsk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Slov\xC3\xA1""ck\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Slezsk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Uhersk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Star\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Star\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Nov\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Nov\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Mlad\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Kr\xC3\xA1lovsk\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Kamenn\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Cihlov\xC3\xBD" },
	{ CZP_MLADY, CZC_ANY, "Divn\xC3\xBD" },
	{ CZP_MLADY, CZC_COLOR, "\xC4\x8C""erven\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "\xC4\x8C""erven\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "\xC4\x8C""erven\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "Zelen\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "\xC5\xBDlut\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "Siv\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "\xC5\xA0""ed\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "B\xC3\xADl\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "B\xC3\xADl\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "Modr\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "R\xC5\xAF\xC5\xBEov\xC3\xA1" },
	{ CZP_MLADY, CZC_COLOR, "\xC4\x8C""ern\xC3\xA1" },
	{ CZP_PRIVL, CZC_ANY, "Kr\xC3\xA1lova" },
	{ CZP_PRIVL, CZC_ANY, "Janova" },
	{ CZP_PRIVL, CZC_ANY, "Karlova" },
	{ CZP_PRIVL, CZC_ANY, "Kry\xC5\xA1tofova" },
	{ CZP_PRIVL, CZC_ANY, "Ji\xC5\x99\xC3\xADkova" },
	{ CZP_PRIVL, CZC_ANY, "Petrova" },
	{ CZP_PRIVL, CZC_ANY, "Sudovo" },
};

/* Considered a stem for choose/allow matching purposes. */
static const CzechNameSubst _name_czech_subst_full[] = {
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Sedlec" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Brod" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Brod" },
	{ CZG_SMASC, CZA_ALL, CZC_NONE, "\xC3\x9Aval" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "\xC5\xBD\xC4\x8F\xC3\xA1r" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Smrk" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Hora" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Lhota" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Lhota" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Hlava" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "L\xC3\xADpa" },
	{ CZG_SNEUT, CZA_ALL, CZC_COLOR, "Pole" },
	{ CZG_SNEUT, CZA_ALL, CZC_COLOR, "\xC3\x9A""dol\xC3\xAD" },
	{ CZG_PMASC, CZA_ALL, CZC_NONE, "\xC3\x9Avaly" },
	{ CZG_PFEM,  CZA_ALL, CZC_COLOR, "Luka" },
	{ CZG_PNEUT, CZA_ALL, CZC_COLOR, "Pole" },
};

/* TODO: More stems needed. --pasky */
static const CzechNameSubst _name_czech_subst_stem[] = {
	{ CZG_SMASC,             CZA_MIDDLE,            CZC_COLOR, "Kostel" },
	{ CZG_SMASC,             CZA_MIDDLE,            CZC_COLOR, "Kl\xC3\xA1\xC5\xA1ter" },
	{ CZG_SMASC, CZA_SHORT,                         CZC_COLOR, "Lhot" },
	{ CZG_SFEM,  CZA_SHORT,                         CZC_COLOR, "Lhot" },
	{ CZG_SFEM,  CZA_SHORT,                         CZC_COLOR, "Hur" },
	{ CZG_FREE,              CZA_MIDDLE | CZA_LONG, CZC_NONE, "Sedl" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_COLOR, "Hrad" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Pras" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Ba\xC5\xBE" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Tes" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "U\xC5\xBE" },
	{ CZG_NFREE,             CZA_MIDDLE | CZA_LONG, CZC_POSTFIX, "B\xC5\x99" },
	{ CZG_NFREE,             CZA_MIDDLE | CZA_LONG, CZC_NONE, "Vod" },
	{ CZG_NFREE,             CZA_MIDDLE | CZA_LONG, CZC_NONE, "Jan" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Prach" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Kunr" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Strak" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "V\xC3\xADt" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Vy\xC5\xA1" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "\xC5\xBD""at" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "\xC5\xBD""er" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "St\xC5\x99""ed" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Harv" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Pruh" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Tach" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "P\xC3\xADsn" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Jin" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Jes" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Jar" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Sok" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Hod" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Net" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Pra\xC5\xBE" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Nerat" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Kral" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Hut" },
	{ CZG_FREE,                           CZA_LONG, CZC_NOPOSTFIX, "Pan" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_NOPOSTFIX, "Odst\xC5\x99""ed" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_COLOR, "Mrat" },
	{ CZG_FREE,                           CZA_LONG, CZC_COLOR, "Hlav" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE,            CZC_NONE, "M\xC4\x9B\xC5\x99" },
	{ CZG_FREE,              CZA_MIDDLE | CZA_LONG, CZC_NONE, "Lip" },
};

/* Optional postfix inserted between stem and ending. */
static const char * const _name_czech_subst_postfix[] = {
	"av", "an", "at",
	"ov", "on", "ot",
	"ev", "en", "et",
};

/* This array must have the both neutral genders at the end! */
static const CzechNameSubst _name_czech_subst_ending[] = {
	{ CZG_SMASC, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "ec" },
	{ CZG_SMASC, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "\xC3\xADn" },
	{ CZG_SMASC, CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_ANY, "ov" },
	{ CZG_SMASC, CZA_SHORT       |        CZA_LONG, CZC_ANY, "kov" },
	{ CZG_SMASC,                          CZA_LONG, CZC_POSTFIX, "\xC3\xADn" },
	{ CZG_SMASC,                          CZA_LONG, CZC_POSTFIX, "n\xC3\xADk" },
	{ CZG_SMASC,                          CZA_LONG, CZC_ANY, "burk" },
	{ CZG_SFEM,  CZA_SHORT,                         CZC_ANY, "ka" },
	{ CZG_SFEM,              CZA_MIDDLE,            CZC_ANY, "inka" },
	{ CZG_SFEM,              CZA_MIDDLE,            CZC_ANY, "n\xC3\xA1" },
	{ CZG_SFEM,                           CZA_LONG, CZC_ANY, "ava" },
	{ CZG_PMASC,                          CZA_LONG, CZC_POSTFIX, "\xC3\xADky" },
	{ CZG_PMASC,                          CZA_LONG, CZC_ANY, "upy" },
	{ CZG_PMASC,                          CZA_LONG, CZC_ANY, "olupy" },
	{ CZG_PFEM,                           CZA_LONG, CZC_ANY, "avy" },
	{ CZG_PFEM,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_ANY, "ice" },
	{ CZG_PFEM,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_ANY, "i\xC4\x8Dky" },
	{ CZG_PNEUT, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "na" },
	{ CZG_SNEUT, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "no" },
	{ CZG_SNEUT,                          CZA_LONG, CZC_ANY, "i\xC5\xA1t\xC4\x9B" },
};

static const char * const _name_czech_suffix[] = {
	"nad Cidlinou",
	"nad Dyj\xC3\xAD",
	"nad Jihlavou",
	"nad Labem",
	"nad Lesy",
	"nad Moravou",
	"nad Nisou",
	"nad Odrou",
	"nad Ostravic\xC3\xAD",
	"nad S\xC3\xA1zavou",
	"nad Vltavou",
	"pod Prad\xC4\x9B""dem",
	"pod Radho\xC5\xA1t\xC4\x9Bm",
	"pod \xC5\x98\xC3\xADpem",
	"pod Sn\xC4\x9B\xC5\xBEkou",
	"pod \xC5\xA0pi\xC4\x8D\xC3\xA1kem",
	"pod Sedlem",
	"v \xC4\x8C""ech\xC3\xA1""ch",
	"na Morav\xC4\x9B",
};



static const char * const _name_romanian_real[] = {
	"Adjud",
	"Alba Iulia",
	"Alexandria",
	"Babadag",
	"Bac\xC3\xA3u",
	"Baia Mare",
	"B\xC3\xA3ile Herculane",
	"B\xC3\xA3ilesti",
	"B\xC3\xA2rlad",
	"Bicaz",
	"Bistrita",
	"Blaj",
	"Borsec",
	"Botosani",
	"Br\xC3\xA3ila",
	"Brasov",
	"Bucuresti",
	"Buftea",
	"Buz\xC3\xA3u",
	"C\xC3\xA3l\xC3\xA3rasi",
	"Caransebes",
	"Cernavod\xC3\xA3",
	"Cluj-Napoca",
	"Constanta",
	"Covasna",
	"Craiova",
	"Dej",
	"Deva",
	"Dorohoi",
	"Dr.-Tr. Severin",
	"Dr\xC3\xA3g\xC3\xA3sani",
	"F\xC3\xA3g\xC3\xA3ras",
	"F\xC3\xA3lticeni",
	"Fetesti",
	"Focsani",
	"Galati",
	"Gheorgheni",
	"Giurgiu",
	"H\xC3\xA2rsova",
	"Hunedoara",
	"Husi",
	"Iasi",
	"Isaccea",
	"Lugoj",
	"M\xC3\xA3""cin",
	"Mangalia",
	"Medgidia",
	"Medias",
	"Miercurea Ciuc",
	"Mizil",
	"Motru",
	"N\xC3\xA3s\xC3\xA3ud",
	"N\xC3\xA3vodari",
	"Odobesti",
	"Oltenita",
	"Onesti",
	"Oradea",
	"Orsova",
	"Petrosani",
	"Piatra Neamt",
	"Pitesti",
	"Ploiesti",
	"Predeal",
	"R\xC3\xA2mnicu V\xC3\xA2lcea",
	"Reghin",
	"Resita",
	"Roman",
	"Rosiorii de Vede",
	"Satu Mare",
	"Sebes",
	"Sf\xC3\xA2ntu Gheorghe",
	"Sibiu",
	"Sighisoara",
	"Sinaia",
	"Slatina",
	"Slobozia",
	"Sovata",
	"Suceava",
	"Sulina",
	"T\xC3\xA3nd\xC3\xA3rei",
	"T\xC3\xA2rgoviste",
	"T\xC3\xA2rgu Jiu",
	"T\xC3\xA2rgu Mures",
	"Tecuci",
	"Timisoara",
	"Tulcea",
	"Turda",
	"Turnu M\xC3\xA3gurele",
	"Urziceni",
	"Vaslui",
	"Vatra Dornei",
	"Victoria",
	"Videle",
	"Zal\xC3\xA3u",
};

static const char * const _name_slovak_real[] = {
	"Bratislava",
	"Banovce nad Bebravou",
	"Banska Bystrica",
	"Banska Stiavnica",
	"Bardejov",
	"Brezno",
	"Brezova pod Bradlom",
	"Bytca",
	"Cadca",
	"Cierna nad Tisou",
	"Detva",
	"Detva",
	"Dolny Kubin",
	"Dolny Kubin",
	"Dunajska Streda",
	"Gabcikovo",
	"Galanta",
	"Gbely",
	"Gelnica",
	"Handlova",
	"Hlohovec",
	"Holic",
	"Humenne",
	"Hurbanovo",
	"Kezmarok",
	"Komarno",
	"Kosice",
	"Kremnica",
	"Krompachy",
	"Kuty",
	"Leopoldov",
	"Levoca",
	"Liptovsky Mikulas",
	"Lucenec",
	"Malacky",
	"Martin",
	"Medzilaborce",
	"Michalovce",
	"Modra",
	"Myjava",
	"Namestovo",
	"Nitra",
	"Nova Bana",
	"Nove Mesto nad Vahom",
	"Nove Zamky",
	"Partizanske",
	"Pezinok",
	"Piestany",
	"Poltar",
	"Poprad",
	"Povazska Bystrica",
	"Prievidza",
	"Puchov",
	"Revuca",
	"Rimavska Sobota",
	"Roznava",
	"Ruzomberok",
	"Sabinov",
	"Sala",
	"Senec",
	"Senica",
	"Sered",
	"Skalica",
	"Sladkovicovo",
	"Smolenice",
	"Snina",
	"Stara Lubovna",
	"Stara Tura",
	"Strazske",
	"Stropkov",
	"Stupava",
	"Sturovo",
	"Sulekovo",
	"Topolcany",
	"Trebisov",
	"Trencin",
	"Trnava",
	"Turcianske Teplice",
	"Tvrdosin",
	"Vrable",
	"Vranov nad Toplou",
	"Zahorska Bystrica",
	"Zdiar",
	"Ziar nad Hronom",
	"Zilina",
	"Zlate Moravce",
	"Zvolen",
};

static const char * const _name_norwegian_1[] = {
	"Arna",
	"Aust",
	"Bj\xC3\xB8rk",
	"Bj\xC3\xB8rn",
	"Brand",
	"B\xC3\xB8ver",
	"Drag",
	"Dr\xC3\xB8",
	"Eids",
	"Egge",
	"Fager",
	"Finns",
	"Flat",
	"Foll",
	"Foss",
	"Fugle",
	"Furu",
	"Gaus",
	"Galte",
	"Geir",
	"Gl\xC3\xB8s",
	"Gran",
	"Grind",
	"Grims",
	"Gr\xC3\xB8n",
	"Gr\xC3\xB8t",
	"Gulle",
	"Haka",
	"Hammer",
	"Haug",
	"Hol",
	"Hon",
	"Hop",
	"Hov",
	"Jess",
	"Kabel",
	"Kjerns",
	"Kjerring",
	"Knatte",
	"Krok",
	"K\xC3\xB8y",
	"Lang",
	"Lauv",
	"Leir",
	"Lund",
	"Logn",
	"Lo",
	"Lyng",
	"L\xC3\xB8n",
	"Mesna",
	"Mel",
	"Mo",
	"Nar",
	"Nitte",
	"Nord",
	"Odd",
	"Ola",
	"Otte",
	"Ran",
	"Rev",
	"Rog",
	"Roms",
	"Rosen",
	"Sand",
	"Sau",
	"Sel",
	"Sol",
	"Sjur",
	"Sk\xC3\xA5r",
	"Sl\xC3\xA5tt",
	"Stj\xC3\xB8r",
	"Stor",
	"Svart",
	"Svens",
	"Svin",
	"Sylte",
	"Syn",
	"Tran",
	"Vass",
	"Ved",
	"Vest",
	"Vesle",
	"Vik",
	"V\xC3\xA5g",
};

static const char * const _name_norwegian_2[] = {
	"aker",
	"anger",
	"bakken",
	"bekk",
	"berg",
	"botn",
	"breen",
	"bu",
	"bugen",
	"by",
	"bygd",
	"b\xC3\xB8",
	"dal",
	"egga",
	"eid",
	"elv",
	"enga",
	"foss",
	"fjell",
	"fjord",
	"foten",
	"gard",
	"grend",
	"hammer",
	"haug",
	"havn",
	"heim",
	"hella",
	"hovda",
	"h\xC3\xB8""a",
	"h\xC3\xB8gda",
	"kampen",
	"kj\xC3\xB8len",
	"kollen",
	"kroken",
	"land",
	"lia",
	"mark",
	"moen",
	"myr",
	"nes",
	"nuten",
	"osen",
	"rike",
	"rud",
	"sand",
	"set",
	"sj\xC3\xB8""en",
	"skogen",
	"slette",
	"snipa",
	"stad",
	"stua",
	"stulen",
	"sund",
	"svingen",
	"s\xC3\xA6tra",
	"tinden",
	"tun",
	"vang",
	"vatn",
	"veid",
	"vik",
	"voll",
	"v\xC3\xA5g",
	"um",
	"\xC3\xA5sen",
};

static const char * const _name_norwegian_real[] = {
	"Alta",
	"Arendal",
	"Askim",
	"Bergen",
	"Bod\xC3\xB8",
	"Brevik",
	"Bryne",
	"Br\xC3\xB8nn\xC3\xB8ysund",
	"Drammen",
	"Dr\xC3\xB8""bak",
	"Egersund",
	"Elverum",
	"Farsund",
	"Fauske",
	"Finnsnes",
	"Flekkefjord",
	"Flora",
	"Fosnav\xC3\xA5g",
	"Fredrikstad",
	"F\xC3\xB8rde",
	"Gj\xC3\xB8vik",
	"Grimstad",
	"Halden",
	"Hamar",
	"Hammerfest",
	"Harstad",
	"Haugesund",
	"Holmestrand",
	"Horten",
	"J\xC3\xB8rpeland",
	"Kirkenes",
	"Kolvereid",
	"Kongsberg",
	"Kongsvinger",
	"Kopervik",
	"Krager\xC3\xB8",
	"Kristiansand",
	"Kristiansund",
	"Langesund",
	"Larvik",
	"Leirvik",
	"Leknes",
	"Levanger",
	"Lillehammer",
	"Lillesand",
	"Lillestr\xC3\xB8m",
	"Lyngdal",
	"L\xC3\xB8renskog",
	"Mandal",
	"Mo i Rana",
	"Molde",
	"Mosj\xC3\xB8""en",
	"Moss",
	"Mysen",
	"M\xC3\xA5l\xC3\xB8y",
	"Namsos",
	"Narvik",
	"Notodden",
	"Odda",
	"Oslo",
	"Otta",
	"Porsgrunn",
	"Ringerike",
	"Ris\xC3\xB8r",
	"Rjukan",
	"Sandefjord",
	"Sandnes",
	"Sandnessj\xC3\xB8""en",
	"Sandvika",
	"Sarpsborg",
	"Sauda",
	"Ski",
	"Skien",
	"Skudeneshavn",
	"Sortland",
	"Stathelle",
	"Stavanger",
	"Steinkjer",
	"Stj\xC3\xB8rdal",
	"Stokmarknes",
	"Stord",
	"Svelvik",
	"Svolv\xC3\xA6r",
	"Troms\xC3\xB8",
	"Trondheim",
	"Tvedestrand",
	"T\xC3\xB8nsberg",
	"Ulsteinvik",
	"Vads\xC3\xB8",
	"Vard\xC3\xB8",
	"Verdals\xC3\xB8ra",
	"\xC3\x85krehamn",
	"\xC3\x85lesund",
	"\xC3\x85ndalsnes",
};

static const char * const _name_hungarian_1[] = {
	"Nagy-",
	"Kis-",
	"Fels\xC5\x91-",
	"Als\xC3\xB3-",
	"\xC3\x9Aj-",
};

static const char * const _name_hungarian_2[] = {
	"Bodrog",
	"Dr\xC3\xA1va",
	"Duna",
	"Hej\xC5\x91",
	"Hern\xC3\xA1""d",
	"R\xC3\xA1""ba",
	"Saj\xC3\xB3",
	"Szamos",
	"Tisza",
	"Zala",
	"Balaton",
	"Fert\xC5\x91",
	"Bakony",
	"Cserh\xC3\xA1t",
	"Bihar",
	"Hajd\xC3\xBA",
	"J\xC3\xA1sz",
	"Kun",
	"Magyar",
	"N\xC3\xB3gr\xC3\xA1""d",
	"Ny\xC3\xADr",
	"Somogy",
	"Sz\xC3\xA9kely",
	"Buda",
	"Gy\xC5\x91r",
	"Pest",
	"Feh\xC3\xA9r",
	"Cser\xC3\xA9p",
	"Erd\xC5\x91",
	"Hegy",
	"Homok",
	"Mez\xC5\x91",
	"Puszta",
	"S\xC3\xA1r",
	"Cs\xC3\xA1sz\xC3\xA1r",
	"Herceg",
	"Kir\xC3\xA1ly",
	"Nemes",
	"P\xC3\xBCsp\xC3\xB6k",
	"Szent",
	"Alm\xC3\xA1s",
	"Szilv\xC3\xA1s",
	"Agg",
	"Aranyos",
	"B\xC3\xA9k\xC3\xA9s",
	"Egyh\xC3\xA1zas",
	"Gagy",
	"Heves",
	"Kapos",
	"T\xC3\xA1pi\xC3\xB3",
	"Torna",
	"Vas",
	"V\xC3\xA1mos",
	"V\xC3\xA1s\xC3\xA1ros",
};

static const char * const _name_hungarian_3[] = {
	"ap\xC3\xA1ti",
	"b\xC3\xA1""ba",
	"bikk",
	"dob",
	"fa",
	"f\xC3\xB6ld",
	"hegyes",
	"kak",
	"kereszt",
	"k\xC3\xBCrt",
	"lad\xC3\xA1ny",
	"m\xC3\xA9rges",
	"szalonta",
	"telek",
	"vas",
	"v\xC3\xB6lgy",
};

static const char * const _name_hungarian_4[] = {
	"alja",
	"egyh\xC3\xA1za",
	"h\xC3\xA1za",
	"\xC3\xBAr",
	"v\xC3\xA1r",
};

static const char * const _name_hungarian_real[] = {
	"Ajka",
	"Asz\xC3\xB3""d",
	"Badacsony",
	"Baja",
	"Budapest",
	"Debrecen",
	"Eger",
	"Fony\xC3\xB3""d",
	"G\xC3\xB6""d\xC3\xB6ll\xC5\x91",
	"Gy\xC5\x91r",
	"Gyula",
	"Karcag",
	"Kecskem\xC3\xA9t",
	"Keszthely",
	"Kisk\xC3\xB6re",
	"Kocsord",
	"Kom\xC3\xA1rom",
	"K\xC5\x91szeg",
	"Mak\xC3\xB3",
	"Moh\xC3\xA1""cs",
	"Miskolc",
	"\xC3\x93zd",
	"Paks",
	"P\xC3\xA1pa",
	"P\xC3\xA9""cs",
	"Polg\xC3\xA1r",
	"Sarkad",
	"Si\xC3\xB3""fok",
	"Szeged",
	"Szentes",
	"Szolnok",
	"Tihany",
	"Tokaj",
	"V\xC3\xA1""c",
	"Z\xC3\xA1hony",
	"Zirc",
};

static const char * const _name_swiss_real[] = {
	"Aarau",
	"Aesch",
	"Altdorf",
	"Arosa",
	"Appenzell",
	"Arbon",
	"Altst\xC3\xA4tten",
	"Baar",
	"Baden",
	"Bellinzona",
	"Brig-Glis",
	"Bienne",
	"Bulle",
	"Binningen",
	"Burgdorf",
	"Bern",
	"Basel",
	"B\xC3\xBClach",
	"Carouge",
	"Cham",
	"Chiasso",
	"Chur",
	"Davos",
	"Del\xC3\xA9mont",
	"Dietikon",
	"D\xC3\xBC""bendorf",
	"Emmen",
	"Freienbach-Pf\xC3\xA4""ffikon",
	"Fribourg",
	"Frauenfeld",
	"Gen\xC3\xA8ve",
	"Glarus",
	"Gossau",
	"Grenchen",
	"Herisau",
	"Horgen",
	"Horw",
	"Illnau-Effretikon",
	"Ittigen",
	"Jona",
	"Kriens",
	"Kloten",
	"K\xC3\xB6niz",
	"Kreuzlingen",
	"K\xC3\xBCsnacht",
	"Agen",
	"Lancy",
	"La Chaux-de-Fonds",
	"Lenzburg",
	"Lugano",
	"Langenthal",
	"Littau",
	"Le Locle",
	"La Neuveville",
	"Locarno",
	"Liestal",
	"La Tour-de-Peilz",
	"Lausanne",
	"Lyss",
	"Luzern",
	"Martigny",
	"M\xC3\xBCnchenstein",
	"Meyrin",
	"Montreux",
	"Monthey",
	"Morges",
	"Murten",
	"Moutier",
	"Muttenz",
	"Neuch\xC3\xA2tel",
	"Neuhausen am Rheinfall",
	"Nyon",
	"Olten",
	"Onex",
	"Opfikon",
	"Ostermundigen",
	"Payerne",
	"Peseux",
	"Prilly",
	"Pully",
	"Rapperswil",
	"Richterswil",
	"Regensdorf",
	"Rheinfelden",
	"Riehen",
	"Renens",
	"Romanshorn",
	"Rorschach",
	"Stans",
	"Schaffhausen",
	"Steffisburg",
	"St. Gallen",
	"Schlieren",
	"Sierre",
	"Solothurn",
	"St. Moritz",
	"Sion",
	"Spiez",
	"St\xC3\xA4""fa",
	"Sursee",
	"Schwyz",
	"Thalwil",
	"Th\xC3\xB4nex",
	"Thun",
	"Uster",
	"Uzwil",
	"Vernier",
	"Volketswil",
	"Versoix",
	"Vevey",
	"W\xC3\xA4""denswil",
	"Wettingen",
	"Wil",
	"Wallisellen",
	"Winterthur",
	"Wohlen",
	"Worb",
	"Wetzikon",
	"Yverdon-les-Bains",
	"Zollikon",
	"Zofingen",
	"Z\xC3\xBCrich",
	"Zug",
};

static const char * const _name_danish_1[] = {
	"Gamle ",
	"Lille ",
	"Nye ",
	"Store ",
	"Kirke ",
	"N\xC3\xB8rre ",
	"Vester ",
	"S\xC3\xB8nder ",
	"\xC3\x98ster ",
	"Hvide ",
	"H\xC3\xB8je ",
	"Kongens ",
};

static const char * const _name_danish_2[] = {
	"Ager",
	"Alle",
	"Aske",
	"Balle",
	"Bede",
	"Birke",
	"Bjerring",
	"Bj\xC3\xA6ver",
	"Blommens",
	"Blok",
	"Bolder",
	"Bred",
	"Charlotten",
	"Christians",
	"Danne",
	"Diana",
	"Es",
	"Fredens",
	"Frederiks",
	"Fugle",
	"F\xC3\xA5re",
	"Gille",
	"Gis",
	"Givs",
	"Glams",
	"Glo",
	"Guld",
	"Had",
	"Haralds",
	"Hassel",
	"Hede",
	"Helle",
	"Hessel",
	"Hjorts",
	"Hol",
	"Horn",
	"Humle",
	"H\xC3\xB8j",
	"H\xC3\xB8r",
	"Is",
	"Jyde",
	"J\xC3\xA6gers",
	"Karls",
	"Klov",
	"Kokke",
	"Kvist",
	"Lang",
	"Lange",
	"Mari",
	"Nord",
	"Ny",
	"Oks",
	"Ring",
	"R\xC3\xB8""de",
	"Rung",
	"R\xC3\xB8r",
	"Rud",
	"Saks",
	"Salt",
	"Skam",
	"Silke",
	"Skod",
	"Sk\xC3\xA6l",
	"Sk\xC3\xA6r",
	"Sol",
	"Svend",
	"Svine",
	"Strand",
	"Stubbe",
	"Ting",
	"Tj\xC3\xA6re",
	"Tore",
	"Uger",
	"Ulf",
	"Val",
	"Vand",
	"Vej",
	"Vor",
	"V\xC3\xA6r",
	"\xC3\x98r",
	"\xC3\x85l",
};

static const char * const _name_danish_3[] = {
	"basse",
	"borg",
	"berg",
	"bro",
	"by",
	"havn",
	"strup",
	"holm",
	"hus",
	"k\xC3\xB8""bing",
	"lund",
	"lunde",
	"sund",
	"ovre",
	"h\xC3\xB8j",
	"dal",
	"sted",
	"sten",
	"l\xC3\xB8se",
	"r\xC3\xB8""d",
	"magle",
	"s\xC3\xB8",
	"bjerg",
	"b\xC3\xA6k",
	"drup",
	"lev",
	"bo",
	"lyst",
	"feld",
	"skov",
};

static const char * const _name_turkish_prefix[] = {
	"Ak\xC3\xA7""a",
	"Alt\xC4\xB1n",
	"Bah\xC3\xA7""e",
	"Boz",
	"B\xC3\xBCy\xC3\xBCk",
	"\xC3\x87""ay",
	"Do\xC4\x9Fu",
	"Eski",
	"G\xC3\xBCzel",
	"K\xC4\xB1z\xC4\xB1l",
	"K\xC3\xBC\xC3\xA7\xC3\xBCk",
	"Orta",
	"Sar\xC4\xB1",
	"Sultan",
	"Ulu",
	"Yeni",
};

static const char * const _name_turkish_middle[] = {
	"aga\xC3\xA7",
	"ayva",
	"\xC3\xA7""am",
	"elma",
	"kurt",
	"pazar",
	"yal\xC4\xB1",
};

static const char * const _name_turkish_suffix[] = {
	"dere",
	"hisar",
	"kale",
	"kaya",
	"kent",
	"k\xC3\xB6y",
	"ova",
	"\xC3\xB6z\xC3\xBC",
	"\xC3\xB6ren",
	"pazar",
	"saray",
	"tepe",
	"yer",
	"yurt",
};

static const char * const _name_turkish_real[] = {
	"Adana",
	"Ad\xC4\xB1yaman",
	"Afyon",
	"A\xC4\x9Fr\xC4\xB1",
	"Amasya",
	"Antalya",
	"Artvin",
	"Bal\xC4\xB1kesir",
	"Bilecik",
	"Bitlis",
	"Bolu",
	"Burdur",
	"Bursa",
	"\xC3\x87""anakkale",
	"\xC3\x87""ank\xC4\xB1r\xC4\xB1",
	"Denizli",
	"Diyarbak\xC4\xB1r",
	"Edirne",
	"Elaz\xC4\xB1\xC4\x9F",
	"Erzurum",
	"Eskisehir",
	"Giresun",
	"G\xC3\xBCm\xC3\xBC\xC5\x9Fhane",
	"Hatay",
	"Isparta",
	"\xC4\xB0\xC3\xA7""el",
	"\xC4\xB0stanbul",
	"\xC4\xB0zmir",
	"Kars",
	"Kastamonu",
	"Kayseri",
	"Kirklareli",
	"Kocaeli",
	"Konya",
	"K\xC3\xBCtahya",
	"Malatya",
	"Manisa",
	"Kahramanmara\xC5\x9F",
	"Mardin",
	"Mu\xC4\x9Fla",
	"Mu\xC5\x9F",
	"Nev\xC5\x9F""ehir",
	"Ni\xC4\x9F""de",
	"Rize",
	"Sakarya",
	"Samsun",
	"Siirt",
	"Sinop",
	"Sivas",
	"Trabzon",
	"\xC5\x9E""anl\xC4\xB1urfa",
	"Van",
	"Yozgat",
	"Zonguldak",
	"Aksaray",
	"Bayburt",
	"Karaman",
	"\xC5\x9E\xC4\xB1rnak",
	"Bart\xC4\xB1n",
	"Ardahan",
	"I\xC4\x9F""d\xC4\xB1r",
	"Yalova",
	"Karab\xC3\xBCk",
	"Osmaniye",
	"D\xC3\xBCzce",
};

static const char * const _name_italian_real[] = {
	"Roma",
	"Milano",
	"Napoli",
	"Torino",
	"Venezia",
	"Firenze",
	"Palermo",
	"Genova",
	"Parma",
	"Bologna",
	"Bari",
	"Cagliari",
	"Sassari",
	"Pisa",
	"Aosta",
	"Brescia",
	"Verona",
	"Bolzano",
	"Padova",
	"Udine",
	"Trieste",
	"Livorno",
	"Ancona",
	"Perugia",
	"Pescara",
	"L'Aquila",
	"Campobasso",
	"Potenza",
	"Cosenza",
	"Reggio Calabria",
	"Catania",
	"Caltanisetta",
	"Agrigento",
	"La Spezia",
	"Modena",
	"Vicenza",
	"Mantova",
	"Cremona",
	"Piacenza",
	"Reggio Emilia",
	"Foggia",
	"Benevento",
	"Salerno",
	"Catanzaro",
	"Lecce",
	"Como",
	"Lecco",
	"Sondrio",
	"Trento",
	"Desenzano",
	"Cuneo",
	"Asti",
	"Lodi",
	"Novara",
	"Biella",
	"Vercelli",
	"Rieti",
	"Nuoro",
	"Oristano",
	"Matera",
	"Taranto",
	"Varese",
	"Bergamo",
	"Pavia",
	"Caserta",
	"Frosinone",
	"Latina",
	"Enna",
	"Ragusa",
	"Siracusa",
	"Pordenone",
	"Imperia",
	"Verbania",
	"Alessandria",
	"Messina",
	"Siena",
	"Arezzo",
	"Grosseto",
};

static const char * const _name_italian_pref[] = {
	"Alpe ",
	"Borgo ",
	"Cascina ",
	"Castel ",
	"Fonte ",
	"Forte ",
	"Malga ",
	"Pieve ",
	"Poggio ",
	"Rocca ",
	"Villa ",
	"Villar ",
};

static const char * const _name_italian_1m[] = {
	"Bel",
	"Borgo",
	"Bosco",
	"Campo",
	"Capo",
	"Casal",
	"Castel",
	"Colle",
	"Fiume",
	"Fonte",
	"Lago",
	"Mezzo",
	"Monte",
	"Mon",
	"Orto",
	"Passo",
	"Prato",
	"Poggio",
	"Ponte",
	"Pozzo",
	"Sasso",
	"Tra",
	"Tre",
	"Ver",
	"Vico",
};

static const char * const _name_italian_1f[] = {
	"Acqua",
	"Bra",
	"Cala",
	"Casa",
	"Chiesa",
	"Citta",
	"Civita",
	"Corte",
	"Costa",
	"Croce",
	"Fontana",
	"Grotta",
	"Guardia",
	"Mezza",
	"Palma",
	"Pietra",
	"Ripa",
	"Rocca",
	"Serra",
	"Torre",
	"Val",
	"Valle",
	"Villa",
};

static const char * const _name_italian_2[] = {
	"bell",
	"bianc",
	"cald",
	"chiar",
	"cort",
	"ferrat",
	"fier",
	"fredd",
	"gioios",
	"grec",
	"guzz",
	"lung",
	"long",
	"migli",
	"negr",
	"ner",
	"nov",
	"nuov",
	"ross",
	"rotond",
	"scur",
	"secc",
	"sett",
	"vecchi",
	"ventos",
	"vers",
	"viv",
};

static const char * const _name_italian_2i[] = {
	"",
	"breve",
	"brevi",
	"chiari",
	"ferro",
	"fieschi",
	"fiore",
	"fonte",
	"forte",
	"gate",
	"leone",
	"maggiore",
	"minore",
	"mole",
	"monte",
	"poli",
	"scuri",
	"terra",
	"te",
	"torrione",
	"vento",
	"verde",
	"versiere",
};


static const char * const _name_italian_3[] = {
	" Marittimo",
	" Marittima",
	" del Capo",
	" del Monte",
	" di Sopra",
	" di Sotto",
	" sui Monti",
	" dei Marmi",
	" dei Sassi",
	" delle Fonti",
	" sui Prati",
	" a Mare",
	" Superiore",
	" Inferiore",
	" Terme",
	" Alta",
	" Bassa",
	" Brianza",
	" Vesuviano",
	" Scrivia",
	" Ticino",
};

static const char * const _name_italian_river1[] = {
	" del",
	" sul",
	" al",
	" nel",
};

static const char * const _name_italian_river2[] = {
	"l'Adda",
	"l'Adige",
	"le Alpi",
	"l'Arno",
	" Bormida",
	" Brenta",
	"la Dora Baltea",
	" Lambro",
	" Mincio",
	" Naviglio",
	"l'Oglio",
	"l'Olona",
	"l'Ombrone",
	" Panaro",
	" Piave",
	" Po",
	" Reno",
	" Scrivia",
	" Secchia",
	" Serio",
	" Tagliamento",
	" Tanaro",
	" Taro",
	" Ticino",
	" Tevere",
};

static const char * const _name_catalan_real[] = {
	"Barcelona",
	"L'Hospitalet de Llobregat",
	"Cerdanyola",
	"Martorell",
	"Badalona",
	"Tarragona",
	"Lleida",
	"Girona",
	"Sabadell",
	"Terrassa",
	"Reus",
	"Valls",
	"Vic",
	"Vielha e Mijaran",
	"Amposta",
	"Tortosa",
	"Berga",
	"Olot",
	"Mollerussa",
	"Banyoles",
	"Figueres",
	"Balaguer",
	"Vilafranca del Pened\xC3\xA8s",
	"La Seu d'Urgell",
	"El Pont de Suert",
	"Igualada",
	"Manresa",
	"Solsona",
	"Les Borges Blanques",
	"Tremp",
	"Sort",
	"Colera",
	"Portbou",
	"El Vendrell",
	"Falset",
	"Ripoll",
	"Cervera",
	"Gandesa",
	"Matar\xC3\xB3",
	"Montblanc",
	"Vilanova i la Geltr\xC3\xBA",
	"T\xC3\xA0rrega",
	"Camprodon",
	"Campdev\xC3\xA0nol",
	"Cambrils",
	"Begur",
	"Setcases",
	"Palafrugell",
	"Begues",
	"El Bruc",
	"Cadaqu\xC3\xA9s",
	"Collbat\xC3\xB3",
	"Cervell\xC3\xB3",
	"Esparreguera",
	"Abrera",
	"Alp",
	"Das",
	"Cercs",
	"Manlleu",
	"El Masnou",
	"Molins de Rei",
	"Monistrol",
	"Rocallaura",
	"Rub\xC3\xAD",
	"Ripollet",
	"Sitges",
	"Roses",
};

static const char * const _name_catalan_pref[] = {
	"El Pont de ",
	"Parets de ",
	"Canet de ",
	"Castellar de ",
	"Corbera de ",
	"Arenys de ",
	"Calella de ",
	"La Seu de ",
	"La Bisbal de ",
	"Torroella de ",
	"Port de ",
	"Vilafranca de ",
	"Vilanova de ",
	"Caldes de ",
	"La Conca de ",
	"Olesa de ",
	"La Roca de ",
	"Sant Esteve de ",
	"Sant Andreu de ",
	"Sant Jordi de ",
	"Sant Joan de ",
	"Sant Feliu de ",
	"Sant Quirze de ",
	"Sant Sadurn\xC3\xAD de ",
	"Santa Coloma de ",
	"Santa Margarida de ",
	"Santa Maria de ",
	"Sant Mart\xC3\xAD de ",
	"Sant Pere de ",
	"Sant Juli\xC3\xA0 de ",
	"Sant Vicen\xC3\xA7 de ",

};

static const char * const _name_catalan_1m[] = {
	"Torrent",
	"Cami",
	"Mont",
	"Bell",
	"Puig",
	"Riu",
};

static const char * const _name_catalan_1f[] = {
	"Pala",
	"Selva",
	"Vall",
	"Serra",
	"Torre",
	"Riba",
	"Cova",
	"Terra",
};

static const char * const _name_catalan_2m[] = {
	"alt",
	"baix",
	"fosc",
	"pelat",
	"vent\xC3\xB3s",
	"negre",
	"roig",
	"gr\xC3\xADs",
};

static const char * const _name_catalan_2f[] = {
	"baixa",
	"alta",
	"fosca",
	"clara",
	"negra",
	"roja",
	"grisa",
	"freda",
};

static const char * const _name_catalan_3[] = {
	" Desp\xC3\xAD",
	" Desvern",
	" del Cam\xC3\xAD",
	" de Mar",
	" de Dalt",
	" de Baix",
	" del Vall\xC3\xA8s",
	" de Bergued\xC3\xA0",
	" de Conflent",
	" de la Plana",
};

static const char * const _name_catalan_river1[] = {
	" d'Anoia",
	" de Ter",
	" de Llobregat",
	" d'Ebre",
	" de Segre",
	" de Francol\xC3\xAD",
};
