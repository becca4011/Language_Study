#include <Windows.h>
#include <stdio.h>
//#define DATE(Y, M, D) YMD
//#define DATE(Y, M, D) Y M D
#define DATE(Y, M, D) Y ## M ## D

int main(void)
{
	printf("생년월일 : %d \n", DATE(11, 06, 10));
	printf("생년월일 : %d \n", DATE(10, 11, 25));

	system("pause");
	return 0;
}