#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n = 1, result = 0;

	while (1)
	{
		result += n;

		if (result >= 1000)
		{
			break;
		}

		n++;
	}
	printf("1���� %d������ ���� %d�Դϴ�. \n", n - 1, result - n);

	system("pause");
	return 0;
}