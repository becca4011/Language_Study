package project2;

import java.util.Scanner;

public class Ex8 
{
	public static boolean inRect(int x, int y, int rectx1, int recty1, int rectx2, int recty2)
	{
		if ((x >= rectx1 && x <= rectx2) && (y >= recty1 && y <= recty2))
		{
			return true;
		}
		else
			return false;
	}
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int x1, y1, x2, y2;
		boolean a, b;
		
		System.out.print("x1, y1 입력 >> ");
		x1 = scan.nextInt();
		y1 = scan.nextInt();
		
		System.out.print("x2, y2 입력 >> ");
		x2 = scan.nextInt();
		y2 = scan.nextInt();
		
		a = inRect(x1, y1, 100, 100, 200, 200);
		b = inRect(x2, y2, 100, 100, 200, 200);
		
		if(a == true || b == true)
			System.out.println("충돌");
		else
			System.out.println("충돌 X");
		
		scan.close();
	}
}
