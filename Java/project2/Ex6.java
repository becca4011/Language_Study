package project2;

import java.util.Scanner;

public class Ex6 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int num, t, o;
		
		System.out.print("1 ~ 99 ������ ���� �Է� >> ");
		num = scan.nextInt();
		
		if (num >= 10)
		{
			t = num / 10;
			o = num % 10;
			
			if (t == 3 || t == 6 || t == 9 && o == 3 || o == 6 || o == 9)
				System.out.println("¦¦");
			else if (t == 3 || t == 6 || t == 9 || o == 3 || o == 6 || o == 9)
				System.out.println("¦");
		}
		else
		{
			if (num == 3 || num == 6 || num == 9)
				System.out.println("¦");
		}
		
		scan.close();
	}
}
