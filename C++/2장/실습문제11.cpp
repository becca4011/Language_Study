#include <iostream>
using namespace std;

int main()
{
	int k, n = 0;
	int sum = 0;

	cout << "끝 수 입력 >> ";
	cin >> n;

	for (k = 1; k <= n; k++)
	{
		sum += k;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum << endl;
}