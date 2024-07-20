#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int m = n, ans, mask = 0;
    if (m == 0)
        cout << "1";
    else
    {
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        cout << "1st compliment is : " << ans;
    }

    return 0;
}