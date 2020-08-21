package project5;

class TV
{
	private int size;
	public TV(int size) { this.size = size; }
	protected int getSize() { return size; }
}

class colorTV extends TV
{
	private int color;
	
	colorTV(int size, int color)
	{
		super(size);
		this.color = color;
	}
	
	void printProperty()
	{
		System.out.println(getSize() + "인치 " + color + "컬러");
	}
}

public class Ex1 
{
	public static void main(String[] args)
	{
		colorTV myTV = new colorTV(32, 1024);
		myTV.printProperty();
	}
}
