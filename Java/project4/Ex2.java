package project4;

import java.util.Scanner;

class Grade
{
	private int math, sci, eng;
	
	Grade(int m, int s, int e)
	{
		math = m;
		sci = s;
		eng = e;
	}
	
	int average()
	{
		return (math + sci + eng) / 3;
	}
}

public class Ex2 
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.print("수학, 과학, 영어 순으로 3개의 점수 입력 >> ");
		int math = scan.nextInt();
		int sci = scan.nextInt();
		int eng = scan.nextInt();
		
		Grade me = new Grade(math, sci, eng);
		System.out.println("평균 : " + me.average());
		
		scan.close();
	}
}
