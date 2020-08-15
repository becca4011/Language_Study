#include <iostream>
using namespace std;

class ArrayUtillity
{
public:
	static int *concat(int s1[], int s2[], int size);
	static int *remove(int s1[], int s2[], int size, int &retSize);
};

int* ArrayUtillity::concat(int s1[], int s2[], int size)
{
	int *p = new int[size];

	for (int i = 0; i < 5; i++)
		p[i] = s1[i];

	for (int j = 0; j < 5; j++)
		p[j + 5] = s2[j];

	return p;
}

int* ArrayUtillity::remove(int s1[], int s2[], int size, int &retSize)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (s1[i] == s2[j])
				s1[i] = NULL;
		}
		if (s1[i] != NULL)
			retSize++;
	}

	int *p = new int[retSize];
	int n = 0;

	for (int i = 0; i < size; i++)
	{
		if (s1[i] != NULL)
		{
			p[n] = s1[i];
			n++;
		}
	}

	return p;
}

int main()
{
	int x[5], y[5];
	int retSize = 0;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다>> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	cout << "정수를 5개 입력하라. 배열 y에 삽입한다>> ";
	for (int i = 0; i < 5; i++)
		cin >> y[i];

	int *sum = ArrayUtillity::concat(x, y, 10);

	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; i++)
		cout << sum[i] << ' ';

	int *min = ArrayUtillity::remove(x, y, 5, retSize);

	cout << endl << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++)
		cout << min[i] << ' ';

	cout << endl;
}