package shopping;

import java.util.Date;

import book.Book;

public class Purchase extends ShoppingCart{
	private String purchaseDate;
	private String expectedShippngDate;
	private int shippingLength;
	
	
	public void setShippingLength(int shippingLength) {
		if(shippingLength >= 0){
			this.shippingLength = shippingLength;
		}else{
			shippingLength = 5;
		}
	}


	public void setPurchaseDate(String purchaseDate) {
		this.purchaseDate = purchaseDate;
	}


	public void setExpectedShippngDate(String expectedShippngDate) {
		this.expectedShippngDate = expectedShippngDate;
	}
	

	public Purchase(String purchaseDate, String expectedShippngDate, int shippingLength) {
		super();
		setPurchaseDate(purchaseDate);
		setExpectedShippngDate(expectedShippngDate);
		setShippingLength(shippingLength);
	}
	
	public double getTotalPayment(){
		double totalPrice = 0;
		Book[] cartBook = super.getContents();
		for(int i=0; i<cartBook.length; i++){
			totalPrice += cartBook[i].getPrice();
		}
		return totalPrice;
	}
	public String getPurchaseDate() {
		return purchaseDate;
	}


	public String getExpectedShippngDate() {
		return expectedShippngDate;
	}


	public int getShippingLength() {
		return shippingLength;
	}


	@Override
	public String toString() {
		String str = "Purchase Date: " + this.getPurchaseDate() + 
				"\nExpected Shipping Date: " + this.getExpectedShippngDate() + 
				"\nDelivery Length: " + this.getShippingLength() +
				"\n";
		return str+super.toString();
	}


	

	
	
	
	
	
	
}
