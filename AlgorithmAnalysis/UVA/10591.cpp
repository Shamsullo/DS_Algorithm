#include <iostream>
#include <set>

using namespace std;
	// Happy number


int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    set<int> st;
    int sum = num;
    while (st.insert(sum).second)
    {
      int temp = sum;
      sum = 0;
      while (temp != 0)
      {
        sum += (temp % 10) * (temp % 10);
        temp /= 10;
      }
      if (sum == 1)
      {
        cout << "Case #" << i + 1 << ": " << num << " is a Happy number." << endl;
        break;
      }
    }
    if (sum != 1)
      cout << "Case #" << i + 1 << ": " << num << " is an Unhappy number." << endl;
  }

  return 0;
}

// set<int> s;

// int happy(int n){
// 	int sum = 0;
// 	if(sum <= 9){
// 		s.insert(n);
// 		return n;
// 	}
// 	while(n != 0){
// 		sum = (n%10)*(n%10);
// 		n /= 10;
// 	}
// 	s.insert(sum);
// 	happy(sum);
// }


// int main(){

// 	int testCase; cin >> testCase;
// 	for (int i = 1; i <= testCase; ++i)
// 	{
	
// 		int a; cin >> a;
// 		int f = happy(a);
	
// 		cout << "Case #" << i << ": ";
// 		// int f = *(s.begin());
// 		if(f == 1 or f == 7){
// 			cout << a << " is a Happy number"<< endl;
// 		}else{
// 			cout << a << " is an Unhappy number"<< endl;
// 		}

// 		for(auto& a: s){
// 			cout << a << " ";
// 		}
// 		cout << endl;

// 	}


// }
