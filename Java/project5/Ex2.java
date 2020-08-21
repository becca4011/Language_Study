package project5;

class TV2
{
	private int size;
	
	public TV2(int size) { this.size = size; }
	protected int getSize() { return size; }
}

class colorTV2 extends TV2
{
	private int color;
	
	public colorTV2(int size, int color)
	{
		super(size);
		this.color = color;
	}
	
	protected int getColor() { return color; }
}

class IPTV extends colorTV2
{
	String address;
	
	public IPTV(String adr, int size, int color)
	{
		super(size, color);
		address = adr;
	}
	
	public void printProperty()
	{
		System.out.println("나의 IPTV는 " + address + " 주소의 " + getSize() + "인치 " + getColor() + "컬러");
	}
}

public class Ex2 
{
	public static void main(String[] args) 
	{
		IPTV iptv = new IPTV("192.1.1.2", 32, 2048);
		iptv.printProperty();
	}
}
