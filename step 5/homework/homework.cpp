

#include <iostream>
using namespace std;

int main()
{

	int arr[10]{};
	int* pa = arr;
	*(pa+5) = 5;
	int b = pa[5];
	cout << b;
}