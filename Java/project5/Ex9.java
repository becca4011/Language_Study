package project5;

import java.util.Scanner;

interface Stack
{
	int length(); // 현재 스택에 저장된 개수 리턴
	int compacity(); // 스택의 전체 저장 가능한 개수 리턴
	String pop(); // 스택의 톱(top)에 실수 저장
	boolean push(String val); // 스택의 톱(top)에 저장된 실수 리턴
}

class StringStack implements Stack
{
	private String ar[];
	private int top, t;
	
	public StringStack(int size)
	{
		ar = new String[size];
		top = 0;
	}
	
	@Override
	public int length()
	{
		return top;
	}
	
	@Override
	public int compacity()
	{
		return ar.length;
	}
	
	@Override
	public String pop()
	{
		t -= 1;
		return ar[t];
	}
	
	@Override
	public boolean push(String val)
	{
		if(top == ar.length)
		{
			return false;
		}
		else
		{
			ar[top] = val;
			top += 1;
			t += 1;
			return true;
		}
	}
}

public class Ex9 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		StringStack s;
		
		System.out.print("총 스택 저장 공간의 크기 입력 >> ");
		int size = scan.nextInt();
		s = new StringStack(size);
		
		while(true)
		{
			System.out.print("문자열 입력 >> ");
			String st = scan.next();
			
			if(st.equals("그만"))
				break;
			
			boolean res = s.push(st);
			
			if(res == false)
				System.out.println("스택이 꽉 차서 푸시 불가!");
		}
		
		System.out.print("스택에 저장된 모든 문자열 팝 : ");
		for(int i = 0; i < s.length(); i++)
			System.out.print(s.pop() + " ");
		
		scan.close();
	}
}
