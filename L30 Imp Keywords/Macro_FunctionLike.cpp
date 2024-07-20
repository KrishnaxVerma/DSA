#include <iostream>
using namespace std;

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{

	int a = 18,b = 76;

	cout << "Minimum value between"
		<< a << " and " << b 
		<< " is: " << min(a, b);

	return 0;
}
