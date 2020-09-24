#define CATCH_CONFIG_MAIN
#include "catch.cpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("SUM","[sumNums]"){
  REQUIRE(Sum(1,2,3)==6);
  REQUIRE(Sum(1,2)==3);
  REQUIRE(Sum(1,2,3,4,5)==15);
}

TEST_CASE("PRODUCT","[ProductNums]"){
  REQUIRE(Product(1,2)==2);
  REQUIRE(Product(8,2)==16);
  REQUIRE(Product(9,9)==81);
}
