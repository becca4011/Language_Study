package project2;

import java.util.Scanner;

public class Ex5 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a, b, c;
		
		System.out.print("���� 3�� �Է� >> ");
		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();
		
		if(a > b)
		{
			if (a > c)
			{
				if (b + c > a)
					System.out.println("�ﰢ�� ����");
				else
					System.out.println("�ﰢ�� �Ұ���");
			}
			else if (a < c)
			{
				if (a + b > c)
					System.out.println("�ﰢ�� ����");
				else
					System.out.println("�ﰢ�� �Ұ���");
			}
		}
		else if (a < b)
		{
			if (b > c)
			{
				if (a + c > b)
					System.out.println("�ﰢ�� ����");
				else
					System.out.println("�ﰢ�� �Ұ���");
			}
			else if (b < c)
			{
				if (a + b > c)
					System.out.println("�ﰢ�� ����");
				else
					System.out.println("�ﰢ�� �Ұ���");
			}
		}
		
		scan.close();
	}
}
