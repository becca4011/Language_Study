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
		System.out.println(brand + "���� ���� " + year + "���� " + inch + "��ġ TV");
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
