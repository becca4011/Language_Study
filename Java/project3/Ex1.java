package project3;

public class Ex1 
{
	public static void main(String[] args) 
	{
		int sum = 0, i = 0;
		
		/*
		while (i < 100)
		{
			sum += i;
			i += 2;
		}
		*/
		
		/*
		for (i = 0; i < 100; i += 2)
		{
			sum += i;
		}
		*/
		
		do
		{
			sum += i;
			i += 2;
		}while(i < 100);
		
		System.out.println(sum);
	}
}
