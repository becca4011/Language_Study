package project4;

import java.util.Scanner;

class PhoneBook
{
	private String name, tel;
	
	PhoneBook(String n, String t)
	{
		name = n;
		tel = t;
	}
	
	public String getName() { return name; }
	public String getTel() { return tel; }
}

public class Ex8 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.print("인원수 >> ");
		int n = scan.nextInt();
		
		PhoneBook pb[] = new PhoneBook[n];
		
		for(int i = 0; i < n; i++)
		{
			System.out.print("이름과 전화번호(이름과 번호는 빈 칸 없이 입력) >> ");
			String name = scan.next();
			String tel = scan.next();
			
			pb[i] = new PhoneBook(name, tel);
		}
		System.out.println("저장되었습니다...");
		
		while(true)
		{
			System.out.print("검색할 이름 >> ");
			String name = scan.next();
			
			if(name.equals("그만"))
				break;
			
			for(int i = 0; i < n; i++)
			{
				if(name.equals(pb[i].getName()))
				{
					System.out.println(name + "의 번호는 " + pb[i].getTel());
					break;
				}
				else if(i == n - 1)
					System.out.println(name + "이 없습니다");
			}
		}
		
		scan.close();
	}
}
