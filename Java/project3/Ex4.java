package project3;

import java.util.Scanner;

public class Ex4 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		String s;
		int i = 0;
		
		System.out.print("소문자 알파벳 하나 입력 >> ");
		s = scan.next();
		
		for (char c = 'a'; c <= s.charAt(0); c++)
		{
			for (char h = c; h <= s.charAt(0); h++)
			{
				System.out.print((char)(h - i));
			}
			System.out.println();
			i++;
		}
		
		scan.close();
	}
}
