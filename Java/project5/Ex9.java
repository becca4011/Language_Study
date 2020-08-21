package project5;

import java.util.Scanner;

interface Stack
{
	int length(); // ���� ���ÿ� ����� ���� ����
	int compacity(); // ������ ��ü ���� ������ ���� ����
	String pop(); // ������ ��(top)�� �Ǽ� ����
	boolean push(String val); // ������ ��(top)�� ����� �Ǽ� ����
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
		
		System.out.print("�� ���� ���� ������ ũ�� �Է� >> ");
		int size = scan.nextInt();
		s = new StringStack(size);
		
		while(true)
		{
			System.out.print("���ڿ� �Է� >> ");
			String st = scan.next();
			
			if(st.equals("�׸�"))
				break;
			
			boolean res = s.push(st);
			
			if(res == false)
				System.out.println("������ �� ���� Ǫ�� �Ұ�!");
		}
		
		System.out.print("���ÿ� ����� ��� ���ڿ� �� : ");
		for(int i = 0; i < s.length(); i++)
			System.out.print(s.pop() + " ");
		
		scan.close();
	}
}
