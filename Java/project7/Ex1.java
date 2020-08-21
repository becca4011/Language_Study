package project7;

import java.util.*;

public class Ex1 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		Vector<Integer> v = new Vector<Integer>();
		
		System.out.print("정수 (-1이 입력될 때까지) >> ");
		while(true)
		{
			int n = sc.nextInt();
			
			if(n == -1)
				break;
			
			v.add(n);
		}
		
		if(v.size() == 0)
		{
			System.out.println("수가 하나도 없음");
			sc.close();
			return;
		}
		
		int big = v.get(0);
		for(int i = 1; i < v.size(); i++)
		{
			if(big < v.get(i))
				big = v.get(i);
		}
		
		System.out.println("가장 큰 수는 " + big);
		sc.close();
	}
}
