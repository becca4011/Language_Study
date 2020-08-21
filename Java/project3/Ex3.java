package project3;

import java.util.Scanner;

public class Ex3 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		int n;
		
		System.out.print("정수 입력 >> ");
		n = scan.nextInt();
		
		for(int i = 0; i < n; i++)
		{
			for(int j = i; j < n; j++)
			{
				System.out.print("*");
			}
			System.out.println();
		}
		
		scan.close();
	}
}
