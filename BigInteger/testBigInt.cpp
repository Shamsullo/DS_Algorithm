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
	SECTION("Constructor with a string agument"){
		SECTION("Case 1"){
			sout << BigInt("000000");
			REQUIRE(sout.str() == "0");
		}
		SECTION("Case 2"){
			sout << BigInt("0000102");
			REQUIRE(sout.str() == "102");
		}
		SECTION("Case 3"){
			sout << BigInt("12341628470");
			REQUIRE(sout.str() == "12341628470");
		}
		SECTION("Case 4"){
			sout << BigInt("-0023");
			REQUIRE(sout.str() == "-23");
		}
		SECTION("Case 5"){
			REQUIRE_THROWS_AS(BigInt("*0173"), runtime_error);
		}
		SECTION("Case 6"){
			sout << BigInt("-628470");
			REQUIRE(sout.str() == "-628470");
		}	
	}
	SECTION("Constructor with an int agument"){
		SECTION("Case 1"){
			sout << BigInt(125);
			REQUIRE(sout.str() == "125");
		}
		SECTION("Case 2"){
			sout << BigInt(-567);
			REQUIRE(sout.str() == "-567");
		}
	}

}