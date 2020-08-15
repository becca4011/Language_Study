#include <Windows.h>
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int quiz[SIZE];
	int i, cnt, sum;
	double avg;

	printf("5명의 점수를 순서대로 입력하세요. \n\n");
	
	sum = 0;
	cnt = 0;
	avg = 0;
	for (i = 0; i < SIZE; i++)
	{
		printf("%d번의 퀴즈 점수는? ", i + 1);
		scanf_s("%d", &quiz[i]);
		
		sum += quiz[i];
	}

	avg = (double)sum / SIZE;

	for (i = 0; i < SIZE; i++)
	{
		if (quiz[i] < avg)
		{
			cnt++;
		}
	}

	printf("================================== \n");
	printf("   번호    점수   평균과의 차이    \n");
	printf("================================== \n");
	for (i = 0; i < SIZE; i++)
	{
		printf("   %2d       %2d       %5.1lf \n", i + 1, quiz[i], quiz[i] - avg);
	}
	printf("================================== \n");
	printf("평균 : %.1lf점 \n", avg);
	printf("================================== \n");
	printf("평균 미만 : %d명 \n", cnt);

	system("pause");
	return 0;
}