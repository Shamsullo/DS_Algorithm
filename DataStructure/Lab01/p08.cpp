#include <iostream>

using namespace std;
	// Inside or outside of rectangle

int main() {

	// 1st rectangle 
	const int x1 = 100;
	const int y1 = 100;

	const int x2 = 300;
	const int y2 = 200;

	// 2nd rectangle 
	const int x3 = 200;
	const int y3 = 150;

	const int x4 = 500;
	const int y4 = 350;

	cout << "x: ";
	int x; cin >> x;

	cout << "y: ";
	int y; cin >> y;

	bool inRect1 = (x >= x1 and y >= y1) and (x <= x2 and y <= y2);
	bool inRect2 = (x >= x3 and y >= y3) and (x <= x4 and y <= y4);

	bool inSomeRect = inRect1 or inRect2;
	bool outOfRect =  not inSomeRect;

	int numOfRect = 0;
	numOfRect += inRect1;
	numOfRect += inRect2;

	cout << boolalpha;
	cout << "in first rect: " << inRect1 << endl;
	cout << "in second rect: " << inRect2 << endl;
	cout << "in some rect: " << inSomeRect << endl;
	cout << "out of rect: " << outOfRect << endl;
	cout << "in how many rect: " << numOfRect << endl;


}
