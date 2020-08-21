package project3;

import java.util.Scanner;

public class Ex14 
{
	public static void main(String[] args) 
	{
		String course[] = { "Java", "C++", "HTML5", "컴퓨터구조", "안드로이드" };
		int score[] = { 95, 88, 76, 62, 55 };
		
		Scanner scan = new Scanner(System.in);
		
		while(true)
		{
			System.out.print("과목 이름 >> ");
			String sub = scan.next();
			
			if(sub.equals("그만"))
				break;
			
			for(int i = 0; i < course.length; i++)
			{
				if(sub.equals(course[i]))
				{
					System.out.println(course[i] + "의 점수는 " + score[i]);
					break;
				}
				else if(i == course.length - 1)
					System.out.println("없는 과목");
			}
		}
		
		scan.close();
	}
}
