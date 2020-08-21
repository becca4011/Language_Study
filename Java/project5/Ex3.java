package project5;

import java.util.Scanner;

abstract class Converter
{
	// 추상 메소드
	abstract protected double convert(double src);
	abstract protected String getSrcString();
	abstract protected String getDestString();
	
	protected double ratio; // 비율
	
	public void run()
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println(getSrcString() + "을 " + getDestString() + "로 바꿉니다.");
		
		System.out.print(getSrcString() + " 입력 >> ");
		double val = scan.nextDouble();
		
		double res = convert(val);
		System.out.println("변환 결과 : " + res + getDestString() + "입니다.");
		
		scan.close();
	}
}

class WontoDollar extends Converter
{
	public WontoDollar(int m) { ratio = m; }
	
	protected double convert(double src)
	{
		return src / ratio;
	}
	
	protected String getSrcString()
	{
		return "원";
	}
	
	protected String getDestString()
	{
		return "달러";
	}
}

public class Ex3 
{
	public static void main(String[] args)
	{
		WontoDollar toDollar = new WontoDollar(1200);
		toDollar.run();
	}
}
