#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter a binary: ";
    cin >> n;
    for (int i = 0; n != 0; i++)
    {
        
        if(n&1)
        ans = ans +pow(2, i);
        n=n/10;
    }
    cout << "Decimal number is " << ans;
    return 0;
}