package project3;

public class Ex10 
{
	public static void main(String[] args)
	{
		int ar[][] = new int[4][4]; // 2���� �迭
		int a[] = new int[10]; // 2���� �迭 �ε��� ([i][j] �� i)
		int b[] = new int[10]; // 2���� �迭 �ε��� ([i][j] �� j)
		a[0] = -1; b[0] = -1;
		
		for(int i = 0; i < 10; i++)
		{
			int a_n = (int)(Math.random() * 4); // �ε��� i ����
			int b_n = (int)(Math.random() * 4); // �ε��� j ����
			int n = (int)(Math.random() * 10 + 1); // 1 ~ 10������ �������� ���� ��
			
			if(ar[a_n][b_n] == 0) // ar[a_n][b_n]�� 0 -> � ���� ���� ���� (�������� ������ ���� �ڸ�)
				ar[a_n][b_n] = n; // n�� �־���
			else
				i--; // �ٽ� �̰� ��
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
