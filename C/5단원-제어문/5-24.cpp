#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int n, odd, even, odd_sum = 0, even_sum = 0;

	printf("���� n�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &n);

	odd = 1; even = 2;
	while (odd <= n && even <= n)
	{
		odd_sum += odd;
		even_sum += even;
		odd += 2;
		even += 2;
	}
	printf("���� 1���� %d ���� Ȧ������ ���� %d�̰�, ¦������ ���� %d�Դϴ�. \n", n, odd_sum, even_sum);

	system("pause");
	return 0;
}