#include <iostream>
using namespace  std;

// Which Alien

main(){

	int antena; cin >> antena;
	int eyes; cin >> eyes;

	if (antena >= 3 && eyes <= 4){
		cout << "TroyMartian" << endl;
	}
	if (antena <= 6 && eyes >= 2){
		cout << "VladSaturian" << endl;
	} 
	if (antena <= 2 && eyes <= 3){
		cout << "GraemeMercurian" << endl;
	}
}
