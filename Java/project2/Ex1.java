package project2;

import java.util.Scanner;

public class Ex1 
{
	public static void main(String[] args)
	{
		int won;
		double dol;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("��ȭ�� �Է��ϼ��� (���� : ��) >> ");
		won = scan.nextInt();
		
		dol = won / 1100;
		
		System.out.println(won + "���� $" + dol + "�Դϴ�.");

		scan.close();
	}
}
