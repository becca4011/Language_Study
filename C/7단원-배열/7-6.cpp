#include <Windows.h>
#include <stdio.h>
#define M 2
#define N 3

int main(void)
{
	int A[M][N], B[M][N], C[M][N];
	int i, j;
	
	printf("��� A �Է� \n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d�� %d��? ", i + 1, j + 1);
			scanf_s("%d", &A[i][j]);
		}
	}

	printf("\n��� B �Է� \n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d�� %d��? ", i + 1, j + 1);
			scanf_s("%d", &B[i][j]);
		}
	}

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("\n��� A \n");
	for (i = 0; i < M; i++)
	{
		printf("[ ");
		for (j = 0; j < N; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("] \n");
	}

	printf("\n��� B \n");
	for (i = 0; i < M; i++)
	{
		printf("[ ");
		for (j = 0; j < N; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("] \n");
	}

	printf("\n��� C = A + B \n");
	for (i = 0; i < M; i++)
	{
		printf("[ ");
		for (j = 0; j < N; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("] \n");
	}
	

	system("pause");
	return 0;
}