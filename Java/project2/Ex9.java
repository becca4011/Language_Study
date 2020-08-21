package project2;

import java.util.Scanner;

public class Ex9 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		double a, b, r, x, y, dis;
		
		System.out.print("원의 중심과 반지름 입력 >> ");
		a = scan.nextDouble();
		b = scan.nextDouble();
		r = scan.nextDouble();
		
		System.out.print("점 입력 >> ");
		x = scan.nextDouble();
		y = scan.nextDouble();
		
		dis = Math.sqrt((x - a) * (x - a) + (y - b) * (y - b));
		
		if (dis < r)
		{
			System.out.println("점 (" + x + ", " + y + ")은 원 안에 있다.");
		}
		else
		{
			System.out.println("점 (" + x + ", " + y + ")은 원 안에 없다.");
		}
		
		scan.close();
	}
}
