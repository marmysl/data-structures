#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "search.hpp"

#include <array>
#include <utility>

TEST_CASE("Test recursive version of binary search", "[search]"){

  std::array<int, 10> data = {-9, -4, 1, 4, 5, 10, 31, 42, 43, 91};
  std::pair<bool,std::size_t> result;
  
  result = recursive_binary_search(data, -9);
  REQUIRE(result.first);
  REQUIRE(result.second == 0);

  result = recursive_binary_search(data, 31);
  REQUIRE(result.first);
  REQUIRE(result.second == 6);

  result = recursive_binary_search(data, 91);
  REQUIRE(result.first);
  REQUIRE(result.second == 9);
  
  result = recursive_binary_search(data, -100);
  REQUIRE(!result.first);

  result = recursive_binary_search(data, 12);
  REQUIRE(!result.first);

  result = recursive_binary_search(data, 100);
  REQUIRE(!result.first);
  
}

TEST_CASE("Test iterative version of binary search", "[search]"){

  std::array<int, 10> data = {-9, -4, 1, 4, 5, 10, 31, 42, 43, 91};
  std::pair<bool,std::size_t> result;
  
  result = iterative_binary_search(data, -9);
  REQUIRE(result.first);
  REQUIRE(result.second == 0);

  result = iterative_binary_search(data, 31);
  REQUIRE(result.first);
  REQUIRE(result.second == 6);

  result = iterative_binary_search(data, 91);
  REQUIRE(result.first);
  REQUIRE(result.second == 9);
  
  result = iterative_binary_search(data, -100);
  REQUIRE(!result.first);

  result = iterative_binary_search(data, 12);
  REQUIRE(!result.first);

  result = iterative_binary_search(data, 100);
  REQUIRE(!result.first);
  
}
