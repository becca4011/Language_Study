package project2;

import java.util.Scanner;

public class Ex9 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		double a, b, r, x, y, dis;
		
		System.out.print("���� �߽ɰ� ������ �Է� >> ");
		a = scan.nextDouble();
		b = scan.nextDouble();
		r = scan.nextDouble();
		
		System.out.print("�� �Է� >> ");
		x = scan.nextDouble();
		y = scan.nextDouble();
		
		dis = Math.sqrt((x - a) * (x - a) + (y - b) * (y - b));
		
		if (dis < r)
		{
			System.out.println("�� (" + x + ", " + y + ")�� �� �ȿ� �ִ�.");
		}
		else
		{
			System.out.println("�� (" + x + ", " + y + ")�� �� �ȿ� ����.");
		}
		
		scan.close();
	}
}
