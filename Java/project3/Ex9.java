package project3;

public class Ex9 
{
	public static void main(String[] args)
	{
		int ar[][] = new int[4][4];
		
		for(int i = 0; i < ar.length; i++)
		{
			for(int j = 0; j < ar[i].length; j++)
			{
				ar[i][j] = (int)(Math.random() * 10 + 1);
				
				System.out.print(ar[i][j] + " ");
			}
			System.out.println();
		}
	}
}
