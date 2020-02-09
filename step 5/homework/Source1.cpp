#include <iostream>
using namespace std;

int main()
{

	int arr[2][3]{1,2,3,4,5,6};
	int* pa = (int*)arr;
	for(int i;i<6;i++)
	cout << *pa++;
}







