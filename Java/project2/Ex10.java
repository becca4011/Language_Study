package project2;

import java.util.Scanner;

public class Ex10 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a1, b1, r1, a2, b2, r2;
		
		System.out.print("ù ��° ���� �߽ɰ� ������ �Է� >> ");
		a1 = scan.nextInt();
		b1 = scan.nextInt();
		r1 = scan.nextInt();
		
		System.out.print("�� ��° ���� �߽ɰ� ������ �Է� >> ");
		a2 = scan.nextInt();
		b2 = scan.nextInt();
		r2 = scan.nextInt();
		
		if (Math.sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2)) < r1 + r2)
			System.out.println("�� ���� ���� ��ħ");
		else
			System.out.println("�� ���� ��ġ�� ����");
		
		scan.close();
	}
}
