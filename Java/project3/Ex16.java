package project3;

import java.util.Scanner;

public class Ex16 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		String com[] = { "����", "����", "��" };
		
		System.out.println("***** ��ǻ�Ϳ� ���������� *****");
		
		while(true)
		{
			System.out.print("����, ����, �� >> ");
			String user = scan.next();
			
			if(user.equals("�׸�"))
			{
				System.out.println("������ �����մϴ�.");
				break;
			}
			
			int n = (int)(Math.random() * 3);
			
			System.out.print("����� : " + user + " / ��ǻ�� : " + com[n] + " -> ");
			if(user.equals("����"))
			{
				if(n == 0)
					System.out.println("�����ϴ�.");
				else if(n == 1)
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
				else if(n == 2)
					System.out.println("����ڰ� �̰���ϴ�.");
			}
			else if(user.equals("����"))
			{
				if(n == 0)
					System.out.println("����ڰ� �̰���ϴ�.");
				else if(n == 1)
					System.out.println("�����ϴ�.");
				else if(n == 2)
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
			}
			else if(user.equals("��"))
			{
				if(n == 0)
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
				else if(n == 1)
					System.out.println("����ڰ� �̰���ϴ�.");
				else if(n == 2)
					System.out.println("�����ϴ�.");
			}
		}
	}
}
