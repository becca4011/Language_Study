package project3;

public class Ex13 
{
	public static void main(String[] args)
	{
		for(int i = 1; i < 100; i++)
		{
			if(i < 10)
			{
				if(i == 3 || i == 6 || i == 9)
					System.out.println(i + " ¹Ú¼ö Â¦");
			}
			else
			{
				int t = i / 10;
				int o = i % 10;
				
				if((t == 3 || t == 6 || t == 9) && (o == 3 || o == 6 || o == 9))
				{
					System.out.println(i + "¹Ú¼ö Â¦Â¦");
				}
				else if((t == 3 || t == 6 || t == 9) || (o == 3 || o == 6 || o == 9))
				{
					System.out.println(i + "¹Ú¼ö Â¦");
				}
			}
		}
	}
}
