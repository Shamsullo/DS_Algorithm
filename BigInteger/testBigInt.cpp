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
		SECTION("Case 7"){
			REQUIRE_THROWS_AS(BigInt("0173B"), runtime_error);
		}
		SECTION("Case 8"){
			REQUIRE_THROWS_AS(BigInt("000001a7b3"), runtime_error);
		}
		SECTION("Case 9"){
			REQUIRE_THROWS_AS(BigInt("twentyOne"), runtime_error);
		}
		SECTION("Case 10"){
			REQUIRE_THROWS_AS(BigInt("+120"), runtime_error);
		}
		SECTION("Case 11"){
			REQUIRE_THROWS_AS(BigInt("---4312"), runtime_error);
		}
		SECTION("Case 12"){
			REQUIRE_THROWS_AS(BigInt("   12  "), runtime_error);
		}
		SECTION("Case 13"){
			REQUIRE_THROWS_AS(BigInt("120 121 123"), runtime_error);
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


TEST_CASE("Checking for arithmetic operations", "[arithmetics]"){

	REQUIRE(BigInt("214354") + BigInt("1234") == BigInt("215588"));
	REQUIRE(BigInt("1434") - BigInt("1234") == BigInt("200"));
	REQUIRE(BigInt("354") + BigInt("1234") == BigInt("1588"));
	REQUIRE(BigInt("2124354") - BigInt("-1234") == BigInt("2125588"));
	REQUIRE(BigInt("9") -  BigInt("12") == BigInt("-3"));
	REQUIRE(BigInt("12") -  BigInt("9") == BigInt("3"));

}

TEST_CASE("Check equality", "[equality]")
{
	REQUIRE(BigInt("3426") == BigInt("3426"));
	REQUIRE(BigInt("-13426") == BigInt("-13426"));
	REQUIRE(BigInt("3426") != BigInt("34261"));
	REQUIRE(BigInt("131526") != BigInt("13426"));
	REQUIRE(BigInt("-3426") == BigInt("-3426"));

}

TEST_CASE("Check comparisons", "[comparisons]")
{

    REQUIRE(BigInt("1234567891011") < BigInt("2134567891011"));
    REQUIRE(BigInt("1234567891011") > BigInt("-2134567891011"));
    REQUIRE(BigInt("1254567891011") > BigInt("1234567891011"));
    REQUIRE(BigInt("-34567") < BigInt("-23456"));
    REQUIRE(BigInt("56789") <= BigInt("567891"));
    REQUIRE(BigInt("-12010") != BigInt("-23101"));
    REQUIRE(BigInt("12345") >= BigInt("-2134567891011"));
    REQUIRE(BigInt("125678") <= BigInt("12345679"));   
    
}


