package project4;

import java.util.Scanner;

class PhoneBook
{
	private String name, tel;
	
	PhoneBook(String n, String t)
	{
		name = n;
		tel = t;
	}
	
	public String getName() { return name; }
	public String getTel() { return tel; }
}

public class Ex8 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.print("�ο��� >> ");
		int n = scan.nextInt();
		
		PhoneBook pb[] = new PhoneBook[n];
		
		for(int i = 0; i < n; i++)
		{
			System.out.print("�̸��� ��ȭ��ȣ(�̸��� ��ȣ�� �� ĭ ���� �Է�) >> ");
			String name = scan.next();
			String tel = scan.next();
			
			pb[i] = new PhoneBook(name, tel);
		}
		System.out.println("����Ǿ����ϴ�...");
		
		while(true)
		{
			System.out.print("�˻��� �̸� >> ");
			String name = scan.next();
			
			if(name.equals("�׸�"))
				break;
			
			for(int i = 0; i < n; i++)
			{
				if(name.equals(pb[i].getName()))
				{
					System.out.println(name + "�� ��ȣ�� " + pb[i].getTel());
					break;
				}
				else if(i == n - 1)
					System.out.println(name + "�� �����ϴ�");
			}
		}
		
		scan.close();
	}
}
