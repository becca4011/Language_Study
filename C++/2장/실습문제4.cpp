#include <iostream>
using namespace std;

int main()
{
	double n[5];
	double max = -99999999;

	cout << "5개의 실수 입력 >> ";

	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];

		if (max < n[i])
		{
			max = n[i];
		}
	}

	cout << "제일 큰 수 = " << max << endl;
}