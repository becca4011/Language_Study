#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int score, sum, pass, fail;
	double avg;

	sum = 0;
	pass = 0;
	fail = 0;

	for (int i = 1; i <= 10; i++)
	{
		printf("%d���� ���� ������? ", i);
		scanf_s("%d", &score);
		
		sum += score;

		if (score >= 70)
		{
			pass++;
		}
		else
		{
			fail++;
		}
	}

	avg = (double)sum / 10;

	printf("=======================\n");
	printf("��� : %.2lf�� \n", avg);
	printf("����� : %d�� \n", pass);
	printf("Ż���� : %d�� \n", fail);

	system("pause");
	return 0;
}