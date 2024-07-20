#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int product = 1, sum = 0;
    while (n != 0)
    {
        int d = n % 10;
        product = product * d;
        sum = sum + d;
        n = n / 10;
    }
    cout << "Sum is " << sum << endl;
    cout << "Product is " << product << endl;
    cout << product << "-" << sum << "=" << product - sum;
    return 0;
}