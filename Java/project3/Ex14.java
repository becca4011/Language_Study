package project3;

import java.util.Scanner;

public class Ex14 
{
	public static void main(String[] args) 
	{
		String course[] = { "Java", "C++", "HTML5", "��ǻ�ͱ���", "�ȵ���̵�" };
		int score[] = { 95, 88, 76, 62, 55 };
		
		Scanner scan = new Scanner(System.in);
		
		while(true)
		{
			System.out.print("���� �̸� >> ");
			String sub = scan.next();
			
			if(sub.equals("�׸�"))
				break;
			
			for(int i = 0; i < course.length; i++)
			{
				if(sub.equals(course[i]))
				{
					System.out.println(course[i] + "�� ������ " + score[i]);
					break;
				}
				else if(i == course.length - 1)
					System.out.println("���� ����");
			}
		}
		
		scan.close();
	}
}
