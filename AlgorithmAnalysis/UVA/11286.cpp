#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	while(true){
		
		int n; cin >> n;
		if(n == 0) break;
		map<vector<int>, int> cmb;
		
		for(int i = 0; i < n; ++i){
			vector<int> v(5);
			for(auto& x: v) cin >> x;
			sort(v.begin(), v.end());
			++cmb[v];
		}

		int cmbFreq = 0;
		for(auto& p: cmb){
			cmbFreq = max(cmbFreq, p.second);
		}

		int ans = 0;
		for(auto& p: cmb){
			if(p.second == cmbFreq)
				++ans;
		}
		cout << cmbFreq * ans << endl;

	}
}