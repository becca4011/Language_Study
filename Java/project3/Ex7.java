package project3;

public class Ex7 
{
	public static void main(String[] args)
	{
		int ar[] = new int[10];
		int sum = 0;
		
		System.out.print("������ ������ : ");
		
		for(int i = 0; i < 10; i++)
		{
			ar[i] = (int)(Math.random() * 10 + 1);
			System.out.print(ar[i] + " ");
			sum += ar[i];
		}
		
		System.out.println("\n��� : " + sum / 10.0);
	}
}
