#include <Windows.h>
#include <stdio.h>

int main(void)
{
	int kor, music, art;
	double avg;

	printf("국어 음악 미술 점수는? ");
	scanf_s("%d %d %d", &kor, &music, &art);

	printf("====================================\n");
	printf("국어 \t음악 \t미술 \t평균 \t결과\n");
	printf("------------------------------------\n");

	avg = (double)(kor + music + art) / 3.0;
	printf("%3d \t%3d \t%3d \t%4.1lf ", kor, music, art, avg);

	if (avg >= 70)
	{
		printf("\t통과 \n");
	}
	else
	{
		printf("\t탈락 \n");
	}
	printf("====================================\n");

	system("pause");
	return 0;
}