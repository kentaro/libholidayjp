#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include "khash.h"

typedef struct
{
    char* date;
    int   year;
    int   month;
    int   day;
    char* week;
    char* weeken;
    char* name;
    char* name_en;
} holidayjp_holiday;

KHASH_MAP_INIT_STR(hj, holidayjp_holiday*)
typedef khash_t(hj) holidaysjp;

holidaysjp* holidayjp_new();

void
holidayjp_between(holidaysjp *h, char* start, char* end, holidayjp_holiday* holidays[])
{
    int i;
    khiter_t k;
    holidayjp_holiday* holiday;

    char* token;
    char* start_year;
    char* start_month;
    char* start_day;
    char* end_year;
    char* end_month;
    char* end_day;

    token = strtok(start, "-");
    strcpy(start_year, token);
    token = strtok(NULL, "-");
    strcpy(start_month, token);
    token = strtok(NULL, "-");
    strcpy(start_day, token);

    token = strtok(end, "-");
    strcpy(end_year, token);
    token = strtok(NULL, "-");
    strcpy(end_month, token);
    token = strtok(NULL, "-");
    strcpy(end_day, token);

    for (k = kh_begin(h); k != kh_end(h); ++k) {
        holiday = kh_value(h, k);
        if (
            (
                holiday->year  >= atoi(start_year)  &&
                holiday->month >= atoi(start_month) &&
                holiday->day   >= atoi(start_day)
            ) &&
            (
                holiday->year  <= atoi(end_year) &&
                holiday->month <= atoi(end_year) &&
                holiday->day   <= atoi(end_year)
            )
        ) {
            holidays[i] = holiday;
            i++;
        }
    }
}

int
holidayjp_is_holiday(holidaysjp *h, char* date_string)
{
    int ret;
    khiter_t k;

    k = kh_get(hj, h, date_string);
    if (kh_exist(h, k)) {
        ret = 1;
    } else {
        ret = 0;
    }

    return ret;
}

void
holidayjp_hash_set(holidaysjp *h, char* key, holidayjp_holiday* value)
{
    int ret;
    khiter_t k;

    k = kh_put(hj, h, key, &ret);
    kh_value(h, k) = value;
}

holidaysjp*
holidayjp_new()
{
    holidaysjp *h = kh_init(hj);

/* AUTO GENERATED START */
static holidayjp_holiday h1 = {
    "1970-01-01",
    1970,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1970-01-01", &h1);
static holidayjp_holiday h2 = {
    "1970-01-15",
    1970,
    1,
    15,
    "木",
    "Thursday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1970-01-15", &h2);
static holidayjp_holiday h3 = {
    "1970-02-11",
    1970,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1970-02-11", &h3);
static holidayjp_holiday h4 = {
    "1970-03-21",
    1970,
    3,
    21,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1970-03-21", &h4);
static holidayjp_holiday h5 = {
    "1970-04-29",
    1970,
    4,
    29,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1970-04-29", &h5);
static holidayjp_holiday h6 = {
    "1970-05-03",
    1970,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1970-05-03", &h6);
static holidayjp_holiday h7 = {
    "1970-05-05",
    1970,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1970-05-05", &h7);
static holidayjp_holiday h8 = {
    "1970-09-15",
    1970,
    9,
    15,
    "火",
    "Tuesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1970-09-15", &h8);
static holidayjp_holiday h9 = {
    "1970-09-23",
    1970,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1970-09-23", &h9);
static holidayjp_holiday h10 = {
    "1970-10-10",
    1970,
    10,
    10,
    "土",
    "Saturday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1970-10-10", &h10);
static holidayjp_holiday h11 = {
    "1970-11-03",
    1970,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1970-11-03", &h11);
static holidayjp_holiday h12 = {
    "1970-11-23",
    1970,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1970-11-23", &h12);
static holidayjp_holiday h13 = {
    "1971-01-01",
    1971,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1971-01-01", &h13);
static holidayjp_holiday h14 = {
    "1971-01-15",
    1971,
    1,
    15,
    "金",
    "Friday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1971-01-15", &h14);
static holidayjp_holiday h15 = {
    "1971-02-11",
    1971,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1971-02-11", &h15);
static holidayjp_holiday h16 = {
    "1971-03-21",
    1971,
    3,
    21,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1971-03-21", &h16);
static holidayjp_holiday h17 = {
    "1971-04-29",
    1971,
    4,
    29,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1971-04-29", &h17);
static holidayjp_holiday h18 = {
    "1971-05-03",
    1971,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1971-05-03", &h18);
static holidayjp_holiday h19 = {
    "1971-05-05",
    1971,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1971-05-05", &h19);
static holidayjp_holiday h20 = {
    "1971-09-15",
    1971,
    9,
    15,
    "水",
    "Wednesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1971-09-15", &h20);
static holidayjp_holiday h21 = {
    "1971-09-24",
    1971,
    9,
    24,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1971-09-24", &h21);
static holidayjp_holiday h22 = {
    "1971-10-10",
    1971,
    10,
    10,
    "日",
    "Sunday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1971-10-10", &h22);
static holidayjp_holiday h23 = {
    "1971-11-03",
    1971,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1971-11-03", &h23);
static holidayjp_holiday h24 = {
    "1971-11-23",
    1971,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1971-11-23", &h24);
static holidayjp_holiday h25 = {
    "1972-01-01",
    1972,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1972-01-01", &h25);
static holidayjp_holiday h26 = {
    "1972-01-15",
    1972,
    1,
    15,
    "土",
    "Saturday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1972-01-15", &h26);
static holidayjp_holiday h27 = {
    "1972-02-11",
    1972,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1972-02-11", &h27);
static holidayjp_holiday h28 = {
    "1972-03-20",
    1972,
    3,
    20,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1972-03-20", &h28);
static holidayjp_holiday h29 = {
    "1972-04-29",
    1972,
    4,
    29,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1972-04-29", &h29);
static holidayjp_holiday h30 = {
    "1972-05-03",
    1972,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1972-05-03", &h30);
static holidayjp_holiday h31 = {
    "1972-05-05",
    1972,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1972-05-05", &h31);
static holidayjp_holiday h32 = {
    "1972-09-15",
    1972,
    9,
    15,
    "金",
    "Friday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1972-09-15", &h32);
static holidayjp_holiday h33 = {
    "1972-09-23",
    1972,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1972-09-23", &h33);
static holidayjp_holiday h34 = {
    "1972-10-10",
    1972,
    10,
    10,
    "火",
    "Tuesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1972-10-10", &h34);
static holidayjp_holiday h35 = {
    "1972-11-03",
    1972,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1972-11-03", &h35);
static holidayjp_holiday h36 = {
    "1972-11-23",
    1972,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1972-11-23", &h36);
static holidayjp_holiday h37 = {
    "1973-01-01",
    1973,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1973-01-01", &h37);
static holidayjp_holiday h38 = {
    "1973-01-15",
    1973,
    1,
    15,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1973-01-15", &h38);
static holidayjp_holiday h39 = {
    "1973-02-11",
    1973,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1973-02-11", &h39);
static holidayjp_holiday h40 = {
    "1973-03-21",
    1973,
    3,
    21,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1973-03-21", &h40);
static holidayjp_holiday h41 = {
    "1973-04-29",
    1973,
    4,
    29,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1973-04-29", &h41);
static holidayjp_holiday h42 = {
    "1973-04-30",
    1973,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1973-04-30", &h42);
static holidayjp_holiday h43 = {
    "1973-05-03",
    1973,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1973-05-03", &h43);
static holidayjp_holiday h44 = {
    "1973-05-05",
    1973,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1973-05-05", &h44);
static holidayjp_holiday h45 = {
    "1973-09-15",
    1973,
    9,
    15,
    "土",
    "Saturday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1973-09-15", &h45);
static holidayjp_holiday h46 = {
    "1973-09-23",
    1973,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1973-09-23", &h46);
static holidayjp_holiday h47 = {
    "1973-09-24",
    1973,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1973-09-24", &h47);
static holidayjp_holiday h48 = {
    "1973-10-10",
    1973,
    10,
    10,
    "水",
    "Wednesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1973-10-10", &h48);
static holidayjp_holiday h49 = {
    "1973-11-03",
    1973,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1973-11-03", &h49);
static holidayjp_holiday h50 = {
    "1973-11-23",
    1973,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1973-11-23", &h50);
static holidayjp_holiday h51 = {
    "1974-01-01",
    1974,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1974-01-01", &h51);
static holidayjp_holiday h52 = {
    "1974-01-15",
    1974,
    1,
    15,
    "火",
    "Tuesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1974-01-15", &h52);
static holidayjp_holiday h53 = {
    "1974-02-11",
    1974,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1974-02-11", &h53);
static holidayjp_holiday h54 = {
    "1974-03-21",
    1974,
    3,
    21,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1974-03-21", &h54);
static holidayjp_holiday h55 = {
    "1974-04-29",
    1974,
    4,
    29,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1974-04-29", &h55);
static holidayjp_holiday h56 = {
    "1974-05-03",
    1974,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1974-05-03", &h56);
static holidayjp_holiday h57 = {
    "1974-05-05",
    1974,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1974-05-05", &h57);
static holidayjp_holiday h58 = {
    "1974-05-06",
    1974,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1974-05-06", &h58);
static holidayjp_holiday h59 = {
    "1974-09-15",
    1974,
    9,
    15,
    "日",
    "Sunday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1974-09-15", &h59);
static holidayjp_holiday h60 = {
    "1974-09-16",
    1974,
    9,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1974-09-16", &h60);
static holidayjp_holiday h61 = {
    "1974-09-23",
    1974,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1974-09-23", &h61);
static holidayjp_holiday h62 = {
    "1974-10-10",
    1974,
    10,
    10,
    "木",
    "Thursday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1974-10-10", &h62);
static holidayjp_holiday h63 = {
    "1974-11-03",
    1974,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1974-11-03", &h63);
static holidayjp_holiday h64 = {
    "1974-11-04",
    1974,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1974-11-04", &h64);
static holidayjp_holiday h65 = {
    "1974-11-23",
    1974,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1974-11-23", &h65);
static holidayjp_holiday h66 = {
    "1975-01-01",
    1975,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1975-01-01", &h66);
static holidayjp_holiday h67 = {
    "1975-01-15",
    1975,
    1,
    15,
    "水",
    "Wednesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1975-01-15", &h67);
static holidayjp_holiday h68 = {
    "1975-02-11",
    1975,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1975-02-11", &h68);
static holidayjp_holiday h69 = {
    "1975-03-21",
    1975,
    3,
    21,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1975-03-21", &h69);
static holidayjp_holiday h70 = {
    "1975-04-29",
    1975,
    4,
    29,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1975-04-29", &h70);
static holidayjp_holiday h71 = {
    "1975-05-03",
    1975,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1975-05-03", &h71);
static holidayjp_holiday h72 = {
    "1975-05-05",
    1975,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1975-05-05", &h72);
static holidayjp_holiday h73 = {
    "1975-09-15",
    1975,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1975-09-15", &h73);
static holidayjp_holiday h74 = {
    "1975-09-24",
    1975,
    9,
    24,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1975-09-24", &h74);
static holidayjp_holiday h75 = {
    "1975-10-10",
    1975,
    10,
    10,
    "金",
    "Friday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1975-10-10", &h75);
static holidayjp_holiday h76 = {
    "1975-11-03",
    1975,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1975-11-03", &h76);
static holidayjp_holiday h77 = {
    "1975-11-23",
    1975,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1975-11-23", &h77);
static holidayjp_holiday h78 = {
    "1975-11-24",
    1975,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1975-11-24", &h78);
static holidayjp_holiday h79 = {
    "1976-01-01",
    1976,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1976-01-01", &h79);
static holidayjp_holiday h80 = {
    "1976-01-15",
    1976,
    1,
    15,
    "木",
    "Thursday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1976-01-15", &h80);
static holidayjp_holiday h81 = {
    "1976-02-11",
    1976,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1976-02-11", &h81);
static holidayjp_holiday h82 = {
    "1976-03-20",
    1976,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1976-03-20", &h82);
static holidayjp_holiday h83 = {
    "1976-04-29",
    1976,
    4,
    29,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1976-04-29", &h83);
static holidayjp_holiday h84 = {
    "1976-05-03",
    1976,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1976-05-03", &h84);
static holidayjp_holiday h85 = {
    "1976-05-05",
    1976,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1976-05-05", &h85);
static holidayjp_holiday h86 = {
    "1976-09-15",
    1976,
    9,
    15,
    "水",
    "Wednesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1976-09-15", &h86);
static holidayjp_holiday h87 = {
    "1976-09-23",
    1976,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1976-09-23", &h87);
static holidayjp_holiday h88 = {
    "1976-10-10",
    1976,
    10,
    10,
    "日",
    "Sunday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1976-10-10", &h88);
static holidayjp_holiday h89 = {
    "1976-10-11",
    1976,
    10,
    11,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1976-10-11", &h89);
static holidayjp_holiday h90 = {
    "1976-11-03",
    1976,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1976-11-03", &h90);
static holidayjp_holiday h91 = {
    "1976-11-23",
    1976,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1976-11-23", &h91);
static holidayjp_holiday h92 = {
    "1977-01-01",
    1977,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1977-01-01", &h92);
static holidayjp_holiday h93 = {
    "1977-01-15",
    1977,
    1,
    15,
    "土",
    "Saturday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1977-01-15", &h93);
static holidayjp_holiday h94 = {
    "1977-02-11",
    1977,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1977-02-11", &h94);
static holidayjp_holiday h95 = {
    "1977-03-21",
    1977,
    3,
    21,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1977-03-21", &h95);
static holidayjp_holiday h96 = {
    "1977-04-29",
    1977,
    4,
    29,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1977-04-29", &h96);
static holidayjp_holiday h97 = {
    "1977-05-03",
    1977,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1977-05-03", &h97);
static holidayjp_holiday h98 = {
    "1977-05-05",
    1977,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1977-05-05", &h98);
static holidayjp_holiday h99 = {
    "1977-09-15",
    1977,
    9,
    15,
    "木",
    "Thursday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1977-09-15", &h99);
static holidayjp_holiday h100 = {
    "1977-09-23",
    1977,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1977-09-23", &h100);
static holidayjp_holiday h101 = {
    "1977-10-10",
    1977,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1977-10-10", &h101);
static holidayjp_holiday h102 = {
    "1977-11-03",
    1977,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1977-11-03", &h102);
static holidayjp_holiday h103 = {
    "1977-11-23",
    1977,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1977-11-23", &h103);
static holidayjp_holiday h104 = {
    "1978-01-01",
    1978,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1978-01-01", &h104);
static holidayjp_holiday h105 = {
    "1978-01-02",
    1978,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1978-01-02", &h105);
static holidayjp_holiday h106 = {
    "1978-01-15",
    1978,
    1,
    15,
    "日",
    "Sunday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1978-01-15", &h106);
static holidayjp_holiday h107 = {
    "1978-01-16",
    1978,
    1,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1978-01-16", &h107);
static holidayjp_holiday h108 = {
    "1978-02-11",
    1978,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1978-02-11", &h108);
static holidayjp_holiday h109 = {
    "1978-03-21",
    1978,
    3,
    21,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1978-03-21", &h109);
static holidayjp_holiday h110 = {
    "1978-04-29",
    1978,
    4,
    29,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1978-04-29", &h110);
static holidayjp_holiday h111 = {
    "1978-05-03",
    1978,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1978-05-03", &h111);
static holidayjp_holiday h112 = {
    "1978-05-05",
    1978,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1978-05-05", &h112);
static holidayjp_holiday h113 = {
    "1978-09-15",
    1978,
    9,
    15,
    "金",
    "Friday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1978-09-15", &h113);
static holidayjp_holiday h114 = {
    "1978-09-23",
    1978,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1978-09-23", &h114);
static holidayjp_holiday h115 = {
    "1978-10-10",
    1978,
    10,
    10,
    "火",
    "Tuesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1978-10-10", &h115);
static holidayjp_holiday h116 = {
    "1978-11-03",
    1978,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1978-11-03", &h116);
static holidayjp_holiday h117 = {
    "1978-11-23",
    1978,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1978-11-23", &h117);
static holidayjp_holiday h118 = {
    "1979-01-01",
    1979,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1979-01-01", &h118);
static holidayjp_holiday h119 = {
    "1979-01-15",
    1979,
    1,
    15,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1979-01-15", &h119);
static holidayjp_holiday h120 = {
    "1979-02-11",
    1979,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1979-02-11", &h120);
static holidayjp_holiday h121 = {
    "1979-02-12",
    1979,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1979-02-12", &h121);
static holidayjp_holiday h122 = {
    "1979-03-21",
    1979,
    3,
    21,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1979-03-21", &h122);
static holidayjp_holiday h123 = {
    "1979-04-29",
    1979,
    4,
    29,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1979-04-29", &h123);
static holidayjp_holiday h124 = {
    "1979-04-30",
    1979,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1979-04-30", &h124);
static holidayjp_holiday h125 = {
    "1979-05-03",
    1979,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1979-05-03", &h125);
static holidayjp_holiday h126 = {
    "1979-05-05",
    1979,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1979-05-05", &h126);
static holidayjp_holiday h127 = {
    "1979-09-15",
    1979,
    9,
    15,
    "土",
    "Saturday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1979-09-15", &h127);
static holidayjp_holiday h128 = {
    "1979-09-24",
    1979,
    9,
    24,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1979-09-24", &h128);
static holidayjp_holiday h129 = {
    "1979-10-10",
    1979,
    10,
    10,
    "水",
    "Wednesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1979-10-10", &h129);
static holidayjp_holiday h130 = {
    "1979-11-03",
    1979,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1979-11-03", &h130);
static holidayjp_holiday h131 = {
    "1979-11-23",
    1979,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1979-11-23", &h131);
static holidayjp_holiday h132 = {
    "1980-01-01",
    1980,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1980-01-01", &h132);
static holidayjp_holiday h133 = {
    "1980-01-15",
    1980,
    1,
    15,
    "火",
    "Tuesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1980-01-15", &h133);
static holidayjp_holiday h134 = {
    "1980-02-11",
    1980,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1980-02-11", &h134);
static holidayjp_holiday h135 = {
    "1980-03-20",
    1980,
    3,
    20,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1980-03-20", &h135);
static holidayjp_holiday h136 = {
    "1980-04-29",
    1980,
    4,
    29,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1980-04-29", &h136);
static holidayjp_holiday h137 = {
    "1980-05-03",
    1980,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1980-05-03", &h137);
static holidayjp_holiday h138 = {
    "1980-05-05",
    1980,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1980-05-05", &h138);
static holidayjp_holiday h139 = {
    "1980-09-15",
    1980,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1980-09-15", &h139);
static holidayjp_holiday h140 = {
    "1980-09-23",
    1980,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1980-09-23", &h140);
static holidayjp_holiday h141 = {
    "1980-10-10",
    1980,
    10,
    10,
    "金",
    "Friday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1980-10-10", &h141);
static holidayjp_holiday h142 = {
    "1980-11-03",
    1980,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1980-11-03", &h142);
static holidayjp_holiday h143 = {
    "1980-11-23",
    1980,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1980-11-23", &h143);
static holidayjp_holiday h144 = {
    "1980-11-24",
    1980,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1980-11-24", &h144);
static holidayjp_holiday h145 = {
    "1981-01-01",
    1981,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1981-01-01", &h145);
static holidayjp_holiday h146 = {
    "1981-01-15",
    1981,
    1,
    15,
    "木",
    "Thursday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1981-01-15", &h146);
static holidayjp_holiday h147 = {
    "1981-02-11",
    1981,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1981-02-11", &h147);
static holidayjp_holiday h148 = {
    "1981-03-21",
    1981,
    3,
    21,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1981-03-21", &h148);
static holidayjp_holiday h149 = {
    "1981-04-29",
    1981,
    4,
    29,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1981-04-29", &h149);
static holidayjp_holiday h150 = {
    "1981-05-03",
    1981,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1981-05-03", &h150);
static holidayjp_holiday h151 = {
    "1981-05-04",
    1981,
    5,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1981-05-04", &h151);
static holidayjp_holiday h152 = {
    "1981-05-05",
    1981,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1981-05-05", &h152);
static holidayjp_holiday h153 = {
    "1981-09-15",
    1981,
    9,
    15,
    "火",
    "Tuesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1981-09-15", &h153);
static holidayjp_holiday h154 = {
    "1981-09-23",
    1981,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1981-09-23", &h154);
static holidayjp_holiday h155 = {
    "1981-10-10",
    1981,
    10,
    10,
    "土",
    "Saturday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1981-10-10", &h155);
static holidayjp_holiday h156 = {
    "1981-11-03",
    1981,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1981-11-03", &h156);
static holidayjp_holiday h157 = {
    "1981-11-23",
    1981,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1981-11-23", &h157);
static holidayjp_holiday h158 = {
    "1982-01-01",
    1982,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1982-01-01", &h158);
static holidayjp_holiday h159 = {
    "1982-01-15",
    1982,
    1,
    15,
    "金",
    "Friday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1982-01-15", &h159);
static holidayjp_holiday h160 = {
    "1982-02-11",
    1982,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1982-02-11", &h160);
static holidayjp_holiday h161 = {
    "1982-03-21",
    1982,
    3,
    21,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1982-03-21", &h161);
static holidayjp_holiday h162 = {
    "1982-03-22",
    1982,
    3,
    22,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1982-03-22", &h162);
static holidayjp_holiday h163 = {
    "1982-04-29",
    1982,
    4,
    29,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1982-04-29", &h163);
static holidayjp_holiday h164 = {
    "1982-05-03",
    1982,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1982-05-03", &h164);
static holidayjp_holiday h165 = {
    "1982-05-05",
    1982,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1982-05-05", &h165);
static holidayjp_holiday h166 = {
    "1982-09-15",
    1982,
    9,
    15,
    "水",
    "Wednesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1982-09-15", &h166);
static holidayjp_holiday h167 = {
    "1982-09-23",
    1982,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1982-09-23", &h167);
static holidayjp_holiday h168 = {
    "1982-10-10",
    1982,
    10,
    10,
    "日",
    "Sunday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1982-10-10", &h168);
static holidayjp_holiday h169 = {
    "1982-10-11",
    1982,
    10,
    11,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1982-10-11", &h169);
static holidayjp_holiday h170 = {
    "1982-11-03",
    1982,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1982-11-03", &h170);
static holidayjp_holiday h171 = {
    "1982-11-23",
    1982,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1982-11-23", &h171);
static holidayjp_holiday h172 = {
    "1983-01-01",
    1983,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1983-01-01", &h172);
static holidayjp_holiday h173 = {
    "1983-01-15",
    1983,
    1,
    15,
    "土",
    "Saturday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1983-01-15", &h173);
static holidayjp_holiday h174 = {
    "1983-02-11",
    1983,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1983-02-11", &h174);
static holidayjp_holiday h175 = {
    "1983-03-21",
    1983,
    3,
    21,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1983-03-21", &h175);
static holidayjp_holiday h176 = {
    "1983-04-29",
    1983,
    4,
    29,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1983-04-29", &h176);
static holidayjp_holiday h177 = {
    "1983-05-03",
    1983,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1983-05-03", &h177);
static holidayjp_holiday h178 = {
    "1983-05-05",
    1983,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1983-05-05", &h178);
static holidayjp_holiday h179 = {
    "1983-09-15",
    1983,
    9,
    15,
    "木",
    "Thursday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1983-09-15", &h179);
static holidayjp_holiday h180 = {
    "1983-09-23",
    1983,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1983-09-23", &h180);
static holidayjp_holiday h181 = {
    "1983-10-10",
    1983,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1983-10-10", &h181);
static holidayjp_holiday h182 = {
    "1983-11-03",
    1983,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1983-11-03", &h182);
static holidayjp_holiday h183 = {
    "1983-11-23",
    1983,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1983-11-23", &h183);
static holidayjp_holiday h184 = {
    "1984-01-01",
    1984,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1984-01-01", &h184);
static holidayjp_holiday h185 = {
    "1984-01-02",
    1984,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1984-01-02", &h185);
static holidayjp_holiday h186 = {
    "1984-01-15",
    1984,
    1,
    15,
    "日",
    "Sunday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1984-01-15", &h186);
static holidayjp_holiday h187 = {
    "1984-01-16",
    1984,
    1,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1984-01-16", &h187);
static holidayjp_holiday h188 = {
    "1984-02-11",
    1984,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1984-02-11", &h188);
static holidayjp_holiday h189 = {
    "1984-03-20",
    1984,
    3,
    20,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1984-03-20", &h189);
static holidayjp_holiday h190 = {
    "1984-04-29",
    1984,
    4,
    29,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1984-04-29", &h190);
static holidayjp_holiday h191 = {
    "1984-04-30",
    1984,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1984-04-30", &h191);
static holidayjp_holiday h192 = {
    "1984-05-03",
    1984,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1984-05-03", &h192);
static holidayjp_holiday h193 = {
    "1984-05-05",
    1984,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1984-05-05", &h193);
static holidayjp_holiday h194 = {
    "1984-09-15",
    1984,
    9,
    15,
    "土",
    "Saturday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1984-09-15", &h194);
static holidayjp_holiday h195 = {
    "1984-09-23",
    1984,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1984-09-23", &h195);
static holidayjp_holiday h196 = {
    "1984-09-24",
    1984,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1984-09-24", &h196);
static holidayjp_holiday h197 = {
    "1984-10-10",
    1984,
    10,
    10,
    "水",
    "Wednesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1984-10-10", &h197);
static holidayjp_holiday h198 = {
    "1984-11-03",
    1984,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1984-11-03", &h198);
static holidayjp_holiday h199 = {
    "1984-11-23",
    1984,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1984-11-23", &h199);
static holidayjp_holiday h200 = {
    "1985-01-01",
    1985,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1985-01-01", &h200);
static holidayjp_holiday h201 = {
    "1985-01-15",
    1985,
    1,
    15,
    "火",
    "Tuesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1985-01-15", &h201);
static holidayjp_holiday h202 = {
    "1985-02-11",
    1985,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1985-02-11", &h202);
static holidayjp_holiday h203 = {
    "1985-03-21",
    1985,
    3,
    21,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1985-03-21", &h203);
static holidayjp_holiday h204 = {
    "1985-04-29",
    1985,
    4,
    29,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1985-04-29", &h204);
static holidayjp_holiday h205 = {
    "1985-05-03",
    1985,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1985-05-03", &h205);
static holidayjp_holiday h206 = {
    "1985-05-05",
    1985,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1985-05-05", &h206);
static holidayjp_holiday h207 = {
    "1985-05-06",
    1985,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1985-05-06", &h207);
static holidayjp_holiday h208 = {
    "1985-09-15",
    1985,
    9,
    15,
    "日",
    "Sunday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1985-09-15", &h208);
static holidayjp_holiday h209 = {
    "1985-09-16",
    1985,
    9,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1985-09-16", &h209);
static holidayjp_holiday h210 = {
    "1985-09-23",
    1985,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1985-09-23", &h210);
static holidayjp_holiday h211 = {
    "1985-10-10",
    1985,
    10,
    10,
    "木",
    "Thursday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1985-10-10", &h211);
static holidayjp_holiday h212 = {
    "1985-11-03",
    1985,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1985-11-03", &h212);
static holidayjp_holiday h213 = {
    "1985-11-04",
    1985,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1985-11-04", &h213);
static holidayjp_holiday h214 = {
    "1985-11-23",
    1985,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1985-11-23", &h214);
static holidayjp_holiday h215 = {
    "1986-01-01",
    1986,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1986-01-01", &h215);
static holidayjp_holiday h216 = {
    "1986-01-15",
    1986,
    1,
    15,
    "水",
    "Wednesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1986-01-15", &h216);
static holidayjp_holiday h217 = {
    "1986-02-11",
    1986,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1986-02-11", &h217);
static holidayjp_holiday h218 = {
    "1986-03-21",
    1986,
    3,
    21,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1986-03-21", &h218);
static holidayjp_holiday h219 = {
    "1986-04-29",
    1986,
    4,
    29,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1986-04-29", &h219);
static holidayjp_holiday h220 = {
    "1986-05-03",
    1986,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1986-05-03", &h220);
static holidayjp_holiday h221 = {
    "1986-05-05",
    1986,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1986-05-05", &h221);
static holidayjp_holiday h222 = {
    "1986-09-15",
    1986,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1986-09-15", &h222);
static holidayjp_holiday h223 = {
    "1986-09-23",
    1986,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1986-09-23", &h223);
static holidayjp_holiday h224 = {
    "1986-10-10",
    1986,
    10,
    10,
    "金",
    "Friday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1986-10-10", &h224);
static holidayjp_holiday h225 = {
    "1986-11-03",
    1986,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1986-11-03", &h225);
static holidayjp_holiday h226 = {
    "1986-11-23",
    1986,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1986-11-23", &h226);
static holidayjp_holiday h227 = {
    "1986-11-24",
    1986,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1986-11-24", &h227);
static holidayjp_holiday h228 = {
    "1987-01-01",
    1987,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1987-01-01", &h228);
static holidayjp_holiday h229 = {
    "1987-01-15",
    1987,
    1,
    15,
    "木",
    "Thursday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1987-01-15", &h229);
static holidayjp_holiday h230 = {
    "1987-02-11",
    1987,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1987-02-11", &h230);
static holidayjp_holiday h231 = {
    "1987-03-21",
    1987,
    3,
    21,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1987-03-21", &h231);
static holidayjp_holiday h232 = {
    "1987-04-29",
    1987,
    4,
    29,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1987-04-29", &h232);
static holidayjp_holiday h233 = {
    "1987-05-03",
    1987,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1987-05-03", &h233);
static holidayjp_holiday h234 = {
    "1987-05-04",
    1987,
    5,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1987-05-04", &h234);
static holidayjp_holiday h235 = {
    "1987-05-05",
    1987,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1987-05-05", &h235);
static holidayjp_holiday h236 = {
    "1987-09-15",
    1987,
    9,
    15,
    "火",
    "Tuesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1987-09-15", &h236);
static holidayjp_holiday h237 = {
    "1987-09-23",
    1987,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1987-09-23", &h237);
static holidayjp_holiday h238 = {
    "1987-10-10",
    1987,
    10,
    10,
    "土",
    "Saturday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1987-10-10", &h238);
static holidayjp_holiday h239 = {
    "1987-11-03",
    1987,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1987-11-03", &h239);
static holidayjp_holiday h240 = {
    "1987-11-23",
    1987,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1987-11-23", &h240);
static holidayjp_holiday h241 = {
    "1988-01-01",
    1988,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1988-01-01", &h241);
static holidayjp_holiday h242 = {
    "1988-01-15",
    1988,
    1,
    15,
    "金",
    "Friday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1988-01-15", &h242);
static holidayjp_holiday h243 = {
    "1988-02-11",
    1988,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1988-02-11", &h243);
static holidayjp_holiday h244 = {
    "1988-03-20",
    1988,
    3,
    20,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1988-03-20", &h244);
static holidayjp_holiday h245 = {
    "1988-03-21",
    1988,
    3,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1988-03-21", &h245);
static holidayjp_holiday h246 = {
    "1988-04-29",
    1988,
    4,
    29,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1988-04-29", &h246);
static holidayjp_holiday h247 = {
    "1988-05-03",
    1988,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1988-05-03", &h247);
static holidayjp_holiday h248 = {
    "1988-05-04",
    1988,
    5,
    4,
    "水",
    "Wednesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1988-05-04", &h248);
static holidayjp_holiday h249 = {
    "1988-05-05",
    1988,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1988-05-05", &h249);
static holidayjp_holiday h250 = {
    "1988-09-15",
    1988,
    9,
    15,
    "木",
    "Thursday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1988-09-15", &h250);
static holidayjp_holiday h251 = {
    "1988-09-23",
    1988,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1988-09-23", &h251);
static holidayjp_holiday h252 = {
    "1988-10-10",
    1988,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1988-10-10", &h252);
static holidayjp_holiday h253 = {
    "1988-11-03",
    1988,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1988-11-03", &h253);
static holidayjp_holiday h254 = {
    "1988-11-23",
    1988,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1988-11-23", &h254);
static holidayjp_holiday h255 = {
    "1989-01-01",
    1989,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1989-01-01", &h255);
static holidayjp_holiday h256 = {
    "1989-01-02",
    1989,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1989-01-02", &h256);
static holidayjp_holiday h257 = {
    "1989-01-15",
    1989,
    1,
    15,
    "日",
    "Sunday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1989-01-15", &h257);
static holidayjp_holiday h258 = {
    "1989-01-16",
    1989,
    1,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1989-01-16", &h258);
static holidayjp_holiday h259 = {
    "1989-02-11",
    1989,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1989-02-11", &h259);
static holidayjp_holiday h260 = {
    "1989-02-24",
    1989,
    2,
    24,
    "金",
    "Friday",
    "昭和天皇の大喪の礼",
    "The Funeral Ceremony of Emperor Showa."
};
holidayjp_hash_set(h, "1989-02-24", &h260);
static holidayjp_holiday h261 = {
    "1989-03-21",
    1989,
    3,
    21,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1989-03-21", &h261);
static holidayjp_holiday h262 = {
    "1989-04-29",
    1989,
    4,
    29,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1989-04-29", &h262);
static holidayjp_holiday h263 = {
    "1989-05-03",
    1989,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1989-05-03", &h263);
static holidayjp_holiday h264 = {
    "1989-05-04",
    1989,
    5,
    4,
    "木",
    "Thursday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1989-05-04", &h264);
static holidayjp_holiday h265 = {
    "1989-05-05",
    1989,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1989-05-05", &h265);
static holidayjp_holiday h266 = {
    "1989-09-15",
    1989,
    9,
    15,
    "金",
    "Friday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1989-09-15", &h266);
static holidayjp_holiday h267 = {
    "1989-09-23",
    1989,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1989-09-23", &h267);
static holidayjp_holiday h268 = {
    "1989-10-10",
    1989,
    10,
    10,
    "火",
    "Tuesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1989-10-10", &h268);
static holidayjp_holiday h269 = {
    "1989-11-03",
    1989,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1989-11-03", &h269);
static holidayjp_holiday h270 = {
    "1989-11-23",
    1989,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1989-11-23", &h270);
static holidayjp_holiday h271 = {
    "1989-12-23",
    1989,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1989-12-23", &h271);
static holidayjp_holiday h272 = {
    "1990-01-01",
    1990,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1990-01-01", &h272);
static holidayjp_holiday h273 = {
    "1990-01-15",
    1990,
    1,
    15,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1990-01-15", &h273);
static holidayjp_holiday h274 = {
    "1990-02-11",
    1990,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1990-02-11", &h274);
static holidayjp_holiday h275 = {
    "1990-02-12",
    1990,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1990-02-12", &h275);
static holidayjp_holiday h276 = {
    "1990-03-21",
    1990,
    3,
    21,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1990-03-21", &h276);
static holidayjp_holiday h277 = {
    "1990-04-29",
    1990,
    4,
    29,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1990-04-29", &h277);
static holidayjp_holiday h278 = {
    "1990-04-30",
    1990,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1990-04-30", &h278);
static holidayjp_holiday h279 = {
    "1990-05-03",
    1990,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1990-05-03", &h279);
static holidayjp_holiday h280 = {
    "1990-05-04",
    1990,
    5,
    4,
    "金",
    "Friday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1990-05-04", &h280);
static holidayjp_holiday h281 = {
    "1990-05-05",
    1990,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1990-05-05", &h281);
static holidayjp_holiday h282 = {
    "1990-09-15",
    1990,
    9,
    15,
    "土",
    "Saturday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1990-09-15", &h282);
static holidayjp_holiday h283 = {
    "1990-09-23",
    1990,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1990-09-23", &h283);
static holidayjp_holiday h284 = {
    "1990-09-24",
    1990,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1990-09-24", &h284);
static holidayjp_holiday h285 = {
    "1990-10-10",
    1990,
    10,
    10,
    "水",
    "Wednesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1990-10-10", &h285);
static holidayjp_holiday h286 = {
    "1990-11-03",
    1990,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1990-11-03", &h286);
static holidayjp_holiday h287 = {
    "1990-11-12",
    1990,
    11,
    12,
    "月",
    "Monday",
    "即位礼正殿の儀",
    "The Ceremony of the Enthronement of His Majesty th Emperor (at the Seiden)"
};
holidayjp_hash_set(h, "1990-11-12", &h287);
static holidayjp_holiday h288 = {
    "1990-11-23",
    1990,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1990-11-23", &h288);
static holidayjp_holiday h289 = {
    "1990-12-23",
    1990,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1990-12-23", &h289);
static holidayjp_holiday h290 = {
    "1990-12-24",
    1990,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1990-12-24", &h290);
static holidayjp_holiday h291 = {
    "1991-01-01",
    1991,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1991-01-01", &h291);
static holidayjp_holiday h292 = {
    "1991-01-15",
    1991,
    1,
    15,
    "火",
    "Tuesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1991-01-15", &h292);
static holidayjp_holiday h293 = {
    "1991-02-11",
    1991,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1991-02-11", &h293);
static holidayjp_holiday h294 = {
    "1991-03-21",
    1991,
    3,
    21,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1991-03-21", &h294);
static holidayjp_holiday h295 = {
    "1991-04-29",
    1991,
    4,
    29,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1991-04-29", &h295);
static holidayjp_holiday h296 = {
    "1991-05-03",
    1991,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1991-05-03", &h296);
static holidayjp_holiday h297 = {
    "1991-05-04",
    1991,
    5,
    4,
    "土",
    "Saturday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1991-05-04", &h297);
static holidayjp_holiday h298 = {
    "1991-05-05",
    1991,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1991-05-05", &h298);
static holidayjp_holiday h299 = {
    "1991-05-06",
    1991,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1991-05-06", &h299);
static holidayjp_holiday h300 = {
    "1991-09-15",
    1991,
    9,
    15,
    "日",
    "Sunday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1991-09-15", &h300);
static holidayjp_holiday h301 = {
    "1991-09-16",
    1991,
    9,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1991-09-16", &h301);
static holidayjp_holiday h302 = {
    "1991-09-23",
    1991,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1991-09-23", &h302);
static holidayjp_holiday h303 = {
    "1991-10-10",
    1991,
    10,
    10,
    "木",
    "Thursday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1991-10-10", &h303);
static holidayjp_holiday h304 = {
    "1991-11-03",
    1991,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1991-11-03", &h304);
static holidayjp_holiday h305 = {
    "1991-11-04",
    1991,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1991-11-04", &h305);
static holidayjp_holiday h306 = {
    "1991-11-23",
    1991,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1991-11-23", &h306);
static holidayjp_holiday h307 = {
    "1991-12-23",
    1991,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1991-12-23", &h307);
static holidayjp_holiday h308 = {
    "1992-01-01",
    1992,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1992-01-01", &h308);
static holidayjp_holiday h309 = {
    "1992-01-15",
    1992,
    1,
    15,
    "水",
    "Wednesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1992-01-15", &h309);
static holidayjp_holiday h310 = {
    "1992-02-11",
    1992,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1992-02-11", &h310);
static holidayjp_holiday h311 = {
    "1992-03-20",
    1992,
    3,
    20,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1992-03-20", &h311);
static holidayjp_holiday h312 = {
    "1992-04-29",
    1992,
    4,
    29,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1992-04-29", &h312);
static holidayjp_holiday h313 = {
    "1992-05-03",
    1992,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1992-05-03", &h313);
static holidayjp_holiday h314 = {
    "1992-05-04",
    1992,
    5,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1992-05-04", &h314);
static holidayjp_holiday h315 = {
    "1992-05-05",
    1992,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1992-05-05", &h315);
static holidayjp_holiday h316 = {
    "1992-09-15",
    1992,
    9,
    15,
    "火",
    "Tuesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1992-09-15", &h316);
static holidayjp_holiday h317 = {
    "1992-09-23",
    1992,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1992-09-23", &h317);
static holidayjp_holiday h318 = {
    "1992-10-10",
    1992,
    10,
    10,
    "土",
    "Saturday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1992-10-10", &h318);
static holidayjp_holiday h319 = {
    "1992-11-03",
    1992,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1992-11-03", &h319);
static holidayjp_holiday h320 = {
    "1992-11-23",
    1992,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1992-11-23", &h320);
static holidayjp_holiday h321 = {
    "1992-12-23",
    1992,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1992-12-23", &h321);
static holidayjp_holiday h322 = {
    "1993-01-01",
    1993,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1993-01-01", &h322);
static holidayjp_holiday h323 = {
    "1993-01-15",
    1993,
    1,
    15,
    "金",
    "Friday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1993-01-15", &h323);
static holidayjp_holiday h324 = {
    "1993-02-11",
    1993,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1993-02-11", &h324);
static holidayjp_holiday h325 = {
    "1993-03-20",
    1993,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1993-03-20", &h325);
static holidayjp_holiday h326 = {
    "1993-04-29",
    1993,
    4,
    29,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1993-04-29", &h326);
static holidayjp_holiday h327 = {
    "1993-05-03",
    1993,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1993-05-03", &h327);
static holidayjp_holiday h328 = {
    "1993-05-04",
    1993,
    5,
    4,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1993-05-04", &h328);
static holidayjp_holiday h329 = {
    "1993-05-05",
    1993,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1993-05-05", &h329);
static holidayjp_holiday h330 = {
    "1993-06-09",
    1993,
    6,
    9,
    "水",
    "Wednesday",
    "皇太子徳仁親王の結婚の儀",
    "The Rite of Wedding of HIH Crown Prince Naruhito"
};
holidayjp_hash_set(h, "1993-06-09", &h330);
static holidayjp_holiday h331 = {
    "1993-09-15",
    1993,
    9,
    15,
    "水",
    "Wednesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1993-09-15", &h331);
static holidayjp_holiday h332 = {
    "1993-09-23",
    1993,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1993-09-23", &h332);
static holidayjp_holiday h333 = {
    "1993-10-10",
    1993,
    10,
    10,
    "日",
    "Sunday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1993-10-10", &h333);
static holidayjp_holiday h334 = {
    "1993-10-11",
    1993,
    10,
    11,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1993-10-11", &h334);
static holidayjp_holiday h335 = {
    "1993-11-03",
    1993,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1993-11-03", &h335);
static holidayjp_holiday h336 = {
    "1993-11-23",
    1993,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1993-11-23", &h336);
static holidayjp_holiday h337 = {
    "1993-12-23",
    1993,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1993-12-23", &h337);
static holidayjp_holiday h338 = {
    "1994-01-01",
    1994,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1994-01-01", &h338);
static holidayjp_holiday h339 = {
    "1994-01-15",
    1994,
    1,
    15,
    "土",
    "Saturday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1994-01-15", &h339);
static holidayjp_holiday h340 = {
    "1994-02-11",
    1994,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1994-02-11", &h340);
static holidayjp_holiday h341 = {
    "1994-03-21",
    1994,
    3,
    21,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1994-03-21", &h341);
static holidayjp_holiday h342 = {
    "1994-04-29",
    1994,
    4,
    29,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1994-04-29", &h342);
static holidayjp_holiday h343 = {
    "1994-05-03",
    1994,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1994-05-03", &h343);
static holidayjp_holiday h344 = {
    "1994-05-04",
    1994,
    5,
    4,
    "水",
    "Wednesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1994-05-04", &h344);
static holidayjp_holiday h345 = {
    "1994-05-05",
    1994,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1994-05-05", &h345);
static holidayjp_holiday h346 = {
    "1994-09-15",
    1994,
    9,
    15,
    "木",
    "Thursday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1994-09-15", &h346);
static holidayjp_holiday h347 = {
    "1994-09-23",
    1994,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1994-09-23", &h347);
static holidayjp_holiday h348 = {
    "1994-10-10",
    1994,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1994-10-10", &h348);
static holidayjp_holiday h349 = {
    "1994-11-03",
    1994,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1994-11-03", &h349);
static holidayjp_holiday h350 = {
    "1994-11-23",
    1994,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1994-11-23", &h350);
static holidayjp_holiday h351 = {
    "1994-12-23",
    1994,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1994-12-23", &h351);
static holidayjp_holiday h352 = {
    "1995-01-01",
    1995,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1995-01-01", &h352);
static holidayjp_holiday h353 = {
    "1995-01-02",
    1995,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1995-01-02", &h353);
static holidayjp_holiday h354 = {
    "1995-01-15",
    1995,
    1,
    15,
    "日",
    "Sunday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1995-01-15", &h354);
static holidayjp_holiday h355 = {
    "1995-01-16",
    1995,
    1,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1995-01-16", &h355);
static holidayjp_holiday h356 = {
    "1995-02-11",
    1995,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1995-02-11", &h356);
static holidayjp_holiday h357 = {
    "1995-03-21",
    1995,
    3,
    21,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1995-03-21", &h357);
static holidayjp_holiday h358 = {
    "1995-04-29",
    1995,
    4,
    29,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1995-04-29", &h358);
static holidayjp_holiday h359 = {
    "1995-05-03",
    1995,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1995-05-03", &h359);
static holidayjp_holiday h360 = {
    "1995-05-04",
    1995,
    5,
    4,
    "木",
    "Thursday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1995-05-04", &h360);
static holidayjp_holiday h361 = {
    "1995-05-05",
    1995,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1995-05-05", &h361);
static holidayjp_holiday h362 = {
    "1995-09-15",
    1995,
    9,
    15,
    "金",
    "Friday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1995-09-15", &h362);
static holidayjp_holiday h363 = {
    "1995-09-23",
    1995,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1995-09-23", &h363);
static holidayjp_holiday h364 = {
    "1995-10-10",
    1995,
    10,
    10,
    "火",
    "Tuesday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1995-10-10", &h364);
static holidayjp_holiday h365 = {
    "1995-11-03",
    1995,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1995-11-03", &h365);
static holidayjp_holiday h366 = {
    "1995-11-23",
    1995,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1995-11-23", &h366);
static holidayjp_holiday h367 = {
    "1995-12-23",
    1995,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1995-12-23", &h367);
static holidayjp_holiday h368 = {
    "1996-01-01",
    1996,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1996-01-01", &h368);
static holidayjp_holiday h369 = {
    "1996-01-15",
    1996,
    1,
    15,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1996-01-15", &h369);
static holidayjp_holiday h370 = {
    "1996-02-11",
    1996,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1996-02-11", &h370);
static holidayjp_holiday h371 = {
    "1996-02-12",
    1996,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1996-02-12", &h371);
static holidayjp_holiday h372 = {
    "1996-03-20",
    1996,
    3,
    20,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1996-03-20", &h372);
static holidayjp_holiday h373 = {
    "1996-04-29",
    1996,
    4,
    29,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1996-04-29", &h373);
static holidayjp_holiday h374 = {
    "1996-05-03",
    1996,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1996-05-03", &h374);
static holidayjp_holiday h375 = {
    "1996-05-04",
    1996,
    5,
    4,
    "土",
    "Saturday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1996-05-04", &h375);
static holidayjp_holiday h376 = {
    "1996-05-05",
    1996,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1996-05-05", &h376);
static holidayjp_holiday h377 = {
    "1996-05-06",
    1996,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1996-05-06", &h377);
static holidayjp_holiday h378 = {
    "1996-07-20",
    1996,
    7,
    20,
    "土",
    "Saturday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "1996-07-20", &h378);
static holidayjp_holiday h379 = {
    "1996-09-15",
    1996,
    9,
    15,
    "日",
    "Sunday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1996-09-15", &h379);
static holidayjp_holiday h380 = {
    "1996-09-16",
    1996,
    9,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1996-09-16", &h380);
static holidayjp_holiday h381 = {
    "1996-09-23",
    1996,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1996-09-23", &h381);
static holidayjp_holiday h382 = {
    "1996-10-10",
    1996,
    10,
    10,
    "木",
    "Thursday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1996-10-10", &h382);
static holidayjp_holiday h383 = {
    "1996-11-03",
    1996,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1996-11-03", &h383);
static holidayjp_holiday h384 = {
    "1996-11-04",
    1996,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1996-11-04", &h384);
static holidayjp_holiday h385 = {
    "1996-11-23",
    1996,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1996-11-23", &h385);
static holidayjp_holiday h386 = {
    "1996-12-23",
    1996,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1996-12-23", &h386);
static holidayjp_holiday h387 = {
    "1997-01-01",
    1997,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1997-01-01", &h387);
static holidayjp_holiday h388 = {
    "1997-01-15",
    1997,
    1,
    15,
    "水",
    "Wednesday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1997-01-15", &h388);
static holidayjp_holiday h389 = {
    "1997-02-11",
    1997,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1997-02-11", &h389);
static holidayjp_holiday h390 = {
    "1997-03-20",
    1997,
    3,
    20,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1997-03-20", &h390);
static holidayjp_holiday h391 = {
    "1997-04-29",
    1997,
    4,
    29,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1997-04-29", &h391);
static holidayjp_holiday h392 = {
    "1997-05-03",
    1997,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1997-05-03", &h392);
static holidayjp_holiday h393 = {
    "1997-05-05",
    1997,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1997-05-05", &h393);
static holidayjp_holiday h394 = {
    "1997-07-20",
    1997,
    7,
    20,
    "日",
    "Sunday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "1997-07-20", &h394);
static holidayjp_holiday h395 = {
    "1997-07-21",
    1997,
    7,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1997-07-21", &h395);
static holidayjp_holiday h396 = {
    "1997-09-15",
    1997,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1997-09-15", &h396);
static holidayjp_holiday h397 = {
    "1997-09-23",
    1997,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1997-09-23", &h397);
static holidayjp_holiday h398 = {
    "1997-10-10",
    1997,
    10,
    10,
    "金",
    "Friday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1997-10-10", &h398);
static holidayjp_holiday h399 = {
    "1997-11-03",
    1997,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1997-11-03", &h399);
static holidayjp_holiday h400 = {
    "1997-11-23",
    1997,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1997-11-23", &h400);
static holidayjp_holiday h401 = {
    "1997-11-24",
    1997,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1997-11-24", &h401);
static holidayjp_holiday h402 = {
    "1997-12-23",
    1997,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1997-12-23", &h402);
static holidayjp_holiday h403 = {
    "1998-01-01",
    1998,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1998-01-01", &h403);
static holidayjp_holiday h404 = {
    "1998-01-15",
    1998,
    1,
    15,
    "木",
    "Thursday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1998-01-15", &h404);
static holidayjp_holiday h405 = {
    "1998-02-11",
    1998,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1998-02-11", &h405);
static holidayjp_holiday h406 = {
    "1998-03-21",
    1998,
    3,
    21,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1998-03-21", &h406);
static holidayjp_holiday h407 = {
    "1998-04-29",
    1998,
    4,
    29,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1998-04-29", &h407);
static holidayjp_holiday h408 = {
    "1998-05-03",
    1998,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1998-05-03", &h408);
static holidayjp_holiday h409 = {
    "1998-05-04",
    1998,
    5,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1998-05-04", &h409);
static holidayjp_holiday h410 = {
    "1998-05-05",
    1998,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1998-05-05", &h410);
static holidayjp_holiday h411 = {
    "1998-07-20",
    1998,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "1998-07-20", &h411);
static holidayjp_holiday h412 = {
    "1998-09-15",
    1998,
    9,
    15,
    "火",
    "Tuesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1998-09-15", &h412);
static holidayjp_holiday h413 = {
    "1998-09-23",
    1998,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1998-09-23", &h413);
static holidayjp_holiday h414 = {
    "1998-10-10",
    1998,
    10,
    10,
    "土",
    "Saturday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1998-10-10", &h414);
static holidayjp_holiday h415 = {
    "1998-11-03",
    1998,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1998-11-03", &h415);
static holidayjp_holiday h416 = {
    "1998-11-23",
    1998,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1998-11-23", &h416);
static holidayjp_holiday h417 = {
    "1998-12-23",
    1998,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1998-12-23", &h417);
static holidayjp_holiday h418 = {
    "1999-01-01",
    1999,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "1999-01-01", &h418);
static holidayjp_holiday h419 = {
    "1999-01-15",
    1999,
    1,
    15,
    "金",
    "Friday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "1999-01-15", &h419);
static holidayjp_holiday h420 = {
    "1999-02-11",
    1999,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "1999-02-11", &h420);
static holidayjp_holiday h421 = {
    "1999-03-21",
    1999,
    3,
    21,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "1999-03-21", &h421);
static holidayjp_holiday h422 = {
    "1999-03-22",
    1999,
    3,
    22,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1999-03-22", &h422);
static holidayjp_holiday h423 = {
    "1999-04-29",
    1999,
    4,
    29,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "1999-04-29", &h423);
static holidayjp_holiday h424 = {
    "1999-05-03",
    1999,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "1999-05-03", &h424);
static holidayjp_holiday h425 = {
    "1999-05-04",
    1999,
    5,
    4,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "1999-05-04", &h425);
static holidayjp_holiday h426 = {
    "1999-05-05",
    1999,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "1999-05-05", &h426);
static holidayjp_holiday h427 = {
    "1999-07-20",
    1999,
    7,
    20,
    "火",
    "Tuesday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "1999-07-20", &h427);
static holidayjp_holiday h428 = {
    "1999-09-15",
    1999,
    9,
    15,
    "水",
    "Wednesday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "1999-09-15", &h428);
static holidayjp_holiday h429 = {
    "1999-09-23",
    1999,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "1999-09-23", &h429);
static holidayjp_holiday h430 = {
    "1999-10-10",
    1999,
    10,
    10,
    "日",
    "Sunday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "1999-10-10", &h430);
static holidayjp_holiday h431 = {
    "1999-10-11",
    1999,
    10,
    11,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "1999-10-11", &h431);
static holidayjp_holiday h432 = {
    "1999-11-03",
    1999,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "1999-11-03", &h432);
static holidayjp_holiday h433 = {
    "1999-11-23",
    1999,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "1999-11-23", &h433);
static holidayjp_holiday h434 = {
    "1999-12-23",
    1999,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "1999-12-23", &h434);
static holidayjp_holiday h435 = {
    "2000-01-01",
    2000,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2000-01-01", &h435);
static holidayjp_holiday h436 = {
    "2000-01-10",
    2000,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2000-01-10", &h436);
static holidayjp_holiday h437 = {
    "2000-02-11",
    2000,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2000-02-11", &h437);
static holidayjp_holiday h438 = {
    "2000-03-20",
    2000,
    3,
    20,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2000-03-20", &h438);
static holidayjp_holiday h439 = {
    "2000-04-29",
    2000,
    4,
    29,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2000-04-29", &h439);
static holidayjp_holiday h440 = {
    "2000-05-03",
    2000,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2000-05-03", &h440);
static holidayjp_holiday h441 = {
    "2000-05-04",
    2000,
    5,
    4,
    "木",
    "Thursday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2000-05-04", &h441);
static holidayjp_holiday h442 = {
    "2000-05-05",
    2000,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2000-05-05", &h442);
static holidayjp_holiday h443 = {
    "2000-07-20",
    2000,
    7,
    20,
    "木",
    "Thursday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2000-07-20", &h443);
static holidayjp_holiday h444 = {
    "2000-09-15",
    2000,
    9,
    15,
    "金",
    "Friday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2000-09-15", &h444);
static holidayjp_holiday h445 = {
    "2000-09-23",
    2000,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2000-09-23", &h445);
static holidayjp_holiday h446 = {
    "2000-10-09",
    2000,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2000-10-09", &h446);
static holidayjp_holiday h447 = {
    "2000-11-03",
    2000,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2000-11-03", &h447);
static holidayjp_holiday h448 = {
    "2000-11-23",
    2000,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2000-11-23", &h448);
static holidayjp_holiday h449 = {
    "2000-12-23",
    2000,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2000-12-23", &h449);
static holidayjp_holiday h450 = {
    "2001-01-01",
    2001,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2001-01-01", &h450);
static holidayjp_holiday h451 = {
    "2001-01-08",
    2001,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2001-01-08", &h451);
static holidayjp_holiday h452 = {
    "2001-02-11",
    2001,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2001-02-11", &h452);
static holidayjp_holiday h453 = {
    "2001-02-12",
    2001,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2001-02-12", &h453);
static holidayjp_holiday h454 = {
    "2001-03-20",
    2001,
    3,
    20,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2001-03-20", &h454);
static holidayjp_holiday h455 = {
    "2001-04-29",
    2001,
    4,
    29,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2001-04-29", &h455);
static holidayjp_holiday h456 = {
    "2001-04-30",
    2001,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2001-04-30", &h456);
static holidayjp_holiday h457 = {
    "2001-05-03",
    2001,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2001-05-03", &h457);
static holidayjp_holiday h458 = {
    "2001-05-04",
    2001,
    5,
    4,
    "金",
    "Friday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2001-05-04", &h458);
static holidayjp_holiday h459 = {
    "2001-05-05",
    2001,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2001-05-05", &h459);
static holidayjp_holiday h460 = {
    "2001-07-20",
    2001,
    7,
    20,
    "金",
    "Friday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2001-07-20", &h460);
static holidayjp_holiday h461 = {
    "2001-09-15",
    2001,
    9,
    15,
    "土",
    "Saturday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2001-09-15", &h461);
static holidayjp_holiday h462 = {
    "2001-09-23",
    2001,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2001-09-23", &h462);
static holidayjp_holiday h463 = {
    "2001-09-24",
    2001,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2001-09-24", &h463);
static holidayjp_holiday h464 = {
    "2001-10-08",
    2001,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2001-10-08", &h464);
static holidayjp_holiday h465 = {
    "2001-11-03",
    2001,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2001-11-03", &h465);
static holidayjp_holiday h466 = {
    "2001-11-23",
    2001,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2001-11-23", &h466);
static holidayjp_holiday h467 = {
    "2001-12-23",
    2001,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2001-12-23", &h467);
static holidayjp_holiday h468 = {
    "2001-12-24",
    2001,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2001-12-24", &h468);
static holidayjp_holiday h469 = {
    "2002-01-01",
    2002,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2002-01-01", &h469);
static holidayjp_holiday h470 = {
    "2002-01-14",
    2002,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2002-01-14", &h470);
static holidayjp_holiday h471 = {
    "2002-02-11",
    2002,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2002-02-11", &h471);
static holidayjp_holiday h472 = {
    "2002-03-21",
    2002,
    3,
    21,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2002-03-21", &h472);
static holidayjp_holiday h473 = {
    "2002-04-29",
    2002,
    4,
    29,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2002-04-29", &h473);
static holidayjp_holiday h474 = {
    "2002-05-03",
    2002,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2002-05-03", &h474);
static holidayjp_holiday h475 = {
    "2002-05-04",
    2002,
    5,
    4,
    "土",
    "Saturday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2002-05-04", &h475);
static holidayjp_holiday h476 = {
    "2002-05-05",
    2002,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2002-05-05", &h476);
static holidayjp_holiday h477 = {
    "2002-05-06",
    2002,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2002-05-06", &h477);
static holidayjp_holiday h478 = {
    "2002-07-20",
    2002,
    7,
    20,
    "土",
    "Saturday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2002-07-20", &h478);
static holidayjp_holiday h479 = {
    "2002-09-15",
    2002,
    9,
    15,
    "日",
    "Sunday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2002-09-15", &h479);
static holidayjp_holiday h480 = {
    "2002-09-16",
    2002,
    9,
    16,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2002-09-16", &h480);
static holidayjp_holiday h481 = {
    "2002-09-23",
    2002,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2002-09-23", &h481);
static holidayjp_holiday h482 = {
    "2002-10-14",
    2002,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2002-10-14", &h482);
static holidayjp_holiday h483 = {
    "2002-11-03",
    2002,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2002-11-03", &h483);
static holidayjp_holiday h484 = {
    "2002-11-04",
    2002,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2002-11-04", &h484);
static holidayjp_holiday h485 = {
    "2002-11-23",
    2002,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2002-11-23", &h485);
static holidayjp_holiday h486 = {
    "2002-12-23",
    2002,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2002-12-23", &h486);
static holidayjp_holiday h487 = {
    "2003-01-01",
    2003,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2003-01-01", &h487);
static holidayjp_holiday h488 = {
    "2003-01-13",
    2003,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2003-01-13", &h488);
static holidayjp_holiday h489 = {
    "2003-02-11",
    2003,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2003-02-11", &h489);
static holidayjp_holiday h490 = {
    "2003-03-21",
    2003,
    3,
    21,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2003-03-21", &h490);
static holidayjp_holiday h491 = {
    "2003-04-29",
    2003,
    4,
    29,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2003-04-29", &h491);
static holidayjp_holiday h492 = {
    "2003-05-03",
    2003,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2003-05-03", &h492);
static holidayjp_holiday h493 = {
    "2003-05-05",
    2003,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2003-05-05", &h493);
static holidayjp_holiday h494 = {
    "2003-07-21",
    2003,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2003-07-21", &h494);
static holidayjp_holiday h495 = {
    "2003-09-15",
    2003,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2003-09-15", &h495);
static holidayjp_holiday h496 = {
    "2003-09-23",
    2003,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2003-09-23", &h496);
static holidayjp_holiday h497 = {
    "2003-10-13",
    2003,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2003-10-13", &h497);
static holidayjp_holiday h498 = {
    "2003-11-03",
    2003,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2003-11-03", &h498);
static holidayjp_holiday h499 = {
    "2003-11-23",
    2003,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2003-11-23", &h499);
static holidayjp_holiday h500 = {
    "2003-11-24",
    2003,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2003-11-24", &h500);
static holidayjp_holiday h501 = {
    "2003-12-23",
    2003,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2003-12-23", &h501);
static holidayjp_holiday h502 = {
    "2004-01-01",
    2004,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2004-01-01", &h502);
static holidayjp_holiday h503 = {
    "2004-01-12",
    2004,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2004-01-12", &h503);
static holidayjp_holiday h504 = {
    "2004-02-11",
    2004,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2004-02-11", &h504);
static holidayjp_holiday h505 = {
    "2004-03-20",
    2004,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2004-03-20", &h505);
static holidayjp_holiday h506 = {
    "2004-04-29",
    2004,
    4,
    29,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2004-04-29", &h506);
static holidayjp_holiday h507 = {
    "2004-05-03",
    2004,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2004-05-03", &h507);
static holidayjp_holiday h508 = {
    "2004-05-04",
    2004,
    5,
    4,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2004-05-04", &h508);
static holidayjp_holiday h509 = {
    "2004-05-05",
    2004,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2004-05-05", &h509);
static holidayjp_holiday h510 = {
    "2004-07-19",
    2004,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2004-07-19", &h510);
static holidayjp_holiday h511 = {
    "2004-09-20",
    2004,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2004-09-20", &h511);
static holidayjp_holiday h512 = {
    "2004-09-23",
    2004,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2004-09-23", &h512);
static holidayjp_holiday h513 = {
    "2004-10-11",
    2004,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2004-10-11", &h513);
static holidayjp_holiday h514 = {
    "2004-11-03",
    2004,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2004-11-03", &h514);
static holidayjp_holiday h515 = {
    "2004-11-23",
    2004,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2004-11-23", &h515);
static holidayjp_holiday h516 = {
    "2004-12-23",
    2004,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2004-12-23", &h516);
static holidayjp_holiday h517 = {
    "2005-01-01",
    2005,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2005-01-01", &h517);
static holidayjp_holiday h518 = {
    "2005-01-10",
    2005,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2005-01-10", &h518);
static holidayjp_holiday h519 = {
    "2005-02-11",
    2005,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2005-02-11", &h519);
static holidayjp_holiday h520 = {
    "2005-03-20",
    2005,
    3,
    20,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2005-03-20", &h520);
static holidayjp_holiday h521 = {
    "2005-03-21",
    2005,
    3,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2005-03-21", &h521);
static holidayjp_holiday h522 = {
    "2005-04-29",
    2005,
    4,
    29,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2005-04-29", &h522);
static holidayjp_holiday h523 = {
    "2005-05-03",
    2005,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2005-05-03", &h523);
static holidayjp_holiday h524 = {
    "2005-05-04",
    2005,
    5,
    4,
    "水",
    "Wednesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2005-05-04", &h524);
static holidayjp_holiday h525 = {
    "2005-05-05",
    2005,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2005-05-05", &h525);
static holidayjp_holiday h526 = {
    "2005-07-18",
    2005,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2005-07-18", &h526);
static holidayjp_holiday h527 = {
    "2005-09-19",
    2005,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2005-09-19", &h527);
static holidayjp_holiday h528 = {
    "2005-09-23",
    2005,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2005-09-23", &h528);
static holidayjp_holiday h529 = {
    "2005-10-10",
    2005,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2005-10-10", &h529);
static holidayjp_holiday h530 = {
    "2005-11-03",
    2005,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2005-11-03", &h530);
static holidayjp_holiday h531 = {
    "2005-11-23",
    2005,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2005-11-23", &h531);
static holidayjp_holiday h532 = {
    "2005-12-23",
    2005,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2005-12-23", &h532);
static holidayjp_holiday h533 = {
    "2006-01-01",
    2006,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2006-01-01", &h533);
static holidayjp_holiday h534 = {
    "2006-01-02",
    2006,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2006-01-02", &h534);
static holidayjp_holiday h535 = {
    "2006-01-09",
    2006,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2006-01-09", &h535);
static holidayjp_holiday h536 = {
    "2006-02-11",
    2006,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2006-02-11", &h536);
static holidayjp_holiday h537 = {
    "2006-03-21",
    2006,
    3,
    21,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2006-03-21", &h537);
static holidayjp_holiday h538 = {
    "2006-04-29",
    2006,
    4,
    29,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2006-04-29", &h538);
static holidayjp_holiday h539 = {
    "2006-05-03",
    2006,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2006-05-03", &h539);
static holidayjp_holiday h540 = {
    "2006-05-04",
    2006,
    5,
    4,
    "木",
    "Thursday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2006-05-04", &h540);
static holidayjp_holiday h541 = {
    "2006-05-05",
    2006,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2006-05-05", &h541);
static holidayjp_holiday h542 = {
    "2006-07-17",
    2006,
    7,
    17,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2006-07-17", &h542);
static holidayjp_holiday h543 = {
    "2006-09-18",
    2006,
    9,
    18,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2006-09-18", &h543);
static holidayjp_holiday h544 = {
    "2006-09-23",
    2006,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2006-09-23", &h544);
static holidayjp_holiday h545 = {
    "2006-10-09",
    2006,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2006-10-09", &h545);
static holidayjp_holiday h546 = {
    "2006-11-03",
    2006,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2006-11-03", &h546);
static holidayjp_holiday h547 = {
    "2006-11-23",
    2006,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2006-11-23", &h547);
static holidayjp_holiday h548 = {
    "2006-12-23",
    2006,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2006-12-23", &h548);
static holidayjp_holiday h549 = {
    "2007-01-01",
    2007,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2007-01-01", &h549);
static holidayjp_holiday h550 = {
    "2007-01-08",
    2007,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2007-01-08", &h550);
static holidayjp_holiday h551 = {
    "2007-02-11",
    2007,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2007-02-11", &h551);
static holidayjp_holiday h552 = {
    "2007-02-12",
    2007,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2007-02-12", &h552);
static holidayjp_holiday h553 = {
    "2007-03-21",
    2007,
    3,
    21,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2007-03-21", &h553);
static holidayjp_holiday h554 = {
    "2007-04-29",
    2007,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2007-04-29", &h554);
static holidayjp_holiday h555 = {
    "2007-04-30",
    2007,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2007-04-30", &h555);
static holidayjp_holiday h556 = {
    "2007-05-03",
    2007,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2007-05-03", &h556);
static holidayjp_holiday h557 = {
    "2007-05-04",
    2007,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2007-05-04", &h557);
static holidayjp_holiday h558 = {
    "2007-05-05",
    2007,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2007-05-05", &h558);
static holidayjp_holiday h559 = {
    "2007-07-16",
    2007,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2007-07-16", &h559);
static holidayjp_holiday h560 = {
    "2007-09-17",
    2007,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2007-09-17", &h560);
static holidayjp_holiday h561 = {
    "2007-09-23",
    2007,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2007-09-23", &h561);
static holidayjp_holiday h562 = {
    "2007-09-24",
    2007,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2007-09-24", &h562);
static holidayjp_holiday h563 = {
    "2007-10-08",
    2007,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2007-10-08", &h563);
static holidayjp_holiday h564 = {
    "2007-11-03",
    2007,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2007-11-03", &h564);
static holidayjp_holiday h565 = {
    "2007-11-23",
    2007,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2007-11-23", &h565);
static holidayjp_holiday h566 = {
    "2007-12-23",
    2007,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2007-12-23", &h566);
static holidayjp_holiday h567 = {
    "2007-12-24",
    2007,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2007-12-24", &h567);
static holidayjp_holiday h568 = {
    "2008-01-01",
    2008,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2008-01-01", &h568);
static holidayjp_holiday h569 = {
    "2008-01-14",
    2008,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2008-01-14", &h569);
static holidayjp_holiday h570 = {
    "2008-02-11",
    2008,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2008-02-11", &h570);
static holidayjp_holiday h571 = {
    "2008-03-20",
    2008,
    3,
    20,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2008-03-20", &h571);
static holidayjp_holiday h572 = {
    "2008-04-29",
    2008,
    4,
    29,
    "火",
    "Tuesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2008-04-29", &h572);
static holidayjp_holiday h573 = {
    "2008-05-03",
    2008,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2008-05-03", &h573);
static holidayjp_holiday h574 = {
    "2008-05-04",
    2008,
    5,
    4,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2008-05-04", &h574);
static holidayjp_holiday h575 = {
    "2008-05-05",
    2008,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2008-05-05", &h575);
static holidayjp_holiday h576 = {
    "2008-05-06",
    2008,
    5,
    6,
    "火",
    "Tuesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2008-05-06", &h576);
static holidayjp_holiday h577 = {
    "2008-07-21",
    2008,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2008-07-21", &h577);
static holidayjp_holiday h578 = {
    "2008-09-15",
    2008,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2008-09-15", &h578);
static holidayjp_holiday h579 = {
    "2008-09-23",
    2008,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2008-09-23", &h579);
static holidayjp_holiday h580 = {
    "2008-10-13",
    2008,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2008-10-13", &h580);
static holidayjp_holiday h581 = {
    "2008-11-03",
    2008,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2008-11-03", &h581);
static holidayjp_holiday h582 = {
    "2008-11-23",
    2008,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2008-11-23", &h582);
static holidayjp_holiday h583 = {
    "2008-11-24",
    2008,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2008-11-24", &h583);
static holidayjp_holiday h584 = {
    "2008-12-23",
    2008,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2008-12-23", &h584);
static holidayjp_holiday h585 = {
    "2009-01-01",
    2009,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2009-01-01", &h585);
static holidayjp_holiday h586 = {
    "2009-01-12",
    2009,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2009-01-12", &h586);
static holidayjp_holiday h587 = {
    "2009-02-11",
    2009,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2009-02-11", &h587);
static holidayjp_holiday h588 = {
    "2009-03-20",
    2009,
    3,
    20,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2009-03-20", &h588);
static holidayjp_holiday h589 = {
    "2009-04-29",
    2009,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2009-04-29", &h589);
static holidayjp_holiday h590 = {
    "2009-05-03",
    2009,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2009-05-03", &h590);
static holidayjp_holiday h591 = {
    "2009-05-04",
    2009,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2009-05-04", &h591);
static holidayjp_holiday h592 = {
    "2009-05-05",
    2009,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2009-05-05", &h592);
static holidayjp_holiday h593 = {
    "2009-05-06",
    2009,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2009-05-06", &h593);
static holidayjp_holiday h594 = {
    "2009-07-20",
    2009,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2009-07-20", &h594);
static holidayjp_holiday h595 = {
    "2009-09-21",
    2009,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2009-09-21", &h595);
static holidayjp_holiday h596 = {
    "2009-09-22",
    2009,
    9,
    22,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2009-09-22", &h596);
static holidayjp_holiday h597 = {
    "2009-09-23",
    2009,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2009-09-23", &h597);
static holidayjp_holiday h598 = {
    "2009-10-12",
    2009,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2009-10-12", &h598);
static holidayjp_holiday h599 = {
    "2009-11-03",
    2009,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2009-11-03", &h599);
static holidayjp_holiday h600 = {
    "2009-11-23",
    2009,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2009-11-23", &h600);
static holidayjp_holiday h601 = {
    "2009-12-23",
    2009,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2009-12-23", &h601);
static holidayjp_holiday h602 = {
    "2010-01-01",
    2010,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2010-01-01", &h602);
static holidayjp_holiday h603 = {
    "2010-01-11",
    2010,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2010-01-11", &h603);
static holidayjp_holiday h604 = {
    "2010-02-11",
    2010,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2010-02-11", &h604);
static holidayjp_holiday h605 = {
    "2010-03-21",
    2010,
    3,
    21,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2010-03-21", &h605);
static holidayjp_holiday h606 = {
    "2010-03-22",
    2010,
    3,
    22,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2010-03-22", &h606);
static holidayjp_holiday h607 = {
    "2010-04-29",
    2010,
    4,
    29,
    "木",
    "Thursday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2010-04-29", &h607);
static holidayjp_holiday h608 = {
    "2010-05-03",
    2010,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2010-05-03", &h608);
static holidayjp_holiday h609 = {
    "2010-05-04",
    2010,
    5,
    4,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2010-05-04", &h609);
static holidayjp_holiday h610 = {
    "2010-05-05",
    2010,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2010-05-05", &h610);
static holidayjp_holiday h611 = {
    "2010-07-19",
    2010,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2010-07-19", &h611);
static holidayjp_holiday h612 = {
    "2010-09-20",
    2010,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2010-09-20", &h612);
static holidayjp_holiday h613 = {
    "2010-09-23",
    2010,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2010-09-23", &h613);
static holidayjp_holiday h614 = {
    "2010-10-11",
    2010,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2010-10-11", &h614);
static holidayjp_holiday h615 = {
    "2010-11-03",
    2010,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2010-11-03", &h615);
static holidayjp_holiday h616 = {
    "2010-11-23",
    2010,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2010-11-23", &h616);
static holidayjp_holiday h617 = {
    "2010-12-23",
    2010,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2010-12-23", &h617);
static holidayjp_holiday h618 = {
    "2011-01-01",
    2011,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2011-01-01", &h618);
static holidayjp_holiday h619 = {
    "2011-01-10",
    2011,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2011-01-10", &h619);
static holidayjp_holiday h620 = {
    "2011-02-11",
    2011,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2011-02-11", &h620);
static holidayjp_holiday h621 = {
    "2011-03-21",
    2011,
    3,
    21,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2011-03-21", &h621);
static holidayjp_holiday h622 = {
    "2011-04-29",
    2011,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2011-04-29", &h622);
static holidayjp_holiday h623 = {
    "2011-05-03",
    2011,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2011-05-03", &h623);
static holidayjp_holiday h624 = {
    "2011-05-04",
    2011,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2011-05-04", &h624);
static holidayjp_holiday h625 = {
    "2011-05-05",
    2011,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2011-05-05", &h625);
static holidayjp_holiday h626 = {
    "2011-07-18",
    2011,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2011-07-18", &h626);
static holidayjp_holiday h627 = {
    "2011-09-19",
    2011,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2011-09-19", &h627);
static holidayjp_holiday h628 = {
    "2011-09-23",
    2011,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2011-09-23", &h628);
static holidayjp_holiday h629 = {
    "2011-10-10",
    2011,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2011-10-10", &h629);
static holidayjp_holiday h630 = {
    "2011-11-03",
    2011,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2011-11-03", &h630);
static holidayjp_holiday h631 = {
    "2011-11-23",
    2011,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2011-11-23", &h631);
static holidayjp_holiday h632 = {
    "2011-12-23",
    2011,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2011-12-23", &h632);
static holidayjp_holiday h633 = {
    "2012-01-01",
    2012,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2012-01-01", &h633);
static holidayjp_holiday h634 = {
    "2012-01-02",
    2012,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2012-01-02", &h634);
static holidayjp_holiday h635 = {
    "2012-01-09",
    2012,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2012-01-09", &h635);
static holidayjp_holiday h636 = {
    "2012-02-11",
    2012,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2012-02-11", &h636);
static holidayjp_holiday h637 = {
    "2012-03-20",
    2012,
    3,
    20,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2012-03-20", &h637);
static holidayjp_holiday h638 = {
    "2012-04-29",
    2012,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2012-04-29", &h638);
static holidayjp_holiday h639 = {
    "2012-04-30",
    2012,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2012-04-30", &h639);
static holidayjp_holiday h640 = {
    "2012-05-03",
    2012,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2012-05-03", &h640);
static holidayjp_holiday h641 = {
    "2012-05-04",
    2012,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2012-05-04", &h641);
static holidayjp_holiday h642 = {
    "2012-05-05",
    2012,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2012-05-05", &h642);
static holidayjp_holiday h643 = {
    "2012-07-16",
    2012,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2012-07-16", &h643);
static holidayjp_holiday h644 = {
    "2012-09-17",
    2012,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2012-09-17", &h644);
static holidayjp_holiday h645 = {
    "2012-09-22",
    2012,
    9,
    22,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2012-09-22", &h645);
static holidayjp_holiday h646 = {
    "2012-10-08",
    2012,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2012-10-08", &h646);
static holidayjp_holiday h647 = {
    "2012-11-03",
    2012,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2012-11-03", &h647);
static holidayjp_holiday h648 = {
    "2012-11-23",
    2012,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2012-11-23", &h648);
static holidayjp_holiday h649 = {
    "2012-12-23",
    2012,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2012-12-23", &h649);
static holidayjp_holiday h650 = {
    "2012-12-24",
    2012,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2012-12-24", &h650);
static holidayjp_holiday h651 = {
    "2013-01-01",
    2013,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2013-01-01", &h651);
static holidayjp_holiday h652 = {
    "2013-01-14",
    2013,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2013-01-14", &h652);
static holidayjp_holiday h653 = {
    "2013-02-11",
    2013,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2013-02-11", &h653);
static holidayjp_holiday h654 = {
    "2013-03-20",
    2013,
    3,
    20,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2013-03-20", &h654);
static holidayjp_holiday h655 = {
    "2013-04-29",
    2013,
    4,
    29,
    "月",
    "Monday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2013-04-29", &h655);
static holidayjp_holiday h656 = {
    "2013-05-03",
    2013,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2013-05-03", &h656);
static holidayjp_holiday h657 = {
    "2013-05-04",
    2013,
    5,
    4,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2013-05-04", &h657);
static holidayjp_holiday h658 = {
    "2013-05-05",
    2013,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2013-05-05", &h658);
static holidayjp_holiday h659 = {
    "2013-05-06",
    2013,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2013-05-06", &h659);
static holidayjp_holiday h660 = {
    "2013-07-15",
    2013,
    7,
    15,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2013-07-15", &h660);
static holidayjp_holiday h661 = {
    "2013-09-16",
    2013,
    9,
    16,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2013-09-16", &h661);
static holidayjp_holiday h662 = {
    "2013-09-23",
    2013,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2013-09-23", &h662);
static holidayjp_holiday h663 = {
    "2013-10-14",
    2013,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2013-10-14", &h663);
static holidayjp_holiday h664 = {
    "2013-11-03",
    2013,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2013-11-03", &h664);
static holidayjp_holiday h665 = {
    "2013-11-04",
    2013,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2013-11-04", &h665);
static holidayjp_holiday h666 = {
    "2013-11-23",
    2013,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2013-11-23", &h666);
static holidayjp_holiday h667 = {
    "2013-12-23",
    2013,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2013-12-23", &h667);
static holidayjp_holiday h668 = {
    "2014-01-01",
    2014,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2014-01-01", &h668);
static holidayjp_holiday h669 = {
    "2014-01-13",
    2014,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2014-01-13", &h669);
static holidayjp_holiday h670 = {
    "2014-02-11",
    2014,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2014-02-11", &h670);
static holidayjp_holiday h671 = {
    "2014-03-21",
    2014,
    3,
    21,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2014-03-21", &h671);
static holidayjp_holiday h672 = {
    "2014-04-29",
    2014,
    4,
    29,
    "火",
    "Tuesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2014-04-29", &h672);
static holidayjp_holiday h673 = {
    "2014-05-03",
    2014,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2014-05-03", &h673);
static holidayjp_holiday h674 = {
    "2014-05-04",
    2014,
    5,
    4,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2014-05-04", &h674);
static holidayjp_holiday h675 = {
    "2014-05-05",
    2014,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2014-05-05", &h675);
static holidayjp_holiday h676 = {
    "2014-05-06",
    2014,
    5,
    6,
    "火",
    "Tuesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2014-05-06", &h676);
static holidayjp_holiday h677 = {
    "2014-07-21",
    2014,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2014-07-21", &h677);
static holidayjp_holiday h678 = {
    "2014-09-15",
    2014,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2014-09-15", &h678);
static holidayjp_holiday h679 = {
    "2014-09-23",
    2014,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2014-09-23", &h679);
static holidayjp_holiday h680 = {
    "2014-10-13",
    2014,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2014-10-13", &h680);
static holidayjp_holiday h681 = {
    "2014-11-03",
    2014,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2014-11-03", &h681);
static holidayjp_holiday h682 = {
    "2014-11-23",
    2014,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2014-11-23", &h682);
static holidayjp_holiday h683 = {
    "2014-11-24",
    2014,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2014-11-24", &h683);
static holidayjp_holiday h684 = {
    "2014-12-23",
    2014,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2014-12-23", &h684);
static holidayjp_holiday h685 = {
    "2015-01-01",
    2015,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2015-01-01", &h685);
static holidayjp_holiday h686 = {
    "2015-01-12",
    2015,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2015-01-12", &h686);
static holidayjp_holiday h687 = {
    "2015-02-11",
    2015,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2015-02-11", &h687);
static holidayjp_holiday h688 = {
    "2015-03-21",
    2015,
    3,
    21,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2015-03-21", &h688);
static holidayjp_holiday h689 = {
    "2015-04-29",
    2015,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2015-04-29", &h689);
static holidayjp_holiday h690 = {
    "2015-05-03",
    2015,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2015-05-03", &h690);
static holidayjp_holiday h691 = {
    "2015-05-04",
    2015,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2015-05-04", &h691);
static holidayjp_holiday h692 = {
    "2015-05-05",
    2015,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2015-05-05", &h692);
static holidayjp_holiday h693 = {
    "2015-05-06",
    2015,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2015-05-06", &h693);
static holidayjp_holiday h694 = {
    "2015-07-20",
    2015,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2015-07-20", &h694);
static holidayjp_holiday h695 = {
    "2015-09-21",
    2015,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2015-09-21", &h695);
static holidayjp_holiday h696 = {
    "2015-09-22",
    2015,
    9,
    22,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2015-09-22", &h696);
static holidayjp_holiday h697 = {
    "2015-09-23",
    2015,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2015-09-23", &h697);
static holidayjp_holiday h698 = {
    "2015-10-12",
    2015,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2015-10-12", &h698);
static holidayjp_holiday h699 = {
    "2015-11-03",
    2015,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2015-11-03", &h699);
static holidayjp_holiday h700 = {
    "2015-11-23",
    2015,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2015-11-23", &h700);
static holidayjp_holiday h701 = {
    "2015-12-23",
    2015,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2015-12-23", &h701);
static holidayjp_holiday h702 = {
    "2016-01-01",
    2016,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2016-01-01", &h702);
static holidayjp_holiday h703 = {
    "2016-01-11",
    2016,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2016-01-11", &h703);
static holidayjp_holiday h704 = {
    "2016-02-11",
    2016,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2016-02-11", &h704);
static holidayjp_holiday h705 = {
    "2016-03-20",
    2016,
    3,
    20,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2016-03-20", &h705);
static holidayjp_holiday h706 = {
    "2016-03-21",
    2016,
    3,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2016-03-21", &h706);
static holidayjp_holiday h707 = {
    "2016-04-29",
    2016,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2016-04-29", &h707);
static holidayjp_holiday h708 = {
    "2016-05-03",
    2016,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2016-05-03", &h708);
static holidayjp_holiday h709 = {
    "2016-05-04",
    2016,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2016-05-04", &h709);
static holidayjp_holiday h710 = {
    "2016-05-05",
    2016,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2016-05-05", &h710);
static holidayjp_holiday h711 = {
    "2016-07-18",
    2016,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2016-07-18", &h711);
static holidayjp_holiday h712 = {
    "2016-08-11",
    2016,
    8,
    11,
    "木",
    "Thursday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2016-08-11", &h712);
static holidayjp_holiday h713 = {
    "2016-09-19",
    2016,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2016-09-19", &h713);
static holidayjp_holiday h714 = {
    "2016-09-22",
    2016,
    9,
    22,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2016-09-22", &h714);
static holidayjp_holiday h715 = {
    "2016-10-10",
    2016,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2016-10-10", &h715);
static holidayjp_holiday h716 = {
    "2016-11-03",
    2016,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2016-11-03", &h716);
static holidayjp_holiday h717 = {
    "2016-11-23",
    2016,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2016-11-23", &h717);
static holidayjp_holiday h718 = {
    "2016-12-23",
    2016,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2016-12-23", &h718);
static holidayjp_holiday h719 = {
    "2017-01-01",
    2017,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2017-01-01", &h719);
static holidayjp_holiday h720 = {
    "2017-01-02",
    2017,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2017-01-02", &h720);
static holidayjp_holiday h721 = {
    "2017-01-09",
    2017,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2017-01-09", &h721);
static holidayjp_holiday h722 = {
    "2017-02-11",
    2017,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2017-02-11", &h722);
static holidayjp_holiday h723 = {
    "2017-03-20",
    2017,
    3,
    20,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2017-03-20", &h723);
static holidayjp_holiday h724 = {
    "2017-04-29",
    2017,
    4,
    29,
    "土",
    "Saturday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2017-04-29", &h724);
static holidayjp_holiday h725 = {
    "2017-05-03",
    2017,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2017-05-03", &h725);
static holidayjp_holiday h726 = {
    "2017-05-04",
    2017,
    5,
    4,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2017-05-04", &h726);
static holidayjp_holiday h727 = {
    "2017-05-05",
    2017,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2017-05-05", &h727);
static holidayjp_holiday h728 = {
    "2017-07-17",
    2017,
    7,
    17,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2017-07-17", &h728);
static holidayjp_holiday h729 = {
    "2017-08-11",
    2017,
    8,
    11,
    "金",
    "Friday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2017-08-11", &h729);
static holidayjp_holiday h730 = {
    "2017-09-18",
    2017,
    9,
    18,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2017-09-18", &h730);
static holidayjp_holiday h731 = {
    "2017-09-23",
    2017,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2017-09-23", &h731);
static holidayjp_holiday h732 = {
    "2017-10-09",
    2017,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2017-10-09", &h732);
static holidayjp_holiday h733 = {
    "2017-11-03",
    2017,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2017-11-03", &h733);
static holidayjp_holiday h734 = {
    "2017-11-23",
    2017,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2017-11-23", &h734);
static holidayjp_holiday h735 = {
    "2017-12-23",
    2017,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2017-12-23", &h735);
static holidayjp_holiday h736 = {
    "2018-01-01",
    2018,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2018-01-01", &h736);
static holidayjp_holiday h737 = {
    "2018-01-08",
    2018,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2018-01-08", &h737);
static holidayjp_holiday h738 = {
    "2018-02-11",
    2018,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2018-02-11", &h738);
static holidayjp_holiday h739 = {
    "2018-02-12",
    2018,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2018-02-12", &h739);
static holidayjp_holiday h740 = {
    "2018-03-21",
    2018,
    3,
    21,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2018-03-21", &h740);
static holidayjp_holiday h741 = {
    "2018-04-29",
    2018,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2018-04-29", &h741);
static holidayjp_holiday h742 = {
    "2018-04-30",
    2018,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2018-04-30", &h742);
static holidayjp_holiday h743 = {
    "2018-05-03",
    2018,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2018-05-03", &h743);
static holidayjp_holiday h744 = {
    "2018-05-04",
    2018,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2018-05-04", &h744);
static holidayjp_holiday h745 = {
    "2018-05-05",
    2018,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2018-05-05", &h745);
static holidayjp_holiday h746 = {
    "2018-07-16",
    2018,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2018-07-16", &h746);
static holidayjp_holiday h747 = {
    "2018-08-11",
    2018,
    8,
    11,
    "土",
    "Saturday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2018-08-11", &h747);
static holidayjp_holiday h748 = {
    "2018-09-17",
    2018,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2018-09-17", &h748);
static holidayjp_holiday h749 = {
    "2018-09-23",
    2018,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2018-09-23", &h749);
static holidayjp_holiday h750 = {
    "2018-09-24",
    2018,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2018-09-24", &h750);
static holidayjp_holiday h751 = {
    "2018-10-08",
    2018,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2018-10-08", &h751);
static holidayjp_holiday h752 = {
    "2018-11-03",
    2018,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2018-11-03", &h752);
static holidayjp_holiday h753 = {
    "2018-11-23",
    2018,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2018-11-23", &h753);
static holidayjp_holiday h754 = {
    "2018-12-23",
    2018,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2018-12-23", &h754);
static holidayjp_holiday h755 = {
    "2018-12-24",
    2018,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2018-12-24", &h755);
static holidayjp_holiday h756 = {
    "2019-01-01",
    2019,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2019-01-01", &h756);
static holidayjp_holiday h757 = {
    "2019-01-14",
    2019,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2019-01-14", &h757);
static holidayjp_holiday h758 = {
    "2019-02-11",
    2019,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2019-02-11", &h758);
static holidayjp_holiday h759 = {
    "2019-03-21",
    2019,
    3,
    21,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2019-03-21", &h759);
static holidayjp_holiday h760 = {
    "2019-04-29",
    2019,
    4,
    29,
    "月",
    "Monday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2019-04-29", &h760);
static holidayjp_holiday h761 = {
    "2019-05-03",
    2019,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2019-05-03", &h761);
static holidayjp_holiday h762 = {
    "2019-05-04",
    2019,
    5,
    4,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2019-05-04", &h762);
static holidayjp_holiday h763 = {
    "2019-05-05",
    2019,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2019-05-05", &h763);
static holidayjp_holiday h764 = {
    "2019-05-06",
    2019,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2019-05-06", &h764);
static holidayjp_holiday h765 = {
    "2019-07-15",
    2019,
    7,
    15,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2019-07-15", &h765);
static holidayjp_holiday h766 = {
    "2019-08-11",
    2019,
    8,
    11,
    "日",
    "Sunday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2019-08-11", &h766);
static holidayjp_holiday h767 = {
    "2019-08-12",
    2019,
    8,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2019-08-12", &h767);
static holidayjp_holiday h768 = {
    "2019-09-16",
    2019,
    9,
    16,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2019-09-16", &h768);
static holidayjp_holiday h769 = {
    "2019-09-23",
    2019,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2019-09-23", &h769);
static holidayjp_holiday h770 = {
    "2019-10-14",
    2019,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2019-10-14", &h770);
static holidayjp_holiday h771 = {
    "2019-11-03",
    2019,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2019-11-03", &h771);
static holidayjp_holiday h772 = {
    "2019-11-04",
    2019,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2019-11-04", &h772);
static holidayjp_holiday h773 = {
    "2019-11-23",
    2019,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2019-11-23", &h773);
static holidayjp_holiday h774 = {
    "2019-12-23",
    2019,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2019-12-23", &h774);
static holidayjp_holiday h775 = {
    "2020-01-01",
    2020,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2020-01-01", &h775);
static holidayjp_holiday h776 = {
    "2020-01-13",
    2020,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2020-01-13", &h776);
static holidayjp_holiday h777 = {
    "2020-02-11",
    2020,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2020-02-11", &h777);
static holidayjp_holiday h778 = {
    "2020-03-20",
    2020,
    3,
    20,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2020-03-20", &h778);
static holidayjp_holiday h779 = {
    "2020-04-29",
    2020,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2020-04-29", &h779);
static holidayjp_holiday h780 = {
    "2020-05-03",
    2020,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2020-05-03", &h780);
static holidayjp_holiday h781 = {
    "2020-05-04",
    2020,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2020-05-04", &h781);
static holidayjp_holiday h782 = {
    "2020-05-05",
    2020,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2020-05-05", &h782);
static holidayjp_holiday h783 = {
    "2020-05-06",
    2020,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2020-05-06", &h783);
static holidayjp_holiday h784 = {
    "2020-07-20",
    2020,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2020-07-20", &h784);
static holidayjp_holiday h785 = {
    "2020-08-11",
    2020,
    8,
    11,
    "火",
    "Tuesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2020-08-11", &h785);
static holidayjp_holiday h786 = {
    "2020-09-21",
    2020,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2020-09-21", &h786);
static holidayjp_holiday h787 = {
    "2020-09-22",
    2020,
    9,
    22,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2020-09-22", &h787);
static holidayjp_holiday h788 = {
    "2020-10-12",
    2020,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2020-10-12", &h788);
static holidayjp_holiday h789 = {
    "2020-11-03",
    2020,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2020-11-03", &h789);
static holidayjp_holiday h790 = {
    "2020-11-23",
    2020,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2020-11-23", &h790);
static holidayjp_holiday h791 = {
    "2020-12-23",
    2020,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2020-12-23", &h791);
static holidayjp_holiday h792 = {
    "2021-01-01",
    2021,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2021-01-01", &h792);
static holidayjp_holiday h793 = {
    "2021-01-11",
    2021,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2021-01-11", &h793);
static holidayjp_holiday h794 = {
    "2021-02-11",
    2021,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2021-02-11", &h794);
static holidayjp_holiday h795 = {
    "2021-03-20",
    2021,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2021-03-20", &h795);
static holidayjp_holiday h796 = {
    "2021-04-29",
    2021,
    4,
    29,
    "木",
    "Thursday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2021-04-29", &h796);
static holidayjp_holiday h797 = {
    "2021-05-03",
    2021,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2021-05-03", &h797);
static holidayjp_holiday h798 = {
    "2021-05-04",
    2021,
    5,
    4,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2021-05-04", &h798);
static holidayjp_holiday h799 = {
    "2021-05-05",
    2021,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2021-05-05", &h799);
static holidayjp_holiday h800 = {
    "2021-07-19",
    2021,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2021-07-19", &h800);
static holidayjp_holiday h801 = {
    "2021-08-11",
    2021,
    8,
    11,
    "水",
    "Wednesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2021-08-11", &h801);
static holidayjp_holiday h802 = {
    "2021-09-20",
    2021,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2021-09-20", &h802);
static holidayjp_holiday h803 = {
    "2021-09-23",
    2021,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2021-09-23", &h803);
static holidayjp_holiday h804 = {
    "2021-10-11",
    2021,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2021-10-11", &h804);
static holidayjp_holiday h805 = {
    "2021-11-03",
    2021,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2021-11-03", &h805);
static holidayjp_holiday h806 = {
    "2021-11-23",
    2021,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2021-11-23", &h806);
static holidayjp_holiday h807 = {
    "2021-12-23",
    2021,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2021-12-23", &h807);
static holidayjp_holiday h808 = {
    "2022-01-01",
    2022,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2022-01-01", &h808);
static holidayjp_holiday h809 = {
    "2022-01-10",
    2022,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2022-01-10", &h809);
static holidayjp_holiday h810 = {
    "2022-02-11",
    2022,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2022-02-11", &h810);
static holidayjp_holiday h811 = {
    "2022-03-21",
    2022,
    3,
    21,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2022-03-21", &h811);
static holidayjp_holiday h812 = {
    "2022-04-29",
    2022,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2022-04-29", &h812);
static holidayjp_holiday h813 = {
    "2022-05-03",
    2022,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2022-05-03", &h813);
static holidayjp_holiday h814 = {
    "2022-05-04",
    2022,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2022-05-04", &h814);
static holidayjp_holiday h815 = {
    "2022-05-05",
    2022,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2022-05-05", &h815);
static holidayjp_holiday h816 = {
    "2022-07-18",
    2022,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2022-07-18", &h816);
static holidayjp_holiday h817 = {
    "2022-08-11",
    2022,
    8,
    11,
    "木",
    "Thursday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2022-08-11", &h817);
static holidayjp_holiday h818 = {
    "2022-09-19",
    2022,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2022-09-19", &h818);
static holidayjp_holiday h819 = {
    "2022-09-23",
    2022,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2022-09-23", &h819);
static holidayjp_holiday h820 = {
    "2022-10-10",
    2022,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2022-10-10", &h820);
static holidayjp_holiday h821 = {
    "2022-11-03",
    2022,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2022-11-03", &h821);
static holidayjp_holiday h822 = {
    "2022-11-23",
    2022,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2022-11-23", &h822);
static holidayjp_holiday h823 = {
    "2022-12-23",
    2022,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2022-12-23", &h823);
static holidayjp_holiday h824 = {
    "2023-01-01",
    2023,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2023-01-01", &h824);
static holidayjp_holiday h825 = {
    "2023-01-02",
    2023,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2023-01-02", &h825);
static holidayjp_holiday h826 = {
    "2023-01-09",
    2023,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2023-01-09", &h826);
static holidayjp_holiday h827 = {
    "2023-02-11",
    2023,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2023-02-11", &h827);
static holidayjp_holiday h828 = {
    "2023-03-21",
    2023,
    3,
    21,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2023-03-21", &h828);
static holidayjp_holiday h829 = {
    "2023-04-29",
    2023,
    4,
    29,
    "土",
    "Saturday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2023-04-29", &h829);
static holidayjp_holiday h830 = {
    "2023-05-03",
    2023,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2023-05-03", &h830);
static holidayjp_holiday h831 = {
    "2023-05-04",
    2023,
    5,
    4,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2023-05-04", &h831);
static holidayjp_holiday h832 = {
    "2023-05-05",
    2023,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2023-05-05", &h832);
static holidayjp_holiday h833 = {
    "2023-07-17",
    2023,
    7,
    17,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2023-07-17", &h833);
static holidayjp_holiday h834 = {
    "2023-08-11",
    2023,
    8,
    11,
    "金",
    "Friday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2023-08-11", &h834);
static holidayjp_holiday h835 = {
    "2023-09-18",
    2023,
    9,
    18,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2023-09-18", &h835);
static holidayjp_holiday h836 = {
    "2023-09-23",
    2023,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2023-09-23", &h836);
static holidayjp_holiday h837 = {
    "2023-10-09",
    2023,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2023-10-09", &h837);
static holidayjp_holiday h838 = {
    "2023-11-03",
    2023,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2023-11-03", &h838);
static holidayjp_holiday h839 = {
    "2023-11-23",
    2023,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2023-11-23", &h839);
static holidayjp_holiday h840 = {
    "2023-12-23",
    2023,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2023-12-23", &h840);
static holidayjp_holiday h841 = {
    "2024-01-01",
    2024,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2024-01-01", &h841);
static holidayjp_holiday h842 = {
    "2024-01-08",
    2024,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2024-01-08", &h842);
static holidayjp_holiday h843 = {
    "2024-02-11",
    2024,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2024-02-11", &h843);
static holidayjp_holiday h844 = {
    "2024-02-12",
    2024,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2024-02-12", &h844);
static holidayjp_holiday h845 = {
    "2024-03-20",
    2024,
    3,
    20,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2024-03-20", &h845);
static holidayjp_holiday h846 = {
    "2024-04-29",
    2024,
    4,
    29,
    "月",
    "Monday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2024-04-29", &h846);
static holidayjp_holiday h847 = {
    "2024-05-03",
    2024,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2024-05-03", &h847);
static holidayjp_holiday h848 = {
    "2024-05-04",
    2024,
    5,
    4,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2024-05-04", &h848);
static holidayjp_holiday h849 = {
    "2024-05-05",
    2024,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2024-05-05", &h849);
static holidayjp_holiday h850 = {
    "2024-05-06",
    2024,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2024-05-06", &h850);
static holidayjp_holiday h851 = {
    "2024-07-15",
    2024,
    7,
    15,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2024-07-15", &h851);
static holidayjp_holiday h852 = {
    "2024-08-11",
    2024,
    8,
    11,
    "日",
    "Sunday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2024-08-11", &h852);
static holidayjp_holiday h853 = {
    "2024-08-12",
    2024,
    8,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2024-08-12", &h853);
static holidayjp_holiday h854 = {
    "2024-09-16",
    2024,
    9,
    16,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2024-09-16", &h854);
static holidayjp_holiday h855 = {
    "2024-09-22",
    2024,
    9,
    22,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2024-09-22", &h855);
static holidayjp_holiday h856 = {
    "2024-09-23",
    2024,
    9,
    23,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2024-09-23", &h856);
static holidayjp_holiday h857 = {
    "2024-10-14",
    2024,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2024-10-14", &h857);
static holidayjp_holiday h858 = {
    "2024-11-03",
    2024,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2024-11-03", &h858);
static holidayjp_holiday h859 = {
    "2024-11-04",
    2024,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2024-11-04", &h859);
static holidayjp_holiday h860 = {
    "2024-11-23",
    2024,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2024-11-23", &h860);
static holidayjp_holiday h861 = {
    "2024-12-23",
    2024,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2024-12-23", &h861);
static holidayjp_holiday h862 = {
    "2025-01-01",
    2025,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2025-01-01", &h862);
static holidayjp_holiday h863 = {
    "2025-01-13",
    2025,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2025-01-13", &h863);
static holidayjp_holiday h864 = {
    "2025-02-11",
    2025,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2025-02-11", &h864);
static holidayjp_holiday h865 = {
    "2025-03-20",
    2025,
    3,
    20,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2025-03-20", &h865);
static holidayjp_holiday h866 = {
    "2025-04-29",
    2025,
    4,
    29,
    "火",
    "Tuesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2025-04-29", &h866);
static holidayjp_holiday h867 = {
    "2025-05-03",
    2025,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2025-05-03", &h867);
static holidayjp_holiday h868 = {
    "2025-05-04",
    2025,
    5,
    4,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2025-05-04", &h868);
static holidayjp_holiday h869 = {
    "2025-05-05",
    2025,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2025-05-05", &h869);
static holidayjp_holiday h870 = {
    "2025-05-06",
    2025,
    5,
    6,
    "火",
    "Tuesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2025-05-06", &h870);
static holidayjp_holiday h871 = {
    "2025-07-21",
    2025,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2025-07-21", &h871);
static holidayjp_holiday h872 = {
    "2025-08-11",
    2025,
    8,
    11,
    "月",
    "Monday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2025-08-11", &h872);
static holidayjp_holiday h873 = {
    "2025-09-15",
    2025,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2025-09-15", &h873);
static holidayjp_holiday h874 = {
    "2025-09-23",
    2025,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2025-09-23", &h874);
static holidayjp_holiday h875 = {
    "2025-10-13",
    2025,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2025-10-13", &h875);
static holidayjp_holiday h876 = {
    "2025-11-03",
    2025,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2025-11-03", &h876);
static holidayjp_holiday h877 = {
    "2025-11-23",
    2025,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2025-11-23", &h877);
static holidayjp_holiday h878 = {
    "2025-11-24",
    2025,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2025-11-24", &h878);
static holidayjp_holiday h879 = {
    "2025-12-23",
    2025,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2025-12-23", &h879);
static holidayjp_holiday h880 = {
    "2026-01-01",
    2026,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2026-01-01", &h880);
static holidayjp_holiday h881 = {
    "2026-01-12",
    2026,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2026-01-12", &h881);
static holidayjp_holiday h882 = {
    "2026-02-11",
    2026,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2026-02-11", &h882);
static holidayjp_holiday h883 = {
    "2026-03-20",
    2026,
    3,
    20,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2026-03-20", &h883);
static holidayjp_holiday h884 = {
    "2026-04-29",
    2026,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2026-04-29", &h884);
static holidayjp_holiday h885 = {
    "2026-05-03",
    2026,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2026-05-03", &h885);
static holidayjp_holiday h886 = {
    "2026-05-04",
    2026,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2026-05-04", &h886);
static holidayjp_holiday h887 = {
    "2026-05-05",
    2026,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2026-05-05", &h887);
static holidayjp_holiday h888 = {
    "2026-05-06",
    2026,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2026-05-06", &h888);
static holidayjp_holiday h889 = {
    "2026-07-20",
    2026,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2026-07-20", &h889);
static holidayjp_holiday h890 = {
    "2026-08-11",
    2026,
    8,
    11,
    "火",
    "Tuesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2026-08-11", &h890);
static holidayjp_holiday h891 = {
    "2026-09-21",
    2026,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2026-09-21", &h891);
static holidayjp_holiday h892 = {
    "2026-09-22",
    2026,
    9,
    22,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2026-09-22", &h892);
static holidayjp_holiday h893 = {
    "2026-09-23",
    2026,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2026-09-23", &h893);
static holidayjp_holiday h894 = {
    "2026-10-12",
    2026,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2026-10-12", &h894);
static holidayjp_holiday h895 = {
    "2026-11-03",
    2026,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2026-11-03", &h895);
static holidayjp_holiday h896 = {
    "2026-11-23",
    2026,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2026-11-23", &h896);
static holidayjp_holiday h897 = {
    "2026-12-23",
    2026,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2026-12-23", &h897);
static holidayjp_holiday h898 = {
    "2027-01-01",
    2027,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2027-01-01", &h898);
static holidayjp_holiday h899 = {
    "2027-01-11",
    2027,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2027-01-11", &h899);
static holidayjp_holiday h900 = {
    "2027-02-11",
    2027,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2027-02-11", &h900);
static holidayjp_holiday h901 = {
    "2027-03-21",
    2027,
    3,
    21,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2027-03-21", &h901);
static holidayjp_holiday h902 = {
    "2027-03-22",
    2027,
    3,
    22,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2027-03-22", &h902);
static holidayjp_holiday h903 = {
    "2027-04-29",
    2027,
    4,
    29,
    "木",
    "Thursday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2027-04-29", &h903);
static holidayjp_holiday h904 = {
    "2027-05-03",
    2027,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2027-05-03", &h904);
static holidayjp_holiday h905 = {
    "2027-05-04",
    2027,
    5,
    4,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2027-05-04", &h905);
static holidayjp_holiday h906 = {
    "2027-05-05",
    2027,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2027-05-05", &h906);
static holidayjp_holiday h907 = {
    "2027-07-19",
    2027,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2027-07-19", &h907);
static holidayjp_holiday h908 = {
    "2027-08-11",
    2027,
    8,
    11,
    "水",
    "Wednesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2027-08-11", &h908);
static holidayjp_holiday h909 = {
    "2027-09-20",
    2027,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2027-09-20", &h909);
static holidayjp_holiday h910 = {
    "2027-09-23",
    2027,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2027-09-23", &h910);
static holidayjp_holiday h911 = {
    "2027-10-11",
    2027,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2027-10-11", &h911);
static holidayjp_holiday h912 = {
    "2027-11-03",
    2027,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2027-11-03", &h912);
static holidayjp_holiday h913 = {
    "2027-11-23",
    2027,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2027-11-23", &h913);
static holidayjp_holiday h914 = {
    "2027-12-23",
    2027,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2027-12-23", &h914);
static holidayjp_holiday h915 = {
    "2028-01-01",
    2028,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2028-01-01", &h915);
static holidayjp_holiday h916 = {
    "2028-01-10",
    2028,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2028-01-10", &h916);
static holidayjp_holiday h917 = {
    "2028-02-11",
    2028,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2028-02-11", &h917);
static holidayjp_holiday h918 = {
    "2028-03-20",
    2028,
    3,
    20,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2028-03-20", &h918);
static holidayjp_holiday h919 = {
    "2028-04-29",
    2028,
    4,
    29,
    "土",
    "Saturday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2028-04-29", &h919);
static holidayjp_holiday h920 = {
    "2028-05-03",
    2028,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2028-05-03", &h920);
static holidayjp_holiday h921 = {
    "2028-05-04",
    2028,
    5,
    4,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2028-05-04", &h921);
static holidayjp_holiday h922 = {
    "2028-05-05",
    2028,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2028-05-05", &h922);
static holidayjp_holiday h923 = {
    "2028-07-17",
    2028,
    7,
    17,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2028-07-17", &h923);
static holidayjp_holiday h924 = {
    "2028-08-11",
    2028,
    8,
    11,
    "金",
    "Friday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2028-08-11", &h924);
static holidayjp_holiday h925 = {
    "2028-09-18",
    2028,
    9,
    18,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2028-09-18", &h925);
static holidayjp_holiday h926 = {
    "2028-09-22",
    2028,
    9,
    22,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2028-09-22", &h926);
static holidayjp_holiday h927 = {
    "2028-10-09",
    2028,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2028-10-09", &h927);
static holidayjp_holiday h928 = {
    "2028-11-03",
    2028,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2028-11-03", &h928);
static holidayjp_holiday h929 = {
    "2028-11-23",
    2028,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2028-11-23", &h929);
static holidayjp_holiday h930 = {
    "2028-12-23",
    2028,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2028-12-23", &h930);
static holidayjp_holiday h931 = {
    "2029-01-01",
    2029,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2029-01-01", &h931);
static holidayjp_holiday h932 = {
    "2029-01-08",
    2029,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2029-01-08", &h932);
static holidayjp_holiday h933 = {
    "2029-02-11",
    2029,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2029-02-11", &h933);
static holidayjp_holiday h934 = {
    "2029-02-12",
    2029,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2029-02-12", &h934);
static holidayjp_holiday h935 = {
    "2029-03-20",
    2029,
    3,
    20,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2029-03-20", &h935);
static holidayjp_holiday h936 = {
    "2029-04-29",
    2029,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2029-04-29", &h936);
static holidayjp_holiday h937 = {
    "2029-04-30",
    2029,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2029-04-30", &h937);
static holidayjp_holiday h938 = {
    "2029-05-03",
    2029,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2029-05-03", &h938);
static holidayjp_holiday h939 = {
    "2029-05-04",
    2029,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2029-05-04", &h939);
static holidayjp_holiday h940 = {
    "2029-05-05",
    2029,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2029-05-05", &h940);
static holidayjp_holiday h941 = {
    "2029-07-16",
    2029,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2029-07-16", &h941);
static holidayjp_holiday h942 = {
    "2029-08-11",
    2029,
    8,
    11,
    "土",
    "Saturday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2029-08-11", &h942);
static holidayjp_holiday h943 = {
    "2029-09-17",
    2029,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2029-09-17", &h943);
static holidayjp_holiday h944 = {
    "2029-09-23",
    2029,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2029-09-23", &h944);
static holidayjp_holiday h945 = {
    "2029-09-24",
    2029,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2029-09-24", &h945);
static holidayjp_holiday h946 = {
    "2029-10-08",
    2029,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2029-10-08", &h946);
static holidayjp_holiday h947 = {
    "2029-11-03",
    2029,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2029-11-03", &h947);
static holidayjp_holiday h948 = {
    "2029-11-23",
    2029,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2029-11-23", &h948);
static holidayjp_holiday h949 = {
    "2029-12-23",
    2029,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2029-12-23", &h949);
static holidayjp_holiday h950 = {
    "2029-12-24",
    2029,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2029-12-24", &h950);
static holidayjp_holiday h951 = {
    "2030-01-01",
    2030,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2030-01-01", &h951);
static holidayjp_holiday h952 = {
    "2030-01-14",
    2030,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2030-01-14", &h952);
static holidayjp_holiday h953 = {
    "2030-02-11",
    2030,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2030-02-11", &h953);
static holidayjp_holiday h954 = {
    "2030-03-20",
    2030,
    3,
    20,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2030-03-20", &h954);
static holidayjp_holiday h955 = {
    "2030-04-29",
    2030,
    4,
    29,
    "月",
    "Monday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2030-04-29", &h955);
static holidayjp_holiday h956 = {
    "2030-05-03",
    2030,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2030-05-03", &h956);
static holidayjp_holiday h957 = {
    "2030-05-04",
    2030,
    5,
    4,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2030-05-04", &h957);
static holidayjp_holiday h958 = {
    "2030-05-05",
    2030,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2030-05-05", &h958);
static holidayjp_holiday h959 = {
    "2030-05-06",
    2030,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2030-05-06", &h959);
static holidayjp_holiday h960 = {
    "2030-07-15",
    2030,
    7,
    15,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2030-07-15", &h960);
static holidayjp_holiday h961 = {
    "2030-08-11",
    2030,
    8,
    11,
    "日",
    "Sunday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2030-08-11", &h961);
static holidayjp_holiday h962 = {
    "2030-08-12",
    2030,
    8,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2030-08-12", &h962);
static holidayjp_holiday h963 = {
    "2030-09-16",
    2030,
    9,
    16,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2030-09-16", &h963);
static holidayjp_holiday h964 = {
    "2030-09-23",
    2030,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2030-09-23", &h964);
static holidayjp_holiday h965 = {
    "2030-10-14",
    2030,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2030-10-14", &h965);
static holidayjp_holiday h966 = {
    "2030-11-03",
    2030,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2030-11-03", &h966);
static holidayjp_holiday h967 = {
    "2030-11-04",
    2030,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2030-11-04", &h967);
static holidayjp_holiday h968 = {
    "2030-11-23",
    2030,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2030-11-23", &h968);
static holidayjp_holiday h969 = {
    "2030-12-23",
    2030,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2030-12-23", &h969);
static holidayjp_holiday h970 = {
    "2031-01-01",
    2031,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2031-01-01", &h970);
static holidayjp_holiday h971 = {
    "2031-01-13",
    2031,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2031-01-13", &h971);
static holidayjp_holiday h972 = {
    "2031-02-11",
    2031,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2031-02-11", &h972);
static holidayjp_holiday h973 = {
    "2031-03-21",
    2031,
    3,
    21,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2031-03-21", &h973);
static holidayjp_holiday h974 = {
    "2031-04-29",
    2031,
    4,
    29,
    "火",
    "Tuesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2031-04-29", &h974);
static holidayjp_holiday h975 = {
    "2031-05-03",
    2031,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2031-05-03", &h975);
static holidayjp_holiday h976 = {
    "2031-05-04",
    2031,
    5,
    4,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2031-05-04", &h976);
static holidayjp_holiday h977 = {
    "2031-05-05",
    2031,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2031-05-05", &h977);
static holidayjp_holiday h978 = {
    "2031-05-06",
    2031,
    5,
    6,
    "火",
    "Tuesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2031-05-06", &h978);
static holidayjp_holiday h979 = {
    "2031-07-21",
    2031,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2031-07-21", &h979);
static holidayjp_holiday h980 = {
    "2031-08-11",
    2031,
    8,
    11,
    "月",
    "Monday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2031-08-11", &h980);
static holidayjp_holiday h981 = {
    "2031-09-15",
    2031,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2031-09-15", &h981);
static holidayjp_holiday h982 = {
    "2031-09-23",
    2031,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2031-09-23", &h982);
static holidayjp_holiday h983 = {
    "2031-10-13",
    2031,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2031-10-13", &h983);
static holidayjp_holiday h984 = {
    "2031-11-03",
    2031,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2031-11-03", &h984);
static holidayjp_holiday h985 = {
    "2031-11-23",
    2031,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2031-11-23", &h985);
static holidayjp_holiday h986 = {
    "2031-11-24",
    2031,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2031-11-24", &h986);
static holidayjp_holiday h987 = {
    "2031-12-23",
    2031,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2031-12-23", &h987);
static holidayjp_holiday h988 = {
    "2032-01-01",
    2032,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2032-01-01", &h988);
static holidayjp_holiday h989 = {
    "2032-01-12",
    2032,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2032-01-12", &h989);
static holidayjp_holiday h990 = {
    "2032-02-11",
    2032,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2032-02-11", &h990);
static holidayjp_holiday h991 = {
    "2032-03-20",
    2032,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2032-03-20", &h991);
static holidayjp_holiday h992 = {
    "2032-04-29",
    2032,
    4,
    29,
    "木",
    "Thursday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2032-04-29", &h992);
static holidayjp_holiday h993 = {
    "2032-05-03",
    2032,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2032-05-03", &h993);
static holidayjp_holiday h994 = {
    "2032-05-04",
    2032,
    5,
    4,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2032-05-04", &h994);
static holidayjp_holiday h995 = {
    "2032-05-05",
    2032,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2032-05-05", &h995);
static holidayjp_holiday h996 = {
    "2032-07-19",
    2032,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2032-07-19", &h996);
static holidayjp_holiday h997 = {
    "2032-08-11",
    2032,
    8,
    11,
    "水",
    "Wednesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2032-08-11", &h997);
static holidayjp_holiday h998 = {
    "2032-09-20",
    2032,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2032-09-20", &h998);
static holidayjp_holiday h999 = {
    "2032-09-21",
    2032,
    9,
    21,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2032-09-21", &h999);
static holidayjp_holiday h1000 = {
    "2032-09-22",
    2032,
    9,
    22,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2032-09-22", &h1000);
static holidayjp_holiday h1001 = {
    "2032-10-11",
    2032,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2032-10-11", &h1001);
static holidayjp_holiday h1002 = {
    "2032-11-03",
    2032,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2032-11-03", &h1002);
static holidayjp_holiday h1003 = {
    "2032-11-23",
    2032,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2032-11-23", &h1003);
static holidayjp_holiday h1004 = {
    "2032-12-23",
    2032,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2032-12-23", &h1004);
static holidayjp_holiday h1005 = {
    "2033-01-01",
    2033,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2033-01-01", &h1005);
static holidayjp_holiday h1006 = {
    "2033-01-10",
    2033,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2033-01-10", &h1006);
static holidayjp_holiday h1007 = {
    "2033-02-11",
    2033,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2033-02-11", &h1007);
static holidayjp_holiday h1008 = {
    "2033-03-20",
    2033,
    3,
    20,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2033-03-20", &h1008);
static holidayjp_holiday h1009 = {
    "2033-03-21",
    2033,
    3,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2033-03-21", &h1009);
static holidayjp_holiday h1010 = {
    "2033-04-29",
    2033,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2033-04-29", &h1010);
static holidayjp_holiday h1011 = {
    "2033-05-03",
    2033,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2033-05-03", &h1011);
static holidayjp_holiday h1012 = {
    "2033-05-04",
    2033,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2033-05-04", &h1012);
static holidayjp_holiday h1013 = {
    "2033-05-05",
    2033,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2033-05-05", &h1013);
static holidayjp_holiday h1014 = {
    "2033-07-18",
    2033,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2033-07-18", &h1014);
static holidayjp_holiday h1015 = {
    "2033-08-11",
    2033,
    8,
    11,
    "木",
    "Thursday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2033-08-11", &h1015);
static holidayjp_holiday h1016 = {
    "2033-09-19",
    2033,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2033-09-19", &h1016);
static holidayjp_holiday h1017 = {
    "2033-09-23",
    2033,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2033-09-23", &h1017);
static holidayjp_holiday h1018 = {
    "2033-10-10",
    2033,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2033-10-10", &h1018);
static holidayjp_holiday h1019 = {
    "2033-11-03",
    2033,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2033-11-03", &h1019);
static holidayjp_holiday h1020 = {
    "2033-11-23",
    2033,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2033-11-23", &h1020);
static holidayjp_holiday h1021 = {
    "2033-12-23",
    2033,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2033-12-23", &h1021);
static holidayjp_holiday h1022 = {
    "2034-01-01",
    2034,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2034-01-01", &h1022);
static holidayjp_holiday h1023 = {
    "2034-01-02",
    2034,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2034-01-02", &h1023);
static holidayjp_holiday h1024 = {
    "2034-01-09",
    2034,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2034-01-09", &h1024);
static holidayjp_holiday h1025 = {
    "2034-02-11",
    2034,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2034-02-11", &h1025);
static holidayjp_holiday h1026 = {
    "2034-03-20",
    2034,
    3,
    20,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2034-03-20", &h1026);
static holidayjp_holiday h1027 = {
    "2034-04-29",
    2034,
    4,
    29,
    "土",
    "Saturday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2034-04-29", &h1027);
static holidayjp_holiday h1028 = {
    "2034-05-03",
    2034,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2034-05-03", &h1028);
static holidayjp_holiday h1029 = {
    "2034-05-04",
    2034,
    5,
    4,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2034-05-04", &h1029);
static holidayjp_holiday h1030 = {
    "2034-05-05",
    2034,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2034-05-05", &h1030);
static holidayjp_holiday h1031 = {
    "2034-07-17",
    2034,
    7,
    17,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2034-07-17", &h1031);
static holidayjp_holiday h1032 = {
    "2034-08-11",
    2034,
    8,
    11,
    "金",
    "Friday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2034-08-11", &h1032);
static holidayjp_holiday h1033 = {
    "2034-09-18",
    2034,
    9,
    18,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2034-09-18", &h1033);
static holidayjp_holiday h1034 = {
    "2034-09-23",
    2034,
    9,
    23,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2034-09-23", &h1034);
static holidayjp_holiday h1035 = {
    "2034-10-09",
    2034,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2034-10-09", &h1035);
static holidayjp_holiday h1036 = {
    "2034-11-03",
    2034,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2034-11-03", &h1036);
static holidayjp_holiday h1037 = {
    "2034-11-23",
    2034,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2034-11-23", &h1037);
static holidayjp_holiday h1038 = {
    "2034-12-23",
    2034,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2034-12-23", &h1038);
static holidayjp_holiday h1039 = {
    "2035-01-01",
    2035,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2035-01-01", &h1039);
static holidayjp_holiday h1040 = {
    "2035-01-08",
    2035,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2035-01-08", &h1040);
static holidayjp_holiday h1041 = {
    "2035-02-11",
    2035,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2035-02-11", &h1041);
static holidayjp_holiday h1042 = {
    "2035-02-12",
    2035,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2035-02-12", &h1042);
static holidayjp_holiday h1043 = {
    "2035-03-21",
    2035,
    3,
    21,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2035-03-21", &h1043);
static holidayjp_holiday h1044 = {
    "2035-04-29",
    2035,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2035-04-29", &h1044);
static holidayjp_holiday h1045 = {
    "2035-04-30",
    2035,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2035-04-30", &h1045);
static holidayjp_holiday h1046 = {
    "2035-05-03",
    2035,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2035-05-03", &h1046);
static holidayjp_holiday h1047 = {
    "2035-05-04",
    2035,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2035-05-04", &h1047);
static holidayjp_holiday h1048 = {
    "2035-05-05",
    2035,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2035-05-05", &h1048);
static holidayjp_holiday h1049 = {
    "2035-07-16",
    2035,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2035-07-16", &h1049);
static holidayjp_holiday h1050 = {
    "2035-08-11",
    2035,
    8,
    11,
    "土",
    "Saturday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2035-08-11", &h1050);
static holidayjp_holiday h1051 = {
    "2035-09-17",
    2035,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2035-09-17", &h1051);
static holidayjp_holiday h1052 = {
    "2035-09-23",
    2035,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2035-09-23", &h1052);
static holidayjp_holiday h1053 = {
    "2035-09-24",
    2035,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2035-09-24", &h1053);
static holidayjp_holiday h1054 = {
    "2035-10-08",
    2035,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2035-10-08", &h1054);
static holidayjp_holiday h1055 = {
    "2035-11-03",
    2035,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2035-11-03", &h1055);
static holidayjp_holiday h1056 = {
    "2035-11-23",
    2035,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2035-11-23", &h1056);
static holidayjp_holiday h1057 = {
    "2035-12-23",
    2035,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2035-12-23", &h1057);
static holidayjp_holiday h1058 = {
    "2035-12-24",
    2035,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2035-12-24", &h1058);
static holidayjp_holiday h1059 = {
    "2036-01-01",
    2036,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2036-01-01", &h1059);
static holidayjp_holiday h1060 = {
    "2036-01-14",
    2036,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2036-01-14", &h1060);
static holidayjp_holiday h1061 = {
    "2036-02-11",
    2036,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2036-02-11", &h1061);
static holidayjp_holiday h1062 = {
    "2036-03-20",
    2036,
    3,
    20,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2036-03-20", &h1062);
static holidayjp_holiday h1063 = {
    "2036-04-29",
    2036,
    4,
    29,
    "火",
    "Tuesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2036-04-29", &h1063);
static holidayjp_holiday h1064 = {
    "2036-05-03",
    2036,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2036-05-03", &h1064);
static holidayjp_holiday h1065 = {
    "2036-05-04",
    2036,
    5,
    4,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2036-05-04", &h1065);
static holidayjp_holiday h1066 = {
    "2036-05-05",
    2036,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2036-05-05", &h1066);
static holidayjp_holiday h1067 = {
    "2036-05-06",
    2036,
    5,
    6,
    "火",
    "Tuesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2036-05-06", &h1067);
static holidayjp_holiday h1068 = {
    "2036-07-21",
    2036,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2036-07-21", &h1068);
static holidayjp_holiday h1069 = {
    "2036-08-11",
    2036,
    8,
    11,
    "月",
    "Monday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2036-08-11", &h1069);
static holidayjp_holiday h1070 = {
    "2036-09-15",
    2036,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2036-09-15", &h1070);
static holidayjp_holiday h1071 = {
    "2036-09-22",
    2036,
    9,
    22,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2036-09-22", &h1071);
static holidayjp_holiday h1072 = {
    "2036-10-13",
    2036,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2036-10-13", &h1072);
static holidayjp_holiday h1073 = {
    "2036-11-03",
    2036,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2036-11-03", &h1073);
static holidayjp_holiday h1074 = {
    "2036-11-23",
    2036,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2036-11-23", &h1074);
static holidayjp_holiday h1075 = {
    "2036-11-24",
    2036,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2036-11-24", &h1075);
static holidayjp_holiday h1076 = {
    "2036-12-23",
    2036,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2036-12-23", &h1076);
static holidayjp_holiday h1077 = {
    "2037-01-01",
    2037,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2037-01-01", &h1077);
static holidayjp_holiday h1078 = {
    "2037-01-12",
    2037,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2037-01-12", &h1078);
static holidayjp_holiday h1079 = {
    "2037-02-11",
    2037,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2037-02-11", &h1079);
static holidayjp_holiday h1080 = {
    "2037-03-20",
    2037,
    3,
    20,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2037-03-20", &h1080);
static holidayjp_holiday h1081 = {
    "2037-04-29",
    2037,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2037-04-29", &h1081);
static holidayjp_holiday h1082 = {
    "2037-05-03",
    2037,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2037-05-03", &h1082);
static holidayjp_holiday h1083 = {
    "2037-05-04",
    2037,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2037-05-04", &h1083);
static holidayjp_holiday h1084 = {
    "2037-05-05",
    2037,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2037-05-05", &h1084);
static holidayjp_holiday h1085 = {
    "2037-05-06",
    2037,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2037-05-06", &h1085);
static holidayjp_holiday h1086 = {
    "2037-07-20",
    2037,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2037-07-20", &h1086);
static holidayjp_holiday h1087 = {
    "2037-08-11",
    2037,
    8,
    11,
    "火",
    "Tuesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2037-08-11", &h1087);
static holidayjp_holiday h1088 = {
    "2037-09-21",
    2037,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2037-09-21", &h1088);
static holidayjp_holiday h1089 = {
    "2037-09-22",
    2037,
    9,
    22,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2037-09-22", &h1089);
static holidayjp_holiday h1090 = {
    "2037-09-23",
    2037,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2037-09-23", &h1090);
static holidayjp_holiday h1091 = {
    "2037-10-12",
    2037,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2037-10-12", &h1091);
static holidayjp_holiday h1092 = {
    "2037-11-03",
    2037,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2037-11-03", &h1092);
static holidayjp_holiday h1093 = {
    "2037-11-23",
    2037,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2037-11-23", &h1093);
static holidayjp_holiday h1094 = {
    "2037-12-23",
    2037,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2037-12-23", &h1094);
static holidayjp_holiday h1095 = {
    "2038-01-01",
    2038,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2038-01-01", &h1095);
static holidayjp_holiday h1096 = {
    "2038-01-11",
    2038,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2038-01-11", &h1096);
static holidayjp_holiday h1097 = {
    "2038-02-11",
    2038,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2038-02-11", &h1097);
static holidayjp_holiday h1098 = {
    "2038-03-20",
    2038,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2038-03-20", &h1098);
static holidayjp_holiday h1099 = {
    "2038-04-29",
    2038,
    4,
    29,
    "木",
    "Thursday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2038-04-29", &h1099);
static holidayjp_holiday h1100 = {
    "2038-05-03",
    2038,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2038-05-03", &h1100);
static holidayjp_holiday h1101 = {
    "2038-05-04",
    2038,
    5,
    4,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2038-05-04", &h1101);
static holidayjp_holiday h1102 = {
    "2038-05-05",
    2038,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2038-05-05", &h1102);
static holidayjp_holiday h1103 = {
    "2038-07-19",
    2038,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2038-07-19", &h1103);
static holidayjp_holiday h1104 = {
    "2038-08-11",
    2038,
    8,
    11,
    "水",
    "Wednesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2038-08-11", &h1104);
static holidayjp_holiday h1105 = {
    "2038-09-20",
    2038,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2038-09-20", &h1105);
static holidayjp_holiday h1106 = {
    "2038-09-23",
    2038,
    9,
    23,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2038-09-23", &h1106);
static holidayjp_holiday h1107 = {
    "2038-10-11",
    2038,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2038-10-11", &h1107);
static holidayjp_holiday h1108 = {
    "2038-11-03",
    2038,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2038-11-03", &h1108);
static holidayjp_holiday h1109 = {
    "2038-11-23",
    2038,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2038-11-23", &h1109);
static holidayjp_holiday h1110 = {
    "2038-12-23",
    2038,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2038-12-23", &h1110);
static holidayjp_holiday h1111 = {
    "2039-01-01",
    2039,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2039-01-01", &h1111);
static holidayjp_holiday h1112 = {
    "2039-01-10",
    2039,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2039-01-10", &h1112);
static holidayjp_holiday h1113 = {
    "2039-02-11",
    2039,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2039-02-11", &h1113);
static holidayjp_holiday h1114 = {
    "2039-03-21",
    2039,
    3,
    21,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2039-03-21", &h1114);
static holidayjp_holiday h1115 = {
    "2039-04-29",
    2039,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2039-04-29", &h1115);
static holidayjp_holiday h1116 = {
    "2039-05-03",
    2039,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2039-05-03", &h1116);
static holidayjp_holiday h1117 = {
    "2039-05-04",
    2039,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2039-05-04", &h1117);
static holidayjp_holiday h1118 = {
    "2039-05-05",
    2039,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2039-05-05", &h1118);
static holidayjp_holiday h1119 = {
    "2039-07-18",
    2039,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2039-07-18", &h1119);
static holidayjp_holiday h1120 = {
    "2039-08-11",
    2039,
    8,
    11,
    "木",
    "Thursday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2039-08-11", &h1120);
static holidayjp_holiday h1121 = {
    "2039-09-19",
    2039,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2039-09-19", &h1121);
static holidayjp_holiday h1122 = {
    "2039-09-23",
    2039,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2039-09-23", &h1122);
static holidayjp_holiday h1123 = {
    "2039-10-10",
    2039,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2039-10-10", &h1123);
static holidayjp_holiday h1124 = {
    "2039-11-03",
    2039,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2039-11-03", &h1124);
static holidayjp_holiday h1125 = {
    "2039-11-23",
    2039,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2039-11-23", &h1125);
static holidayjp_holiday h1126 = {
    "2039-12-23",
    2039,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2039-12-23", &h1126);
static holidayjp_holiday h1127 = {
    "2040-01-01",
    2040,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2040-01-01", &h1127);
static holidayjp_holiday h1128 = {
    "2040-01-02",
    2040,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2040-01-02", &h1128);
static holidayjp_holiday h1129 = {
    "2040-01-09",
    2040,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2040-01-09", &h1129);
static holidayjp_holiday h1130 = {
    "2040-02-11",
    2040,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2040-02-11", &h1130);
static holidayjp_holiday h1131 = {
    "2040-03-20",
    2040,
    3,
    20,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2040-03-20", &h1131);
static holidayjp_holiday h1132 = {
    "2040-04-29",
    2040,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2040-04-29", &h1132);
static holidayjp_holiday h1133 = {
    "2040-04-30",
    2040,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2040-04-30", &h1133);
static holidayjp_holiday h1134 = {
    "2040-05-03",
    2040,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2040-05-03", &h1134);
static holidayjp_holiday h1135 = {
    "2040-05-04",
    2040,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2040-05-04", &h1135);
static holidayjp_holiday h1136 = {
    "2040-05-05",
    2040,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2040-05-05", &h1136);
static holidayjp_holiday h1137 = {
    "2040-07-16",
    2040,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2040-07-16", &h1137);
static holidayjp_holiday h1138 = {
    "2040-08-11",
    2040,
    8,
    11,
    "土",
    "Saturday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2040-08-11", &h1138);
static holidayjp_holiday h1139 = {
    "2040-09-17",
    2040,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2040-09-17", &h1139);
static holidayjp_holiday h1140 = {
    "2040-09-22",
    2040,
    9,
    22,
    "土",
    "Saturday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2040-09-22", &h1140);
static holidayjp_holiday h1141 = {
    "2040-10-08",
    2040,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2040-10-08", &h1141);
static holidayjp_holiday h1142 = {
    "2040-11-03",
    2040,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2040-11-03", &h1142);
static holidayjp_holiday h1143 = {
    "2040-11-23",
    2040,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2040-11-23", &h1143);
static holidayjp_holiday h1144 = {
    "2040-12-23",
    2040,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2040-12-23", &h1144);
static holidayjp_holiday h1145 = {
    "2040-12-24",
    2040,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2040-12-24", &h1145);
static holidayjp_holiday h1146 = {
    "2041-01-01",
    2041,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2041-01-01", &h1146);
static holidayjp_holiday h1147 = {
    "2041-01-14",
    2041,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2041-01-14", &h1147);
static holidayjp_holiday h1148 = {
    "2041-02-11",
    2041,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2041-02-11", &h1148);
static holidayjp_holiday h1149 = {
    "2041-03-20",
    2041,
    3,
    20,
    "水",
    "Wednesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2041-03-20", &h1149);
static holidayjp_holiday h1150 = {
    "2041-04-29",
    2041,
    4,
    29,
    "月",
    "Monday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2041-04-29", &h1150);
static holidayjp_holiday h1151 = {
    "2041-05-03",
    2041,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2041-05-03", &h1151);
static holidayjp_holiday h1152 = {
    "2041-05-04",
    2041,
    5,
    4,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2041-05-04", &h1152);
static holidayjp_holiday h1153 = {
    "2041-05-05",
    2041,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2041-05-05", &h1153);
static holidayjp_holiday h1154 = {
    "2041-05-06",
    2041,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2041-05-06", &h1154);
static holidayjp_holiday h1155 = {
    "2041-07-15",
    2041,
    7,
    15,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2041-07-15", &h1155);
static holidayjp_holiday h1156 = {
    "2041-08-11",
    2041,
    8,
    11,
    "日",
    "Sunday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2041-08-11", &h1156);
static holidayjp_holiday h1157 = {
    "2041-08-12",
    2041,
    8,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2041-08-12", &h1157);
static holidayjp_holiday h1158 = {
    "2041-09-16",
    2041,
    9,
    16,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2041-09-16", &h1158);
static holidayjp_holiday h1159 = {
    "2041-09-23",
    2041,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2041-09-23", &h1159);
static holidayjp_holiday h1160 = {
    "2041-10-14",
    2041,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2041-10-14", &h1160);
static holidayjp_holiday h1161 = {
    "2041-11-03",
    2041,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2041-11-03", &h1161);
static holidayjp_holiday h1162 = {
    "2041-11-04",
    2041,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2041-11-04", &h1162);
static holidayjp_holiday h1163 = {
    "2041-11-23",
    2041,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2041-11-23", &h1163);
static holidayjp_holiday h1164 = {
    "2041-12-23",
    2041,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2041-12-23", &h1164);
static holidayjp_holiday h1165 = {
    "2042-01-01",
    2042,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2042-01-01", &h1165);
static holidayjp_holiday h1166 = {
    "2042-01-13",
    2042,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2042-01-13", &h1166);
static holidayjp_holiday h1167 = {
    "2042-02-11",
    2042,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2042-02-11", &h1167);
static holidayjp_holiday h1168 = {
    "2042-03-20",
    2042,
    3,
    20,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2042-03-20", &h1168);
static holidayjp_holiday h1169 = {
    "2042-04-29",
    2042,
    4,
    29,
    "火",
    "Tuesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2042-04-29", &h1169);
static holidayjp_holiday h1170 = {
    "2042-05-03",
    2042,
    5,
    3,
    "土",
    "Saturday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2042-05-03", &h1170);
static holidayjp_holiday h1171 = {
    "2042-05-04",
    2042,
    5,
    4,
    "日",
    "Sunday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2042-05-04", &h1171);
static holidayjp_holiday h1172 = {
    "2042-05-05",
    2042,
    5,
    5,
    "月",
    "Monday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2042-05-05", &h1172);
static holidayjp_holiday h1173 = {
    "2042-05-06",
    2042,
    5,
    6,
    "火",
    "Tuesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2042-05-06", &h1173);
static holidayjp_holiday h1174 = {
    "2042-07-21",
    2042,
    7,
    21,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2042-07-21", &h1174);
static holidayjp_holiday h1175 = {
    "2042-08-11",
    2042,
    8,
    11,
    "月",
    "Monday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2042-08-11", &h1175);
static holidayjp_holiday h1176 = {
    "2042-09-15",
    2042,
    9,
    15,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2042-09-15", &h1176);
static holidayjp_holiday h1177 = {
    "2042-09-23",
    2042,
    9,
    23,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2042-09-23", &h1177);
static holidayjp_holiday h1178 = {
    "2042-10-13",
    2042,
    10,
    13,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2042-10-13", &h1178);
static holidayjp_holiday h1179 = {
    "2042-11-03",
    2042,
    11,
    3,
    "月",
    "Monday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2042-11-03", &h1179);
static holidayjp_holiday h1180 = {
    "2042-11-23",
    2042,
    11,
    23,
    "日",
    "Sunday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2042-11-23", &h1180);
static holidayjp_holiday h1181 = {
    "2042-11-24",
    2042,
    11,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2042-11-24", &h1181);
static holidayjp_holiday h1182 = {
    "2042-12-23",
    2042,
    12,
    23,
    "火",
    "Tuesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2042-12-23", &h1182);
static holidayjp_holiday h1183 = {
    "2043-01-01",
    2043,
    1,
    1,
    "木",
    "Thursday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2043-01-01", &h1183);
static holidayjp_holiday h1184 = {
    "2043-01-12",
    2043,
    1,
    12,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2043-01-12", &h1184);
static holidayjp_holiday h1185 = {
    "2043-02-11",
    2043,
    2,
    11,
    "水",
    "Wednesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2043-02-11", &h1185);
static holidayjp_holiday h1186 = {
    "2043-03-21",
    2043,
    3,
    21,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2043-03-21", &h1186);
static holidayjp_holiday h1187 = {
    "2043-04-29",
    2043,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2043-04-29", &h1187);
static holidayjp_holiday h1188 = {
    "2043-05-03",
    2043,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2043-05-03", &h1188);
static holidayjp_holiday h1189 = {
    "2043-05-04",
    2043,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2043-05-04", &h1189);
static holidayjp_holiday h1190 = {
    "2043-05-05",
    2043,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2043-05-05", &h1190);
static holidayjp_holiday h1191 = {
    "2043-05-06",
    2043,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2043-05-06", &h1191);
static holidayjp_holiday h1192 = {
    "2043-07-20",
    2043,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2043-07-20", &h1192);
static holidayjp_holiday h1193 = {
    "2043-08-11",
    2043,
    8,
    11,
    "火",
    "Tuesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2043-08-11", &h1193);
static holidayjp_holiday h1194 = {
    "2043-09-21",
    2043,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2043-09-21", &h1194);
static holidayjp_holiday h1195 = {
    "2043-09-22",
    2043,
    9,
    22,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2043-09-22", &h1195);
static holidayjp_holiday h1196 = {
    "2043-09-23",
    2043,
    9,
    23,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2043-09-23", &h1196);
static holidayjp_holiday h1197 = {
    "2043-10-12",
    2043,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2043-10-12", &h1197);
static holidayjp_holiday h1198 = {
    "2043-11-03",
    2043,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2043-11-03", &h1198);
static holidayjp_holiday h1199 = {
    "2043-11-23",
    2043,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2043-11-23", &h1199);
static holidayjp_holiday h1200 = {
    "2043-12-23",
    2043,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2043-12-23", &h1200);
static holidayjp_holiday h1201 = {
    "2044-01-01",
    2044,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2044-01-01", &h1201);
static holidayjp_holiday h1202 = {
    "2044-01-11",
    2044,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2044-01-11", &h1202);
static holidayjp_holiday h1203 = {
    "2044-02-11",
    2044,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2044-02-11", &h1203);
static holidayjp_holiday h1204 = {
    "2044-03-20",
    2044,
    3,
    20,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2044-03-20", &h1204);
static holidayjp_holiday h1205 = {
    "2044-03-21",
    2044,
    3,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2044-03-21", &h1205);
static holidayjp_holiday h1206 = {
    "2044-04-29",
    2044,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2044-04-29", &h1206);
static holidayjp_holiday h1207 = {
    "2044-05-03",
    2044,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2044-05-03", &h1207);
static holidayjp_holiday h1208 = {
    "2044-05-04",
    2044,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2044-05-04", &h1208);
static holidayjp_holiday h1209 = {
    "2044-05-05",
    2044,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2044-05-05", &h1209);
static holidayjp_holiday h1210 = {
    "2044-07-18",
    2044,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2044-07-18", &h1210);
static holidayjp_holiday h1211 = {
    "2044-08-11",
    2044,
    8,
    11,
    "木",
    "Thursday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2044-08-11", &h1211);
static holidayjp_holiday h1212 = {
    "2044-09-19",
    2044,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2044-09-19", &h1212);
static holidayjp_holiday h1213 = {
    "2044-09-22",
    2044,
    9,
    22,
    "木",
    "Thursday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2044-09-22", &h1213);
static holidayjp_holiday h1214 = {
    "2044-10-10",
    2044,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2044-10-10", &h1214);
static holidayjp_holiday h1215 = {
    "2044-11-03",
    2044,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2044-11-03", &h1215);
static holidayjp_holiday h1216 = {
    "2044-11-23",
    2044,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2044-11-23", &h1216);
static holidayjp_holiday h1217 = {
    "2044-12-23",
    2044,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2044-12-23", &h1217);
static holidayjp_holiday h1218 = {
    "2045-01-01",
    2045,
    1,
    1,
    "日",
    "Sunday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2045-01-01", &h1218);
static holidayjp_holiday h1219 = {
    "2045-01-02",
    2045,
    1,
    2,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2045-01-02", &h1219);
static holidayjp_holiday h1220 = {
    "2045-01-09",
    2045,
    1,
    9,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2045-01-09", &h1220);
static holidayjp_holiday h1221 = {
    "2045-02-11",
    2045,
    2,
    11,
    "土",
    "Saturday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2045-02-11", &h1221);
static holidayjp_holiday h1222 = {
    "2045-03-20",
    2045,
    3,
    20,
    "月",
    "Monday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2045-03-20", &h1222);
static holidayjp_holiday h1223 = {
    "2045-04-29",
    2045,
    4,
    29,
    "土",
    "Saturday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2045-04-29", &h1223);
static holidayjp_holiday h1224 = {
    "2045-05-03",
    2045,
    5,
    3,
    "水",
    "Wednesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2045-05-03", &h1224);
static holidayjp_holiday h1225 = {
    "2045-05-04",
    2045,
    5,
    4,
    "木",
    "Thursday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2045-05-04", &h1225);
static holidayjp_holiday h1226 = {
    "2045-05-05",
    2045,
    5,
    5,
    "金",
    "Friday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2045-05-05", &h1226);
static holidayjp_holiday h1227 = {
    "2045-07-17",
    2045,
    7,
    17,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2045-07-17", &h1227);
static holidayjp_holiday h1228 = {
    "2045-08-11",
    2045,
    8,
    11,
    "金",
    "Friday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2045-08-11", &h1228);
static holidayjp_holiday h1229 = {
    "2045-09-18",
    2045,
    9,
    18,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2045-09-18", &h1229);
static holidayjp_holiday h1230 = {
    "2045-09-22",
    2045,
    9,
    22,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2045-09-22", &h1230);
static holidayjp_holiday h1231 = {
    "2045-10-09",
    2045,
    10,
    9,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2045-10-09", &h1231);
static holidayjp_holiday h1232 = {
    "2045-11-03",
    2045,
    11,
    3,
    "金",
    "Friday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2045-11-03", &h1232);
static holidayjp_holiday h1233 = {
    "2045-11-23",
    2045,
    11,
    23,
    "木",
    "Thursday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2045-11-23", &h1233);
static holidayjp_holiday h1234 = {
    "2045-12-23",
    2045,
    12,
    23,
    "土",
    "Saturday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2045-12-23", &h1234);
static holidayjp_holiday h1235 = {
    "2046-01-01",
    2046,
    1,
    1,
    "月",
    "Monday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2046-01-01", &h1235);
static holidayjp_holiday h1236 = {
    "2046-01-08",
    2046,
    1,
    8,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2046-01-08", &h1236);
static holidayjp_holiday h1237 = {
    "2046-02-11",
    2046,
    2,
    11,
    "日",
    "Sunday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2046-02-11", &h1237);
static holidayjp_holiday h1238 = {
    "2046-02-12",
    2046,
    2,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2046-02-12", &h1238);
static holidayjp_holiday h1239 = {
    "2046-03-20",
    2046,
    3,
    20,
    "火",
    "Tuesday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2046-03-20", &h1239);
static holidayjp_holiday h1240 = {
    "2046-04-29",
    2046,
    4,
    29,
    "日",
    "Sunday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2046-04-29", &h1240);
static holidayjp_holiday h1241 = {
    "2046-04-30",
    2046,
    4,
    30,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2046-04-30", &h1241);
static holidayjp_holiday h1242 = {
    "2046-05-03",
    2046,
    5,
    3,
    "木",
    "Thursday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2046-05-03", &h1242);
static holidayjp_holiday h1243 = {
    "2046-05-04",
    2046,
    5,
    4,
    "金",
    "Friday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2046-05-04", &h1243);
static holidayjp_holiday h1244 = {
    "2046-05-05",
    2046,
    5,
    5,
    "土",
    "Saturday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2046-05-05", &h1244);
static holidayjp_holiday h1245 = {
    "2046-07-16",
    2046,
    7,
    16,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2046-07-16", &h1245);
static holidayjp_holiday h1246 = {
    "2046-08-11",
    2046,
    8,
    11,
    "土",
    "Saturday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2046-08-11", &h1246);
static holidayjp_holiday h1247 = {
    "2046-09-17",
    2046,
    9,
    17,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2046-09-17", &h1247);
static holidayjp_holiday h1248 = {
    "2046-09-23",
    2046,
    9,
    23,
    "日",
    "Sunday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2046-09-23", &h1248);
static holidayjp_holiday h1249 = {
    "2046-09-24",
    2046,
    9,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2046-09-24", &h1249);
static holidayjp_holiday h1250 = {
    "2046-10-08",
    2046,
    10,
    8,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2046-10-08", &h1250);
static holidayjp_holiday h1251 = {
    "2046-11-03",
    2046,
    11,
    3,
    "土",
    "Saturday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2046-11-03", &h1251);
static holidayjp_holiday h1252 = {
    "2046-11-23",
    2046,
    11,
    23,
    "金",
    "Friday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2046-11-23", &h1252);
static holidayjp_holiday h1253 = {
    "2046-12-23",
    2046,
    12,
    23,
    "日",
    "Sunday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2046-12-23", &h1253);
static holidayjp_holiday h1254 = {
    "2046-12-24",
    2046,
    12,
    24,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2046-12-24", &h1254);
static holidayjp_holiday h1255 = {
    "2047-01-01",
    2047,
    1,
    1,
    "火",
    "Tuesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2047-01-01", &h1255);
static holidayjp_holiday h1256 = {
    "2047-01-14",
    2047,
    1,
    14,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2047-01-14", &h1256);
static holidayjp_holiday h1257 = {
    "2047-02-11",
    2047,
    2,
    11,
    "月",
    "Monday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2047-02-11", &h1257);
static holidayjp_holiday h1258 = {
    "2047-03-21",
    2047,
    3,
    21,
    "木",
    "Thursday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2047-03-21", &h1258);
static holidayjp_holiday h1259 = {
    "2047-04-29",
    2047,
    4,
    29,
    "月",
    "Monday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2047-04-29", &h1259);
static holidayjp_holiday h1260 = {
    "2047-05-03",
    2047,
    5,
    3,
    "金",
    "Friday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2047-05-03", &h1260);
static holidayjp_holiday h1261 = {
    "2047-05-04",
    2047,
    5,
    4,
    "土",
    "Saturday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2047-05-04", &h1261);
static holidayjp_holiday h1262 = {
    "2047-05-05",
    2047,
    5,
    5,
    "日",
    "Sunday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2047-05-05", &h1262);
static holidayjp_holiday h1263 = {
    "2047-05-06",
    2047,
    5,
    6,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2047-05-06", &h1263);
static holidayjp_holiday h1264 = {
    "2047-07-15",
    2047,
    7,
    15,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2047-07-15", &h1264);
static holidayjp_holiday h1265 = {
    "2047-08-11",
    2047,
    8,
    11,
    "日",
    "Sunday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2047-08-11", &h1265);
static holidayjp_holiday h1266 = {
    "2047-08-12",
    2047,
    8,
    12,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2047-08-12", &h1266);
static holidayjp_holiday h1267 = {
    "2047-09-16",
    2047,
    9,
    16,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2047-09-16", &h1267);
static holidayjp_holiday h1268 = {
    "2047-09-23",
    2047,
    9,
    23,
    "月",
    "Monday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2047-09-23", &h1268);
static holidayjp_holiday h1269 = {
    "2047-10-14",
    2047,
    10,
    14,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2047-10-14", &h1269);
static holidayjp_holiday h1270 = {
    "2047-11-03",
    2047,
    11,
    3,
    "日",
    "Sunday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2047-11-03", &h1270);
static holidayjp_holiday h1271 = {
    "2047-11-04",
    2047,
    11,
    4,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2047-11-04", &h1271);
static holidayjp_holiday h1272 = {
    "2047-11-23",
    2047,
    11,
    23,
    "土",
    "Saturday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2047-11-23", &h1272);
static holidayjp_holiday h1273 = {
    "2047-12-23",
    2047,
    12,
    23,
    "月",
    "Monday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2047-12-23", &h1273);
static holidayjp_holiday h1274 = {
    "2048-01-01",
    2048,
    1,
    1,
    "水",
    "Wednesday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2048-01-01", &h1274);
static holidayjp_holiday h1275 = {
    "2048-01-13",
    2048,
    1,
    13,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2048-01-13", &h1275);
static holidayjp_holiday h1276 = {
    "2048-02-11",
    2048,
    2,
    11,
    "火",
    "Tuesday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2048-02-11", &h1276);
static holidayjp_holiday h1277 = {
    "2048-03-20",
    2048,
    3,
    20,
    "金",
    "Friday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2048-03-20", &h1277);
static holidayjp_holiday h1278 = {
    "2048-04-29",
    2048,
    4,
    29,
    "水",
    "Wednesday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2048-04-29", &h1278);
static holidayjp_holiday h1279 = {
    "2048-05-03",
    2048,
    5,
    3,
    "日",
    "Sunday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2048-05-03", &h1279);
static holidayjp_holiday h1280 = {
    "2048-05-04",
    2048,
    5,
    4,
    "月",
    "Monday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2048-05-04", &h1280);
static holidayjp_holiday h1281 = {
    "2048-05-05",
    2048,
    5,
    5,
    "火",
    "Tuesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2048-05-05", &h1281);
static holidayjp_holiday h1282 = {
    "2048-05-06",
    2048,
    5,
    6,
    "水",
    "Wednesday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2048-05-06", &h1282);
static holidayjp_holiday h1283 = {
    "2048-07-20",
    2048,
    7,
    20,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2048-07-20", &h1283);
static holidayjp_holiday h1284 = {
    "2048-08-11",
    2048,
    8,
    11,
    "火",
    "Tuesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2048-08-11", &h1284);
static holidayjp_holiday h1285 = {
    "2048-09-21",
    2048,
    9,
    21,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2048-09-21", &h1285);
static holidayjp_holiday h1286 = {
    "2048-09-22",
    2048,
    9,
    22,
    "火",
    "Tuesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2048-09-22", &h1286);
static holidayjp_holiday h1287 = {
    "2048-10-12",
    2048,
    10,
    12,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2048-10-12", &h1287);
static holidayjp_holiday h1288 = {
    "2048-11-03",
    2048,
    11,
    3,
    "火",
    "Tuesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2048-11-03", &h1288);
static holidayjp_holiday h1289 = {
    "2048-11-23",
    2048,
    11,
    23,
    "月",
    "Monday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2048-11-23", &h1289);
static holidayjp_holiday h1290 = {
    "2048-12-23",
    2048,
    12,
    23,
    "水",
    "Wednesday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2048-12-23", &h1290);
static holidayjp_holiday h1291 = {
    "2049-01-01",
    2049,
    1,
    1,
    "金",
    "Friday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2049-01-01", &h1291);
static holidayjp_holiday h1292 = {
    "2049-01-11",
    2049,
    1,
    11,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2049-01-11", &h1292);
static holidayjp_holiday h1293 = {
    "2049-02-11",
    2049,
    2,
    11,
    "木",
    "Thursday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2049-02-11", &h1293);
static holidayjp_holiday h1294 = {
    "2049-03-20",
    2049,
    3,
    20,
    "土",
    "Saturday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2049-03-20", &h1294);
static holidayjp_holiday h1295 = {
    "2049-04-29",
    2049,
    4,
    29,
    "木",
    "Thursday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2049-04-29", &h1295);
static holidayjp_holiday h1296 = {
    "2049-05-03",
    2049,
    5,
    3,
    "月",
    "Monday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2049-05-03", &h1296);
static holidayjp_holiday h1297 = {
    "2049-05-04",
    2049,
    5,
    4,
    "火",
    "Tuesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2049-05-04", &h1297);
static holidayjp_holiday h1298 = {
    "2049-05-05",
    2049,
    5,
    5,
    "水",
    "Wednesday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2049-05-05", &h1298);
static holidayjp_holiday h1299 = {
    "2049-07-19",
    2049,
    7,
    19,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2049-07-19", &h1299);
static holidayjp_holiday h1300 = {
    "2049-08-11",
    2049,
    8,
    11,
    "水",
    "Wednesday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2049-08-11", &h1300);
static holidayjp_holiday h1301 = {
    "2049-09-20",
    2049,
    9,
    20,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2049-09-20", &h1301);
static holidayjp_holiday h1302 = {
    "2049-09-21",
    2049,
    9,
    21,
    "火",
    "Tuesday",
    "国民の休日",
    "Citizen's Holiday"
};
holidayjp_hash_set(h, "2049-09-21", &h1302);
static holidayjp_holiday h1303 = {
    "2049-09-22",
    2049,
    9,
    22,
    "水",
    "Wednesday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2049-09-22", &h1303);
static holidayjp_holiday h1304 = {
    "2049-10-11",
    2049,
    10,
    11,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2049-10-11", &h1304);
static holidayjp_holiday h1305 = {
    "2049-11-03",
    2049,
    11,
    3,
    "水",
    "Wednesday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2049-11-03", &h1305);
static holidayjp_holiday h1306 = {
    "2049-11-23",
    2049,
    11,
    23,
    "火",
    "Tuesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2049-11-23", &h1306);
static holidayjp_holiday h1307 = {
    "2049-12-23",
    2049,
    12,
    23,
    "木",
    "Thursday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2049-12-23", &h1307);
static holidayjp_holiday h1308 = {
    "2050-01-01",
    2050,
    1,
    1,
    "土",
    "Saturday",
    "元日",
    "New Year's Day"
};
holidayjp_hash_set(h, "2050-01-01", &h1308);
static holidayjp_holiday h1309 = {
    "2050-01-10",
    2050,
    1,
    10,
    "月",
    "Monday",
    "成人の日",
    "Coming of Age Day"
};
holidayjp_hash_set(h, "2050-01-10", &h1309);
static holidayjp_holiday h1310 = {
    "2050-02-11",
    2050,
    2,
    11,
    "金",
    "Friday",
    "建国記念の日",
    "National Foundation Day"
};
holidayjp_hash_set(h, "2050-02-11", &h1310);
static holidayjp_holiday h1311 = {
    "2050-03-20",
    2050,
    3,
    20,
    "日",
    "Sunday",
    "春分の日",
    "Vernal Equinox Day"
};
holidayjp_hash_set(h, "2050-03-20", &h1311);
static holidayjp_holiday h1312 = {
    "2050-03-21",
    2050,
    3,
    21,
    "月",
    "Monday",
    "振替休日",
    "Holiday in lieu"
};
holidayjp_hash_set(h, "2050-03-21", &h1312);
static holidayjp_holiday h1313 = {
    "2050-04-29",
    2050,
    4,
    29,
    "金",
    "Friday",
    "昭和の日",
    "Showa Day"
};
holidayjp_hash_set(h, "2050-04-29", &h1313);
static holidayjp_holiday h1314 = {
    "2050-05-03",
    2050,
    5,
    3,
    "火",
    "Tuesday",
    "憲法記念日",
    "Constitution Memorial Day"
};
holidayjp_hash_set(h, "2050-05-03", &h1314);
static holidayjp_holiday h1315 = {
    "2050-05-04",
    2050,
    5,
    4,
    "水",
    "Wednesday",
    "みどりの日",
    "Greenery Day"
};
holidayjp_hash_set(h, "2050-05-04", &h1315);
static holidayjp_holiday h1316 = {
    "2050-05-05",
    2050,
    5,
    5,
    "木",
    "Thursday",
    "こどもの日",
    "Children's Day"
};
holidayjp_hash_set(h, "2050-05-05", &h1316);
static holidayjp_holiday h1317 = {
    "2050-07-18",
    2050,
    7,
    18,
    "月",
    "Monday",
    "海の日",
    "Marine Day"
};
holidayjp_hash_set(h, "2050-07-18", &h1317);
static holidayjp_holiday h1318 = {
    "2050-08-11",
    2050,
    8,
    11,
    "木",
    "Thursday",
    "山の日",
    "Mountain Day"
};
holidayjp_hash_set(h, "2050-08-11", &h1318);
static holidayjp_holiday h1319 = {
    "2050-09-19",
    2050,
    9,
    19,
    "月",
    "Monday",
    "敬老の日",
    "Respect for the Aged Day"
};
holidayjp_hash_set(h, "2050-09-19", &h1319);
static holidayjp_holiday h1320 = {
    "2050-09-23",
    2050,
    9,
    23,
    "金",
    "Friday",
    "秋分の日",
    "Autumnal Equinox Day"
};
holidayjp_hash_set(h, "2050-09-23", &h1320);
static holidayjp_holiday h1321 = {
    "2050-10-10",
    2050,
    10,
    10,
    "月",
    "Monday",
    "体育の日",
    "Health and Sports Day"
};
holidayjp_hash_set(h, "2050-10-10", &h1321);
static holidayjp_holiday h1322 = {
    "2050-11-03",
    2050,
    11,
    3,
    "木",
    "Thursday",
    "文化の日",
    "National Culture Day"
};
holidayjp_hash_set(h, "2050-11-03", &h1322);
static holidayjp_holiday h1323 = {
    "2050-11-23",
    2050,
    11,
    23,
    "水",
    "Wednesday",
    "勤労感謝の日",
    "Labor Thanksgiving Day"
};
holidayjp_hash_set(h, "2050-11-23", &h1323);
static holidayjp_holiday h1324 = {
    "2050-12-23",
    2050,
    12,
    23,
    "金",
    "Friday",
    "天皇誕生日",
    "Emperor's Birthday"
};
holidayjp_hash_set(h, "2050-12-23", &h1324);
/* AUTO GENERATED END */

    return h;
}