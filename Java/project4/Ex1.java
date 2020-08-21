package project4;

class TV
{
	private String brand;
	private int year, inch;
	
	TV(String s, int y, int i)
	{
		brand = s;
		year = y;
		inch = i;
	}
	
	void show()
	{
		System.out.println(brand + "에서 만든 " + year + "년형 " + inch + "인치 TV");
	}
}

public class Ex1 
{
	public static void main(String[] args)
	{
		TV myTV = new TV("LG", 2017, 32);
		myTV.show();
	}
}
