
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int number = 10;

	int massiv[number];

	for (int i = 0; i < number; i++)
	{
		cout << "������� �������� � " << i << "������� �������" << endl;
		cin >> massiv[i];
	}
	int sum = 0;

	for (int i = 0; i < number; i++)

		if (massiv[i] < 0)
			sum += massiv[i];

	cout << "����� ������������� ����� ����� " << sum << endl;

	return 0;
}
