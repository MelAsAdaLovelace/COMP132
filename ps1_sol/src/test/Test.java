package test;


import java.util.Calendar;

import book.*;
import shopping.*;

public class Test {

	public static void main(String[] args){
		
		
		HardCopyBook b1 = new HardCopyBook("Java How to Program", 55, "123456789", 1, 5);
		HardCopyBook b2 = new HardCopyBook("C How to Program", 40, "123456789", 1, 5);
		HardCopyBook b3 = new HardCopyBook("C++ How to Program", 50, "123456789", 1, 5);
		HardCopyBook b4 = new HardCopyBook("The Java Programming Language", 55, "123456789", 1, 5);
		
		Purchase p1 = new Purchase("16/02/2017", "21/02/2017", 5);
		
		p1.addBook(b1);
		p1.addBook(b2);
		p1.addBook(b3);
		p1.addBook(b4);
		
		System.out.println(p1);
		
		EBook e1 = new EBook("Learn you some Erlang", 75, "123456+789", 200, "pdf", 1);
		EBook e2 = new EBook("Principles of Programming Languages", 125, "123456+789", 150, "chm", 3);
		EBook e3 = new EBook("Advanced Operating Systems", 50, "123456+789", 250, "chm", 2);
		
		Purchase p2 = new Purchase("16/02/2017","16/02/2017", 0);
		p2.addBook(e1);
		p2.addBook(e2);
		p2.addBook(e3);
		 System.out.println(p2);

	}
 

}
