package project2;

import java.util.Scanner;

public class Ex7 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int x, y;
		
		System.out.print("�� (x, y)�� ��ǥ �Է� >> ");
		x = scan.nextInt();
		y = scan.nextInt();
		
		if (x > 100 && x < 200 && y > 100 && y < 200)
		{
			System.out.println("(" + x + ", " + y + ")�� �簢�� �ȿ� �ֽ��ϴ�.");
		}
		else
		{
			System.out.println("(" + x + ", " + y + ")�� �簢�� �ȿ� �����ϴ�.");
		}
		
		scan.close();
	}
}
