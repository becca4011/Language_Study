package project4;

import java.util.Scanner;

class Circle2
{
	private double x, y;
	private int radius;
	
	public Circle2(double x, double y, int radius)
	{
		this.x = x;
		this.y = y;
		this.radius = radius;
	}
	
	public void show()
	{
		System.out.println("(" + x + ", " + y + ") " + radius );
	}
	
	public int getRadius()
	{
		return radius;
	}
}

public class Ex6 
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		Circle2 c[] = new Circle2[3];
		
		for(int i = 0; i < c.length; i++)
		{
			System.out.print("x, y, radius >> ");
			double x = scan.nextDouble();
			double y = scan.nextDouble();
			int radius = scan.nextInt();
			
			c[i] = new Circle2(x, y, radius);
		}
		
		int max = 0;
		for(int i = 1; i < c.length; i++)
		{
			if(c[i].getRadius() > c[max].getRadius())
				max = i;
		}
		
		System.out.print("가장 면적이 큰 원은 ");
		c[max].show();
		
		scan.close();
	}
}
