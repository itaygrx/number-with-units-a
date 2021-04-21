#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>

TEST_CASE("Valid Constructor Input")
{
    CHECK_THROWS(NumberWithUnits unitundifiend(100,"Birds"));
    CHECK_NOTHROW(NumberWithUnits unit_g(2.2, "g"));
    CHECK_NOTHROW(NumberWithUnits unit_ton(3.2, "ton"));
    CHECK_NOTHROW(NumberWithUnits unit_cm(32, "cm"));
    CHECK_NOTHROW(NumberWithUnits unit_m(200, "m"));
    CHECK_NOTHROW(NumberWithUnits unit_km(32, "km"));
    CHECK_NOTHROW(NumberWithUnits unit_USD(-52, "USD"));
    CHECK_NOTHROW(NumberWithUnits unit_ILS(400, "ILS"));
    CHECK_NOTHROW(NumberWithUnits unit_sec(-33, "sec"));
    CHECK_NOTHROW(NumberWithUnits unit_min(5.6, "min"));
    CHECK_NOTHROW(NumberWithUnits unit_hour(7.2, "hour"));
}

TEST_CASE("Invalid Constructor input")
{
    CHECK_THROWS(NumberWithUnits unit_cm(14, "Cm"));
    CHECK_THROWS(NumberWithUnits unit_cm(8, "CM"));
    CHECK_THROWS(NumberWithUnits unit_sec(4, "second"));
    CHECK_THROWS(NumberWithUnits unit_sec(3, "Sec"));
    CHECK_THROWS(NumberWithUnits unit_kg(2.5, "Weight"));
    CHECK_THROWS(NumberWithUnits unit_kg(4, "Long"));
    CHECK_THROWS(NumberWithUnits unit_min(6, "Hours"));
    CHECK_THROWS(NumberWithUnits unit_min(4, "nevermind"));
    CHECK_THROWS(NumberWithUnits unit_day(17.8, "try"));
    CHECK_THROWS(NumberWithUnits unit_week(21, "phone"));
}