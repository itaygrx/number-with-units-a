#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>

TEST_CASE("Valid Constructor Input")
{
    CHECK_NOTHROW(NumberWithUnits unit_g(2.2, "g"));
    CHECK_NOTHROW(NumberWithUnits unit_ton(3.2, "ton"));
    CHECK_NOTHROW(NumberWithUnits unit_cm(32, "cm"));
    CHECK_NOTHROW(NumberWithUnits unit_m(200, "m"));

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

TEST_CASE("Operator Checks"){
    NumberWithUnits a(14 , "cm") , b(5,"m");
    CHECK(a<b);
    CHECK(b>a);
    CHECK(a+b);
    CHECK(a-b);
        NumberWithUnits c=b-a;
        CHECK(c==NumberWithUnits{4.86 , "m"});
        CHECK((c+a)==b);
        CHECK((c-b)==-a);
        CHECK((-c)==NumberWithUnits{-4.86 , "m"});
}