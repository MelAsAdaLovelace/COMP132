package shopping;

import book.*;

public class ShoppingCart {

	private Book[] contents;
	private int numEntriesInCart;
	
	// Constructor
	public ShoppingCart(){
		this.contents = new Book[10];
		this.numEntriesInCart = 0;
	}
	
	public int getNumEntriesInCart(){
		return this.numEntriesInCart;
	}
	
	public Book[] getContents() {
		return contents;
	}

	// Other asked methods in the homework
	public boolean addBook(Book book){
		if (this.numEntriesInCart < 10) {
			this.contents[numEntriesInCart] = book;
			this.numEntriesInCart++;
		    return true;
		} else 
			return false;
	}
	
	public boolean removeLastBook(){
		if (this.numEntriesInCart == 0)
			return false;
		else {
			this.contents[numEntriesInCart-1] = null;
			this.numEntriesInCart--;
			return true;
		}
	}
	
	public String toString(){
		String res = "==========================\n" + 
				"This cart has " + numEntriesInCart + " books. \n";
		
		double totalPrice = 0.0;
		double totalCost = 0.0;
		for (int i = 0; i < numEntriesInCart; i++){
			res += contents[i].toString() + "\n";
			
			totalPrice += contents[i].getPrice();
			if(contents[i] instanceof HardCopyBook)
				totalCost += ((HardCopyBook) contents[i]).getTotalCost();
			else
				totalCost += contents[i].getPrice();
			
		}
		res += "Total price of the books in the cart: " + totalPrice + "\n" +
				"Total cost of the books in the cart: " + totalCost + ". \n";
		return res;
	}
}
