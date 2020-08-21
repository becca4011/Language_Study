package project6;

import java.util.Scanner;

public class Ex9 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		while(true)
		{
			System.out.print("철수 [가위(1), 바위(2), 보(3), 끝내기(4)] >> ");
			int user = sc.nextInt();
			
			int com = (int)(Math.random() * 3 + 1);
			
			if(user == 4)
			{
				break;
			}
			else if(user == 1)
			{
				System.out.print("철수(가위) : ");
				
				if(com == 1)
				{
					System.out.println("컴퓨터(가위)");
					System.out.println("비겼습니다.");
				}
				else if(com == 2)
				{
					System.out.println("컴퓨터(바위)");
					System.out.println("컴퓨터가 이겼습니다.");
				}
				else if(com == 3)
				{
					System.out.println("컴퓨터(보)");
					System.out.println("철수가 이겼습니다.");
				}
			}
			else if(user == 2)
			{
				System.out.print("철수(바위) : ");
				
				if(com == 1)
				{
					System.out.println("컴퓨터(가위)");
					System.out.println("철수가 이겼습니다.");
				}
				else if(com == 2)
				{
					System.out.println("컴퓨터(바위)");
					System.out.println("비겼습니다.");
				}
				else if(com == 3)
				{
					System.out.println("컴퓨터(보)");
					System.out.println("컴퓨터가 이겼습니다.");
				}
			}
			else if(user == 3)
			{
				System.out.print("철수(보) : ");
				
				if(com == 1)
				{
					System.out.println("컴퓨터(가위)");
					System.out.println("컴퓨터가 이겼습니다.");
				}
				else if(com == 2)
				{
					System.out.println("컴퓨터(바위)");
					System.out.println("철수가 이겼습니다.");
				}
				else if(com == 3)
				{
					System.out.println("컴퓨터(보)");
					System.out.println("비겼습니다.");
				}
			}
		}
		
		sc.close();
	}
}
