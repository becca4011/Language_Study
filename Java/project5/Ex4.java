package project5;

import java.util.Scanner;

abstract class Converter2
{
	// �߻� �޼ҵ�
	abstract protected double convert(double src);
	abstract protected String getSrcString();
	abstract protected String getDestString();
	
	protected double ratio; // ����
	
	public void run()
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println(getSrcString() + "�� " + getDestString() + "�� �ٲߴϴ�.");
		
		System.out.print(getSrcString() + " �Է� >> ");
		double val = scan.nextDouble();
		
		double res = convert(val);
		System.out.println("��ȯ ��� : " + res + getDestString() + "�Դϴ�.");
		
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
