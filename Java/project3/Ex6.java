package project3;

import java.util.Scanner;

public class Ex6 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		int money;
		int [] unit = {50000, 10000, 1000, 500, 100, 50, 10, 1};
		
		System.out.print("�ݾ� �Է� >> ");
		money = scan.nextInt();
		
		for(int i = 0; i < unit.length; i++)
		{
			if (money / unit[i] > 0)
				System.out.println(unit[i] + "�� : " + money / unit[i] + "��");
			
			money -= unit[i] * (money / unit[i]);
		}
		
		scan.close();
	}
}
