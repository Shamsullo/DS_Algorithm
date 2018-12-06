#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "BigInt.h"

#include <sstream>
#include <stdexcept>

using namespace std;

TEST_CASE("Checking constructor's", "[ctors]"){
	ostringstream sout;

	SECTION("Constructor with no agument"){
		sout << BigInt();
		REQUIRE(sout.str() == "0");
	}
}