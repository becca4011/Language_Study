package project2;

import java.util.Scanner;

public class Ex7 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int x, y;
		
		System.out.print("점 (x, y)의 좌표 입력 >> ");
		x = scan.nextInt();
		y = scan.nextInt();
		
		if (x > 100 && x < 200 && y > 100 && y < 200)
		{
			System.out.println("(" + x + ", " + y + ")는 사각형 안에 있습니다.");
		}
		else
		{
			System.out.println("(" + x + ", " + y + ")는 사각형 안에 없습니다.");
		}
		
		scan.close();
	}
}
