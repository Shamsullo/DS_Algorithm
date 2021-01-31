#include <iostream>
#include <string>

using namespace std;
	// Do  you know  your woburn color?

main(){

	bool red = false, blue = false, white = false;

	for (int i = 0; i < 2; ++i)	{

		string input; cin >> input;

		if(input.compare("RED") == 0){
			red = true;
		}else if(input.compare("BLUE") == 0){
			blue = true;
		}else if (input.compare("WHITE") == 0){
			white = true;
		}
		
	}

	if(red and blue)
		cout << "WHITE" << endl;
	if(red and white)
		cout << "BLUE" << endl;
	if(blue and white)
		cout << "RED" << endl;

	return 0;
}