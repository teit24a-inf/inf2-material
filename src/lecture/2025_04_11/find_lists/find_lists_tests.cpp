#include <catch2/catch_test_macros.hpp>

#include "find_lists.h"

TEST_CASE("find_element", "[find]") {
  REQUIRE(find_element(std::vector{10, 20, 30, 40, 50}, 30) == 2);
  REQUIRE(find_element(std::vector{10, 20, 30, 40, 50}, 100) == 5);
  REQUIRE(find_element(std::vector{10, 20, 30, 40, 50}, 100) == 6);
}
