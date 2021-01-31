#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "draft.h"

#include <sstream>


using namespace std;

TEST_CASE("Exercise 1", "[ex1]")
{
    ostringstream sout;

    SECTION("Example 1")
    {
        char ac[] = "Chicken";
        char* pc = strdup(ac, 8);
        while(*pc){
            sout << *pc++;
        }
        //sout << srtdup("Chicken", 8);
        REQUIRE(sout.str() == "Chicken");
    }
}