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
		System.out.println(year + "년 " + country + "국적의 " + artist + "가 부른 " + title);
	}
}

public class Ex3 
{
	public static void main(String[] args)
	{
		Song dq = new Song("Dancing Queen", "ABBA", "스웨덴", 1978);
		dq.show();
	}
}
