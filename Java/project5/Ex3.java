package project5;

import java.util.Scanner;

abstract class Converter
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

class WontoDollar extends Converter
{
	public WontoDollar(int m) { ratio = m; }
	
	protected double convert(double src)
	{
		return src / ratio;
	}
	
	protected String getSrcString()
	{
		return "��";
	}
	
	protected String getDestString()
	{
		return "�޷�";
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
