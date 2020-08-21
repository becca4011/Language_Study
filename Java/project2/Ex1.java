package project2;

import java.util.Scanner;

public class Ex1 
{
	public static void main(String[] args)
	{
		int won;
		double dol;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("원화를 입력하세요 (단위 : 원) >> ");
		won = scan.nextInt();
		
		dol = won / 1100;
		
		System.out.println(won + "원은 $" + dol + "입니다.");

		scan.close();
	}
}
