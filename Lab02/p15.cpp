#include <iostream>
using namespace std;

	//Terms of Office

main(){
	int xYear; cin >> xYear;
	int yYear; cin >> yYear;

	while(xYear <= yYear){
		cout << "All positions change in year " << xYear << endl;
		xYear += 60;
	}
}