package project2;

import java.util.Scanner;

public class Ex5 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a, b, c;
		
		System.out.print("정수 3개 입력 >> ");
		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();
		
		if(a > b)
		{
			if (a > c)
			{
				if (b + c > a)
					System.out.println("삼각형 가능");
				else
					System.out.println("삼각형 불가능");
			}
			else if (a < c)
			{
				if (a + b > c)
					System.out.println("삼각형 가능");
				else
					System.out.println("삼각형 불가능");
			}
		}
		else if (a < b)
		{
			if (b > c)
			{
				if (a + c > b)
					System.out.println("삼각형 가능");
				else
					System.out.println("삼각형 불가능");
			}
			else if (b < c)
			{
				if (a + b > c)
					System.out.println("삼각형 가능");
				else
					System.out.println("삼각형 불가능");
			}
		}
		
		scan.close();
	}
}
