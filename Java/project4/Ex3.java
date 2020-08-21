package project4;

class Song
{
	private String title, artist, country;
	private int year;
	
	Song()
	{
		title = "";
		artist = "";
		year = 0;
		country = "";
	}
	
	Song(String t, String a, String c, int y)
	{
		title = t;
		artist = a;
		year = y;
		country = c;
	}
	
	void show()
	{
		System.out.println(year + "�� " + country + "������ " + artist + "�� �θ� " + title);
	}
}

public class Ex3 
{
	public static void main(String[] args)
	{
		Song dq = new Song("Dancing Queen", "ABBA", "������", 1978);
		dq.show();
	}
}
