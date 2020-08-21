package project4;

import java.util.Scanner;

class Reservation
{
	Scanner scan = new Scanner(System.in);
	String S[];
	String A[];
	String B[];
	
	public Reservation() 
	{
		S = new String[10];
		A = new String[10];
		B = new String[10];
		
		for(int i = 0; i < S.length; i++)
		{
			S[i] = "___";
			A[i] = "___";
			B[i] = "___";
		}
	}
	
	public static void printSeat(String seat[])
	{
		for(int i = 0; i < seat.length; i++)
			System.out.print(" " + seat[i] + " ");
	}
	
	public void allPrint()
	{
		System.out.print("S>>");
		Reservation.printSeat(S);
		
		System.out.print("\nA>>");
		Reservation.printSeat(A);
		
		System.out.print("\nB>>");
		Reservation.printSeat(B);
		
		System.out.println("\n<<< ��ȸ�� �Ϸ��Ͽ����ϴ� >>>");
	}
	
	public void choiceSeat()
	{
		System.out.print("�¼����� S(1), A(2), B(3) >> ");
		int sit = scan.nextInt();
		
		if(sit == 1)
		{
			System.out.print("S>>");
			printSeat(S);
			inputSeat(S);
		}
		else if(sit == 2)
		{
			System.out.print("A>>");
			printSeat(A);
			inputSeat(A);
		}
		else if(sit == 3)
		{
			System.out.print("B>>");
			printSeat(B);
			inputSeat(B);
		}
		else
			System.out.println("�ٽ� �Է�");
	}
	
	public void inputSeat(String[] seat)
	{
		System.out.print("\n�̸� >> ");
		String name = scan.next();
		
		while(true)
		{
			System.out.print("��ȣ >> ");
			int num = scan.nextInt();
			
			if(seat[num - 1].equals("___"))
			{
				seat[num - 1] = name;
				break;
			}
			else
				System.out.println("�ٸ� �¼� ����");
		}
	}
	
	public void d_choiceSeat() 
	{
		while(true) 
		{
			System.out.print("�¼� S:1, A:2, B:3>>");
		    int select = scan.nextInt();
		    switch(select) 
		    {
		    case 1: 
		        System.out.print("S>>");
		        printSeat(S);
		        delete(S);
		        return;
		     case 2:
		        System.out.print("A>>");
		        printSeat(A);
		        delete(A);
		        return;
		     case 3: 
		        System.out.print("B>>");
		        printSeat(B);
		        delete(B);
		        return;
		     default:
		        System.out.println("�ٽ� �Է��� �ּ���.");
		     }
		  }
	}
	
	public void delete(String seat[]) 
	{
		  System.out.print("\n�̸�>>");
		  String name = scan.next();
		  for(int i=0; i<seat.length; i++) 
		  {
			  if(name.equals(seat[i])) 
		      {
				  seat[i] = "___";
		          break;
		      }
		  }
	}
}

public class Ex12 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
	    System.out.println("��ǰ�ܼ�ƮȦ ���� �ý����Դϴ�.");
	    Reservation concert = new Reservation();
	    while(true) 
	    {
	        System.out.print("����:1, ��ȸ:2, ���:3, ������:4 >> ");
	        int select = sc.nextInt();
	        switch(select) 
	        {
	        case 1:
	           concert.choiceSeat();
	           break;
	        case 2:
	           concert.allPrint();
	           break;
	        case 3:
	           concert.d_choiceSeat();
	           break;
	        case 4:
	           sc.close();
	           return;
	        default :
	           System.out.println("�ٽ� �Է��� �ּ���.");
	        }
	    }
	}
}
