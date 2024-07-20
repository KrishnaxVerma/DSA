#include <iostream>
using namespace std;

// Multi-line Macro definition
#define ELEMENTS 1,2,3,\
                 4,5,6,\
                 7,8,9

//For multi line use \ to change line

int main()
{
	int arr[] = { ELEMENTS };

	printf("Elements of Array are:\n");

	for (int i = 0; i < 9; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}
