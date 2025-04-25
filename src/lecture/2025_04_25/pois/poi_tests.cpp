#include <catch2/catch_test_macros.hpp>

#include "poi.h"

TEST_CASE("int_variable", "[unrelated]")
{
    int x = 42;

    REQUIRE(x == 42);
}

TEST_CASE("empty_poi", "[poi]")
{
    PointOfInterest p1;

    REQUIRE(p1.name == "");
    REQUIRE(p1.description == "");
    REQUIRE(p1.fee == 0);
}

TEST_CASE("poi_with_name", "[poi]")
{
    PointOfInterest p1("Eiffelturm");

    REQUIRE(p1.name == "Eiffelturm");
    REQUIRE(p1.description == "");
    REQUIRE(p1.fee == 0);
}

TEST_CASE("poi_with_all_attributes", "[poi]")
{
    PointOfInterest p1("Eiffelturm", "Wahrzeichen von Paris", 42);

    REQUIRE(p1.name == "Eiffelturm");
    REQUIRE(p1.description == "Wahrzeichen von Paris");
    REQUIRE(p1.fee == 42);
}

TEST_CASE("set_name", "[poi]")
{
    PointOfInterest p1;

    p1.set_name("Eiffelturm");

    REQUIRE(p1.name == "Eiffelturm");
    REQUIRE(p1.description == "");
    REQUIRE(p1.fee == 0);
}
