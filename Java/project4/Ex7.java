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
			System.out.println("없습니다.");
		else
			System.out.println(work + "입니다.");
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
		System.out.print("날짜(1 ~ 30)? ");
		int date = scan.nextInt();
		
		if(date < 1 || date > 30)
		{
			System.out.println("잘못 입력");
			return;
		}
		
		System.out.print("할일(빈칸 없이 입력)? ");
		String work = scan.next();
		
		day[date - 1].set(work);
	}
	
	public void output()
	{
		System.out.print("날짜(1 ~ 30)? ");
		int date = scan.nextInt();
		
		if(date < 1 || date > 30)
		{
			System.out.println("잘못 입력");
			return;
		}
		
		day[date - 1].show();
	}
	
	public void run()
	{
		System.out.println("이번달 스케쥴 관리 프로그램");
		
		while(true)
		{
			System.out.print("할일 (입력 : 1, 보기 : 2, 끝내기 : 3) >> ");
			int menu = scan.nextInt();
			
			if(menu == 3)
			{
				System.out.println("프로그램을 종료합니다.");
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
