
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int N = 12;
	int massiv[N];

	massiv[0] = 1;
	massiv[1] = 2;
	massiv[2] = 3;
	massiv[3] = 3;
	massiv[4] = 3;
	massiv[5] = 3;
	massiv[6] = 3;
	massiv[8] = 3;
	massiv[9] = 3;
	massiv[10] = 3;
	massiv[11] = 3;


	int number = 0;

	cout << "введите номер нужного ученика" << endl;
	cin >> number;

	cout << "оценка=" << massiv[number - 1] << endl;
}