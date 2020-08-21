package project5;

import java.util.Scanner;

abstract class Converter2
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

class KmtoMile extends Converter2
{
	public KmtoMile(double km) { ratio = km; }
	
	protected double convert(double src)
	{
		return src / ratio;
	}
	
	protected String getSrcString()
	{
		return "km";
	}
	
	protected String getDestString()
	{
		return "mile";
	}
}

public class Ex4 
{
	public static void main(String[] args) 
	{
		KmtoMile toMile = new KmtoMile(1.6);
		toMile.run();
	}
}
