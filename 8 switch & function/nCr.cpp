#include <iostream>
using namespace std;

int fac(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fac(x - 1);
}
int ncr(int n, int r)
{
    int ans = fac(n) / (fac(r) * fac(n - r));
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "The value of " << n << "C" << r << "is: " << ncr(n, r);
    return 0;
}