package project4;

import java.util.Scanner;

class Add
{
	private int a, b;
	
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	
	int calculate()
	{
		return a + b;
	}
}

class Sub
{
private int a, b;
	
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	
	int calculate()
	{
		return a - b;
	}
}

class Mul
{
private int a, b;
	
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	
	int calculate()
	{
		return a * b;
	}
}

class Div
{
private int a, b;
	
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	
	int calculate()
	{
		return a / b;
	}
}

public class Ex11 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		
		Add add = new Add();
		Sub sub = new Sub();
		Mul mul = new Mul();
		Div div = new Div();
		int result = 0;
		
		System.out.print("두 정수와 연산자 입력 >> ");
		int a = scan.nextInt();
		int b = scan.nextInt();
		String s = scan.next();
		
		if(s.equals("+"))
		{
			add.setValue(a, b);
			result = add.calculate();
		}
		else if(s.equals("-"))
		{
			sub.setValue(a, b);
			result = sub.calculate();
		}
		else if(s.equals("*"))
		{
			mul.setValue(a, b);
			result = mul.calculate();
		}
		else if(s.equals("/"))
		{
			div.setValue(a, b);
			result = div.calculate();
		}
		System.out.println(result);
		
		scan.close();
	}
}
