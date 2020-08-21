package project4;

import java.util.Scanner;

class Dictionary
{
	private static String[] kor = { "���", "�Ʊ�", "��", "�̷�", "���" };
	private static String[] eng = { "love", "baby", "money", "future", "hope" };
	
	public static String kor2Eng(String word)
	{
		for(int i = 0; i < kor.length; i++)
		{
			if(word.equals(kor[i]))
			{
				if(i % 2 == 0)
					System.out.print(word + "�� ");
				else
					System.out.print(word + "�� ");
				
				return eng[i];
			}
		}
		return "false";
	}
}

public class Ex10 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println("�ѿ� �ܾ� �˻� ���α׷�");
		
		while(true)
		{
			System.out.print("�ѱ� �ܾ�? ");
			String word = scan.next();
			
			if(word.equals("�׸�"))
				break;
			
			String dict = Dictionary.kor2Eng(word);
			
			if(dict == "false")
				System.out.println(word + "�� ������ �����ϴ�");
			else
				System.out.println(dict);
		}
		
		scan.close();
	}
}
