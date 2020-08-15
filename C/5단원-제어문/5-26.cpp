#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define PI 3.141592

int main(void)
{
	int answer, r;
	double circum, area, volume;

	do 
	{
		printf("=================================\n");
		printf("== 1. 원의 둘레 구하기         ==\n");
		printf("== 2. 원의 넓이 구하기         ==\n");
		printf("== 3. 구의 부피 구하기         ==\n");
		printf("== 4. 그만두기                 ==\n");
		printf("=================================\n");
		printf("◈ 원하는 내용은? ");
		scanf_s("%d", &answer);

		if (answer == 1 || answer == 2 || answer == 3)
		{
			printf("\n>> 반지름은? ");
			scanf_s("%d", &r);
			printf("반지름이 %d인 ", r);
		}

		switch (answer)
		{
			case 1: circum = 2 * PI * r;
				printf("원의 둘레는 %6.2lf \n", circum);
				break;
			case 2: area = PI * r * r;
				printf("원의 넓이는 %6.2lf \n", area);
				break;
			case 3: volume = 4. / 3 * PI * r * r*r;
				printf("구의 부피는 %6.2lf \n", volume);
				break;
			case 4:
				printf("프로그램을 끝냅니다. \n"); exit(0);
		}
		printf("\n>> 결과를 확인했으면 아무키나 누르세요.");
		_getch();
		system("cls");
	} while (answer != 4);

	system("pause");
	return 0;
}