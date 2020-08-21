package project5;

import java.util.Scanner;

abstract class Calc
{
	protected int a, b;
	
	public void setValue(int a, int b)
	{
		this.a = a;
		this.b = b;
	}
	
	abstract int calculate();
}

class Add extends Calc
{
	@Override
	public int calculate()
	{
		return a + b;
	}
}

class Sub extends Calc
{
	@Override
	public int calculate()
	{
		return a - b;
	}
}

class Mul extends Calc
{
	@Override
	public int calculate()
	{
		return a * b;
	}
}

class Div extends Calc
{
	@Override
	public int calculate()
	{
		return a / b;
	}
}

public class Ex11 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.print("두 정수와 연산자 입력 >> ");
		int a = scan.nextInt();
		int b = scan.nextInt();
		String c = scan.next();
		
		if(c.equals("+"))
		{
			Add add = new Add();
			add.setValue(a, b);
			System.out.println(add.calculate());
		}
		else if(c.equals("-"))
		{
			Sub sub = new Sub();
			sub.setValue(a, b);
			System.out.println(sub.calculate());
		}
		else if(c.equals("*"))
		{
			Mul mul = new Mul();
			mul.setValue(a, b);
			System.out.println(mul.calculate());
		}
		else if(c.equals("/"))
		{
			Div div = new Div();
			div.setValue(a, b);
			System.out.println(div.calculate());
		}
		else
		{
			System.out.println("없는 기호");
		}
		
		scan.close();
	}
}
