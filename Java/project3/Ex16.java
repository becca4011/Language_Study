package project3;

import java.util.Scanner;

public class Ex16 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		String com[] = { "가위", "바위", "보" };
		
		System.out.println("***** 컴퓨터와 가위바위보 *****");
		
		while(true)
		{
			System.out.print("가위, 바위, 보 >> ");
			String user = scan.next();
			
			if(user.equals("그만"))
			{
				System.out.println("게임을 종료합니다.");
				break;
			}
			
			int n = (int)(Math.random() * 3);
			
			System.out.print("사용자 : " + user + " / 컴퓨터 : " + com[n] + " -> ");
			if(user.equals("가위"))
			{
				if(n == 0)
					System.out.println("비겼습니다.");
				else if(n == 1)
					System.out.println("컴퓨터가 이겼습니다.");
				else if(n == 2)
					System.out.println("사용자가 이겼습니다.");
			}
			else if(user.equals("바위"))
			{
				if(n == 0)
					System.out.println("사용자가 이겼습니다.");
				else if(n == 1)
					System.out.println("비겼습니다.");
				else if(n == 2)
					System.out.println("컴퓨터가 이겼습니다.");
			}
			else if(user.equals("보"))
			{
				if(n == 0)
					System.out.println("컴퓨터가 이겼습니다.");
				else if(n == 1)
					System.out.println("사용자가 이겼습니다.");
				else if(n == 2)
					System.out.println("비겼습니다.");
			}
		}
	}
}
