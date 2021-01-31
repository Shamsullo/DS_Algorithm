#include <iostream>
#include <cstdint>

using namespace std;

int64_t factorial(uint32_t n)
{
    return n == 0 ? 1: n * factorial(n - 1);
}

int main()
{
    cout << "n: ";
    uint32_t n; cin >> n;
    cout << n << "! = " << factorial(n) << endl;
}