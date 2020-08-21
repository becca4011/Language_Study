package project5;

interface Shape2
{
	final double PI = 3.14;
	void draw();
	double getArea();
	
	default public void redraw()
	{
		System.out.print("--- 다시 그립니다.");
		draw();
	}
}

class Circle2 implements Shape2
{
	int rad;
	
	public Circle2(int r) { rad = r; }
	
	public void draw()
	{
		System.out.println("반지름이 " + rad + "인 원입니다.");
	}
	
	public double getArea()
	{
		return PI * rad * rad;
	}
}

class Oval implements Shape2
{
	private int a, b;
	
	public Oval(int x, int y)
	{
		a = x;
		b = y;
	}
	
	public void draw()
	{
		System.out.println(a + "X" + b + "에 내접하는 타원입니다.");
	}
	
	public double getArea()
	{
		return PI * (a / 2) * (b / 2);
	}
}

class Rect2 implements Shape2
{
	private int w, h;
	
	public Rect2(int x, int y)
	{
		w = x;
		h = y;
	}
	
	public void draw()
	{
		System.out.println(w + "X" + h + "크기의 사각형입니다.");
	}
	
	public double getArea()
	{
		return w * h;
	}
}

public class Ex13 
{
	public static void main(String[] args) 
	{
		/*
		Shape2 donut = new Circle2(10);
		donut.redraw();
		System.out.println("면적은 " + donut.getArea());
		*/
		
		Shape2[] list = new Shape2[3];
		list[0] = new Circle2(10);
		list[1] = new Oval(20, 30);
		list[2] = new Rect2(10, 40);
		
		for(int i = 0; i < list.length; i++)
			list[i].redraw();
		
		for(int i = 0; i < list.length; i++)
			System.out.println("면적은 " + list[i].getArea());
	}
}
