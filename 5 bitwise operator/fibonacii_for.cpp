#include <iostream>
using namespace std;

int main()
{
    int fib, first = 0, second = 1;
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << first<<endl;
        else if (i == 2)
            cout << second<<endl;
        else
        {
            fib = first + second;
            cout << fib << endl;
            first = second;
            second = fib;
        }
    }

    return 0;
}