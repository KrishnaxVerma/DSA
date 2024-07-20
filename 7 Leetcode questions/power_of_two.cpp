#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 0; pow(2, i) <= n; i++)
    {
        if (pow(2, i) == n)
        {
            cout << "true";
            x = 1;
        }
    }
    if (x == 0)
        cout << "false";
    return 0;
}