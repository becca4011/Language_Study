#include <Windows.h>
#include <stdio.h>
#define M 2
#define N 3

int main(void)
{
	int A[M][N], B[M][N], C[M][N];
	int i, j;
	
	printf("행렬 A 입력 \n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d행 %d열? ", i + 1, j + 1);
			scanf_s("%d", &A[i][j]);
		}
	}

	printf("\n행렬 B 입력 \n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d행 %d열? ", i + 1, j + 1);
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

	printf("\n행렬 A \n");
	for (i = 0; i < M; i++)
	{
		printf("[ ");
		for (j = 0; j < N; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("] \n");
	}

	printf("\n행렬 B \n");
	for (i = 0; i < M; i++)
	{
		printf("[ ");
		for (j = 0; j < N; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("] \n");
	}

	printf("\n행렬 C = A + B \n");
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