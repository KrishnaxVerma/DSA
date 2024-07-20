#include <iostream>
using namespace std;
int check(int x)
{
    if (x % 2 == 0)
        cout << "even";
    else
        cout << "odd";
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    check(n);
    return 0;
}