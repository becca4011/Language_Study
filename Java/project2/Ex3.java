package project2;

import java.util.Scanner;

public class Ex3 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int money;
		
		System.out.print("�ݾ��� �Է��ϼ��� >> ");
		money = scan.nextInt();
		
		if(money / 50000 > 0)
		{
			System.out.println("50000�� " + money / 50000);
			money -= 50000 * (money / 50000);
		}
		
		if(money / 10000 > 0)
		{
			System.out.println("10000�� " + money / 10000);
			money -= 10000 * (money / 10000);
		}
		
		if(money / 1000 > 0)
		{
			System.out.println("1000��\t" + money / 1000);
			money -= 1000 * (money / 1000);
		}
		
		if(money / 500 > 0)
		{
			System.out.println("500��\t" + money / 500);
			money -= 500 * (money / 500);
		}
		
		if(money / 100 > 0)
		{
			System.out.println("100��\t" + money / 100);
			money -= 100 * (money / 100);
		}
		
		if(money / 50 > 0)
		{
			System.out.println("50��\t" + money / 50);
			money -= 50 * (money / 50);
		}
		
		if(money / 10 > 0)
		{
			System.out.println("10��\t" + money / 10);
			money -= 10 * (money / 10);
		}
		
		if(money / 1 > 0)
		{
			System.out.println("1��\t" + money / 1);
			money -= money / 1;
		}
		
		scan.close();
	}
}
