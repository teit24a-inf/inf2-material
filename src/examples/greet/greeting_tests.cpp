#include <catch2/catch_test_macros.hpp>

#include "greeting.h"
using namespace inf2_examples;

TEST_CASE("greeting", "[greet]") {
  REQUIRE(greeting("World") == "Hello World!\n");
}
