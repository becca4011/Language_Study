package project3;

import java.util.Scanner;

public class Ex8 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n;
		
		System.out.print("정수 몇개? ");
		n = scan.nextInt();
		int ar[] = new int[n];
		
		for(int i = 0; i < n; i++)
		{
			int cnt = 0;
			ar[i] = (int)(Math.random() * 100 + 1);
			
			for(int j = 0; j < i; j++)
			{
				if(ar[i] == ar[j])
					cnt = 1;
			}
			
			if(cnt == 1)
				i--;
		}
		
		for(int i = 0; i < n; i++)
		{
			if(i % 10 == 0 && i != 0)
				System.out.println();
			
			System.out.print(ar[i] + " ");
		}
		
		scan.close();
	}
}
