package project6;

import java.util.*;

public class Ex7 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		while(true)
		{
			System.out.print(">> ");
			String str = sc.nextLine();
			
			if(str.equals("그만"))
			{
				System.out.println("종료합니다...");
				break;
			}
			/*
			StringTokenizer st = new StringTokenizer(str, " ");
			System.out.println("어절 개수는 " + st.countTokens());
			*/
			
			String[] words = str.split(" ");
			System.out.println("어절 개수는 " + words.length);
		}
		
		sc.close();
	}
}
