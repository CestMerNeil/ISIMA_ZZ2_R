#include "catch.hpp"
#include <cstring>
#include <sstream> // a mettre en commentaire 
#include "OutOfRangeException.hpp"

TEST_CASE("exceptions aux bornes") {
  Chaine s(10);
    
  REQUIRE_THROWS_AS( s[-1] == 0, Chaine::OutOfRangeException);
  // OU
  REQUIRE_THROWS_AS( s[-1] == 0, std::out_of_range);
  REQUIRE_THROWS_AS( s[12] == 0, std::bad_alloc);  // :-)
}
