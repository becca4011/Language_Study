package project5;

import java.util.Scanner;

abstract class Shape
{
	private Shape next;
	public Shape() { next = null; }
	public void setNext(Shape obj) { next = obj; }
	public Shape getNext() { return next; }
	public abstract void draw();
}

class Line extends Shape
{
	@Override
	public void draw()
	{
		System.out.println("Line");
	}
}

class Rect extends Shape
{
	@Override
	public void draw()
	{
		System.out.println("Rect");
	}
}

class Circle extends Shape
{
	@Override
	public void draw()
	{
		System.out.println("Circle");
	}
}

class GrapicEditor
{
	private String name;
	private Shape obj;
	private Shape front = null, back = null;
	
	public GrapicEditor(String n)
	{
		name = n;
	}
	
	public void insert(int i)
	{
		if(i == 1)
		{
			obj = new Line();
		}
		else if(i == 2)
		{
			obj = new Rect();
		}
		else if(i == 3)
		{
			obj = new Circle();
		}
		
		if(front == null)
		{
			front = back = obj;
		}
		else
		{
			back.setNext(obj);
			back = obj;
		}
	}
	
	public boolean delete(int del)
	{
		Shape first = front, fin = null;
		
		if(front == null)
			return false;

		for(int i = 1; i < del; i++)
		{
			fin = first;
			first = first.getNext();
				
			if(first == null)
			{
				return false;
			}
		}
		
		if(del == 1)
		{
			if(front == back)
				front = back = null;
			else
				front = front.getNext();
			
			return true;
		}
		else if(first == back)
		{
			back = fin;
			fin.setNext(null);
			return true;
		}
		else
		{
			fin.setNext(first.getNext());
			return true;
		}
	}
	
	public void run()
	{
		Scanner scan = new Scanner(System.in);
		
		System.out.println("�׷��� ������ " + name + "�� �����մϴ�.");
		
		while(true)
		{
			System.out.print("����(1), ����(2), ��� ����(3), ����(4) >> ");
			int menu = scan.nextInt();
			
			if(menu == 4)
			{
				System.out.println(name + "�� �����մϴ�.");
				break;
			}
			else
			{
				if(menu == 1)
				{
					System.out.print("Line(1), Rect(2), Circle(3) >> ");
					int ins = scan.nextInt();
					
					if(ins < 0 || ins > 3)
						System.out.println("�߸��� ���� �Է�");
					else
						insert(ins);
				}
				else if(menu == 2)
				{
					System.out.print("������ ������ ��ġ >> ");
					int del = scan.nextInt();
					
					if(delete(del) != true)
						System.out.println("������ �� �����ϴ�.");
				}
				else if(menu == 3)
				{
					Shape sp = front;
					
					while(sp != null)
					{
						sp.draw();
						sp = sp.getNext();
					}
				}
				else
				{
					System.out.println("���� ���");
				}
			}
		}
		
		scan.close();
	}
}

public class Ex12 
{
	public static void main(String[] args) 
	{
		GrapicEditor ge = new GrapicEditor("beauty");
		ge.run();
	}
}
