package project2;

import java.util.Scanner;

public class Ex12 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a, b;
		String c;
		
		System.out.print("연산 >> ");
		a = scan.nextInt();
		c = scan.next();
		b = scan.nextInt();
		
		/*
		if (c.equals("+"))
		{
			System.out.println(a + " + " + b + "의 계산 결과 : " + (a + b));
		}
		else if (c.equals("-"))
		{
			System.out.println(a + " - " + b + "의 계산 결과 : " + (a - b));
		}
		else if (c.equals("*"))
		{
			System.out.println(a + " * " + b + "의 계산 결과 : " + (a * b));
		}
		else if (c.equals("/"))
		{
			if (a == 0 || b == 0)
				System.out.println("0으로 나눌 수 없습니다.");
			else
				System.out.println(a + " / " + b + "의 계산 결과 : " + (a / b));
		}
		else
			System.out.println("없는 연산");
		*/
		
		switch(c)
		{
		case "+":
			System.out.println(a + " + " + b + "의 계산 결과 : " + (a + b));
			break;
		
		case "-":
			System.out.println(a + " - " + b + "의 계산 결과 : " + (a - b));
			break;
			
		case "*":
			System.out.println(a + " * " + b + "의 계산 결과 : " + (a * b));
			break;
			
		case "/":
			if (a == 0 || b == 0)
				System.out.println("0으로 나눌 수 없습니다.");
			else
				System.out.println(a + " / " + b + "의 계산 결과 : " + (a / b));
			
			break;
			
		default:
			System.out.println("없는 연산");
			break;
		}
		
		scan.close();
	}
}
