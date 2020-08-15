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
		printf("%d번의 퀴즈 점수는? ", i);
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
	printf("평균 : %.2lf점 \n", avg);
	printf("통과자 : %d명 \n", pass);
	printf("탈락자 : %d명 \n", fail);

	system("pause");
	return 0;
}