package project3;

public class Ex10 
{
	public static void main(String[] args)
	{
		int ar[][] = new int[4][4]; // 2차원 배열
		int a[] = new int[10]; // 2차원 배열 인덱스 ([i][j] 중 i)
		int b[] = new int[10]; // 2차원 배열 인덱스 ([i][j] 중 j)
		a[0] = -1; b[0] = -1;
		
		for(int i = 0; i < 10; i++)
		{
			int a_n = (int)(Math.random() * 4); // 인덱스 i 랜덤
			int b_n = (int)(Math.random() * 4); // 인덱스 j 랜덤
			int n = (int)(Math.random() * 10 + 1); // 1 ~ 10까지의 랜덤으로 뽑은 수
			
			if(ar[a_n][b_n] == 0) // ar[a_n][b_n]가 0 -> 어떤 수가 들어가지 않음 (랜덤으로 뽑히지 않은 자리)
				ar[a_n][b_n] = n; // n을 넣어줌
			else
				i--; // 다시 뽑게 함
		}
		
		for(int i = 0; i < ar.length; i++)
		{
			for(int j = 0; j < ar[i].length; j++)
			{
				System.out.print(ar[i][j] + " ");
			}
			System.out.println();
		}
	}
}
