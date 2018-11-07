#include <iostream>
#include <iomanip>

using namespace std;

	//Interest

main(){
	double n, m; cin >> n >> m;
	int y;cin >> y;
	m = (m/100) + 1;

	for (int i = 0; i <= y; ++i)
	{
		if (i == 0){
			cout << i << " " << fixed << setprecision(2) << n <<endl;
		}else{
			n *= m;
			cout << i << " " << fixed << setprecision(2) << n << endl;
		}

	}
}