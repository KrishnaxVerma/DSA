#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int r = 0;
    while (n != 0)
    {
        if ((r < INT_MIN / 10) || (r >= INT_MAX / 10))
        {//return 0 if r get out range
            cout << "0";
            break;
        }
        int d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
cout<<"Reverse is: "<<r;
    return 0;
}