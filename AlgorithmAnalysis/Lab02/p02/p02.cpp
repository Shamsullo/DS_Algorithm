#include <iostream>
#include <string>

#include "HashSetStr.h"

using namespace std;



int main(){

	HashSetStr names();

   
   	// HashSetStr mySet();
	string ss = "hello";
	names.insert(ss);
	names.insert("aauuu");

	names.printDebug();

}