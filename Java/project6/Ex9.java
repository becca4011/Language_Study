package project6;

import java.util.Scanner;

public class Ex9 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		while(true)
		{
			System.out.print("ö�� [����(1), ����(2), ��(3), ������(4)] >> ");
			int user = sc.nextInt();
			
			int com = (int)(Math.random() * 3 + 1);
			
			if(user == 4)
			{
				break;
			}
			else if(user == 1)
			{
				System.out.print("ö��(����) : ");
				
				if(com == 1)
				{
					System.out.println("��ǻ��(����)");
					System.out.println("�����ϴ�.");
				}
				else if(com == 2)
				{
					System.out.println("��ǻ��(����)");
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
				}
				else if(com == 3)
				{
					System.out.println("��ǻ��(��)");
					System.out.println("ö���� �̰���ϴ�.");
				}
			}
			else if(user == 2)
			{
				System.out.print("ö��(����) : ");
				
				if(com == 1)
				{
					System.out.println("��ǻ��(����)");
					System.out.println("ö���� �̰���ϴ�.");
				}
				else if(com == 2)
				{
					System.out.println("��ǻ��(����)");
					System.out.println("�����ϴ�.");
				}
				else if(com == 3)
				{
					System.out.println("��ǻ��(��)");
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
				}
			}
			else if(user == 3)
			{
				System.out.print("ö��(��) : ");
				
				if(com == 1)
				{
					System.out.println("��ǻ��(����)");
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
				}
				else if(com == 2)
				{
					System.out.println("��ǻ��(����)");
					System.out.println("ö���� �̰���ϴ�.");
				}
				else if(com == 3)
				{
					System.out.println("��ǻ��(��)");
					System.out.println("�����ϴ�.");
				}
			}
		}
		
		sc.close();
	}
}
