package project2;

import java.util.Scanner;

public class Ex4 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a, b, c;
		
		System.out.print("���� 3�� �Է� >> ");
		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();
		
		System.out.print("�߰� ���� ");
		
		if (a > b)
		{
			if (b > c)
				System.out.println(b);
			else if (b < c)
			{
				if (c > a)
					System.out.println(a);
				else if (c < a)
					System.out.println(c);
			}
		}
		else if (a < b)
		{
			if (b < c)
				System.out.println(b);
			else if (b > c)
			{
				if (a > c)
					System.out.println(a);
				else if (a < c)
					System.out.println(c);
			}
		}
		
		scan.close();
	}
}
