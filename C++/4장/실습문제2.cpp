#include <iostream>
using namespace std;

int main()
{
	int *arr = new int[5];
	int sum = 0;
	double avg = 0;

	cout << "정수 5개 입력 >> ";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	avg = sum / 5.0;

	cout << "평균 " << avg << endl;

	delete[] arr;
}