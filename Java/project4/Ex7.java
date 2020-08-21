package project4;

import java.util.Scanner;

class Day
{
	private String work;
	
	public void set(String work) { this.work = work; }
	public String get() { return work; }
	public void show()
	{
		if(work == null)
			System.out.println("�����ϴ�.");
		else
			System.out.println(work + "�Դϴ�.");
	}
}

class MonthSchedule
{
	Day day[];
	Scanner scan = new Scanner(System.in);
	
	MonthSchedule(int d)
	{
		day = new Day[d];
		
		for(int i = 0; i < day.length; i++)
			day[i] = new Day();
	}
	
	public void input()
	{
		System.out.print("��¥(1 ~ 30)? ");
		int date = scan.nextInt();
		
		if(date < 1 || date > 30)
		{
			System.out.println("�߸� �Է�");
			return;
		}
		
		System.out.print("����(��ĭ ���� �Է�)? ");
		String work = scan.next();
		
		day[date - 1].set(work);
	}
	
	public void output()
	{
		System.out.print("��¥(1 ~ 30)? ");
		int date = scan.nextInt();
		
		if(date < 1 || date > 30)
		{
			System.out.println("�߸� �Է�");
			return;
		}
		
		day[date - 1].show();
	}
	
	public void run()
	{
		System.out.println("�̹��� ������ ���� ���α׷�");
		
		while(true)
		{
			System.out.print("���� (�Է� : 1, ���� : 2, ������ : 3) >> ");
			int menu = scan.nextInt();
			
			if(menu == 3)
			{
				System.out.println("���α׷��� �����մϴ�.");
				break;
			}
			else if(menu == 1)
			{
				input();
			}
			else if(menu == 2)
			{
				output();
			}
			System.out.println();
		}
	}
}

public class Ex7 
{
	public static void main(String[] args)
	{
		MonthSchedule april = new MonthSchedule(30);
		april.run();
	}
}
