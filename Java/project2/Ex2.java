package project2;

import java.util.Scanner;

public class Ex2 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int num;
		
		System.out.print("2자리수 정수 입력 (10 ~ 99) >> ");
		num = scan.nextInt();
		
		if(num / 10 == num % 10)
		{
			System.out.println("Yes! 10의 자리와 1의 자리가 같습니다.");
		}
		else
		{
			System.out.println("No! 10의 자리와 1의 자리가 다릅니다.");
		}
		
		scan.close();
	}
}
