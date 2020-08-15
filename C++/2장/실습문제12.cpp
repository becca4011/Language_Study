#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int k, res = 0;

	for (k = a; k <= b; k++)
	{
		res += k;
	}

	return res;
}

int main()
{
	int n = 0;
	int result = 0;

	cout << "끝 수 입력 >> ";
	cin >> n;

	result = sum(1, n);

	cout << "1에서 " << n << "까지의 합은 " << result << endl;
}