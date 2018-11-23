#include <iostream>
#include <iomanip>



using namespace std;

double factorial(double n){
    double result;
    if(n == 0 or n == 1){
        result = 1;
    }else{
        result = 1;
        for(int i = 2; i <= n; i++){
            result *= i;
        }
    }
    
  return result;
}

int main(){
 
        double n; cin >> n;

        double answer = 0;
        if(n > 3){
            answer = ((factorial(n) / (factorial(n - 4) * factorial(4))) / n) * 4;
            cout << fixed << setprecision(0) << answer << "\n";
        }else{
            cout << fixed << setprecision(0) << answer << "\n";
        }
        return 0;
    }