#include <iostream>
using namespace std;

int main()
{
	double n[5];
	double max = -99999999;

	cout << "5���� �Ǽ� �Է� >> ";

	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];

		if (max < n[i])
		{
			max = n[i];
		}
	}

	cout << "���� ū �� = " << max << endl;
}