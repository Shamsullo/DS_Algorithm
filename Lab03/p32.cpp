#include <iostream>
#include <string>

using namespace std;

	//Vertical Posting

main(){

	string post; cin >> post;

	for (int i = 0; i < post.size(); ++i)	{
		cout << post.at(i) << " ";
	}

	cout << endl;
	
	for (int i = 1; i < post.size(); ++i)	{
		cout << post.at(i) << endl;
	}

	return 0;
}