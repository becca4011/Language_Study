package project5;

class Point3
{
	private int x, y;
	
	public Point3(int x, int y) { this.x = x; this.y = y; }
	public int getX() { return x; }
	public int getY() { return y; }
	protected void move(int x, int y) { this.x = x; this.y = y; }
}

class Point3D extends Point3
{
	private int z;
	
	public Point3D(int x, int y, int z)
	{
		super(x, y);
		this.z = z;
	}
	
	public int moveUp() { return z += 1; }
	public int moveDown() { return z -= 1; }
	public void move(int x, int y, int z)
	{
		move(x, y);
		this.z = z;
	}
	
	public String toString()
	{
		return "(" + getX() + "," + getY() + "," + z + ")�� ��";
	}
}

public class Ex7 
{
	public static void main(String[] args) 
	{
		Point3D p = new Point3D(1, 2, 3);
		System.out.println(p.toString() + "�Դϴ�.");
		
		p.moveUp();
		System.out.println(p.toString() + "�Դϴ�.");
		
		p.moveDown();
		p.move(10, 10);
		System.out.println(p.toString() + "�Դϴ�.");
		
		p.move(100, 200, 300);
		System.out.println(p.toString() + "�Դϴ�.");
	}
}
