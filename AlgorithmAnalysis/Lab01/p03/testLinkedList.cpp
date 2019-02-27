#define CATCH_CONFIG_MAIN
#include "../../catch.hpp"

#include "LinkedList.h"

TEST_CASE("Constructor with no paramaters", "[ctors]"){

	LinkedList lst;

	REQUIRE(lst.size() == 0);
	REQUIRE(lst.toStr() == "{}");
}

TEST_CASE("pushBack(int data)", "[PushBack]"){

	LinkedList lst;
	SECTION("Case 1"){
		lst.pushBack(1);
		REQUIRE(lst.size() == 1);
		REQUIRE(lst.toStr() == "{1}");	
	}
	
	SECTION("Case 2"){
		lst.pushBack(1);
		lst.pushBack(2);
		lst.pushBack(3);
		lst.pushBack(4);
		REQUIRE(lst.size() == 4);
		REQUIRE(lst.toStr() == "{1, 2, 3, 4}");
	}
}

TEST_CASE("Iterators", "itors"){

	LinkedList lst;
	lst.pushBack(1);
	lst.pushBack(2);
	lst.pushBack(3);
	lst.pushBack(4);

	SECTION("Case 1"){
		LinkedList::Iter it = lst.begin();
		REQUIRE(*it == 1);

		++it;
		REQUIRE(*it == 2);

		++it;
		REQUIRE(*it == 3);
	}

	SECTION("Case 2"){
		LinkedList::Iter it = lst.end();
	
		--it;
		REQUIRE(*it == 4);

		--it;
		REQUIRE(*it == 3);

		--it;
		--it;
		REQUIRE(it == lst.begin());
	}

}