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
			
			if(str.equals("�׸�"))
			{
				System.out.println("�����մϴ�...");
				break;
			}
			/*
			StringTokenizer st = new StringTokenizer(str, " ");
			System.out.println("���� ������ " + st.countTokens());
			*/
			
			String[] words = str.split(" ");
			System.out.println("���� ������ " + words.length);
		}
		
		sc.close();
	}
}
