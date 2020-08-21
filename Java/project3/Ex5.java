package project3;

import java.util.Scanner;

public class Ex5 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		int arr[] = new int[10];
		
		System.out.print("양의 정수 10개 입력 >> ");
		
		for(int i = 0; i < 10; i++)
			arr[i] = scan.nextInt();
		
		System.out.print("3의 배수는 ");
		
		for(int i = 0; i < 10; i++)
		{
			if (arr[i] % 3 == 0)
				System.out.print(arr[i] + " ");
		}
		
		scan.close();
	}
}
