package project3;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Ex15 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		
		while(true)
		{
			System.out.print("곱하고자 하는 두 수 입력 >> ");
			
			try
			{
				int n = scan.nextInt();
				int m = scan.nextInt();
					
				System.out.println(n + " X " + m + " = " + (n * m));
			}
			catch(InputMismatchException e)
			{
				System.out.println("실수 입력 X");
				scan.nextLine();
			}
		}
	}
}
