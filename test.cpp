#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Remove Twos implemented", "[removetwos]") {
  REQUIRE( RemoveTwos(2) == 1 );
  REQUIRE( RemoveTwos(4) == 1 );
  REQUIRE( RemoveTwos(16) == 1 );
  REQUIRE( RemoveTwos(7) == 7 );
  REQUIRE( RemoveTwos(26) == 13 );
}

TEST_CASE ( "Nth fibonacci Implemented", "[fibonacci]") {
  REQUIRE(NthFibonacci(0) == 0);
  REQUIRE(NthFibonacci(1) == 1 );
  REQUIRE(NthFibonacci(2) == 1 );
  REQUIRE(NthFibonacci(3) == 2);
  REQUIRE(NthFibonacci(4) == 3);
}
