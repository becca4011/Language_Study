package project2;

import java.util.Scanner;

public class Ex2 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int num;
		
		System.out.print("2�ڸ��� ���� �Է� (10 ~ 99) >> ");
		num = scan.nextInt();
		
		if(num / 10 == num % 10)
		{
			System.out.println("Yes! 10�� �ڸ��� 1�� �ڸ��� �����ϴ�.");
		}
		else
		{
			System.out.println("No! 10�� �ڸ��� 1�� �ڸ��� �ٸ��ϴ�.");
		}
		
		scan.close();
	}
}
