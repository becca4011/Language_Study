package project2;

import java.util.Scanner;

public class Ex12 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a, b;
		String c;
		
		System.out.print("���� >> ");
		a = scan.nextInt();
		c = scan.next();
		b = scan.nextInt();
		
		/*
		if (c.equals("+"))
		{
			System.out.println(a + " + " + b + "�� ��� ��� : " + (a + b));
		}
		else if (c.equals("-"))
		{
			System.out.println(a + " - " + b + "�� ��� ��� : " + (a - b));
		}
		else if (c.equals("*"))
		{
			System.out.println(a + " * " + b + "�� ��� ��� : " + (a * b));
		}
		else if (c.equals("/"))
		{
			if (a == 0 || b == 0)
				System.out.println("0���� ���� �� �����ϴ�.");
			else
				System.out.println(a + " / " + b + "�� ��� ��� : " + (a / b));
		}
		else
			System.out.println("���� ����");
		*/
		
		switch(c)
		{
		case "+":
			System.out.println(a + " + " + b + "�� ��� ��� : " + (a + b));
			break;
		
		case "-":
			System.out.println(a + " - " + b + "�� ��� ��� : " + (a - b));
			break;
			
		case "*":
			System.out.println(a + " * " + b + "�� ��� ��� : " + (a * b));
			break;
			
		case "/":
			if (a == 0 || b == 0)
				System.out.println("0���� ���� �� �����ϴ�.");
			else
				System.out.println(a + " / " + b + "�� ��� ��� : " + (a / b));
			
			break;
			
		default:
			System.out.println("���� ����");
			break;
		}
		
		scan.close();
	}
}
