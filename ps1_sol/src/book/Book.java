package book;

public class Book {
	private String name;
	private double price;
	private String bookId;
	
	// Constructor
	public Book(String name, double price, String bookId){
		// Java first sets all fields to default: this.price = 0.0; this.bookId = null
		setName(name);
		setPrice(price);
		setBookId(bookId);
	}
	
	// Setters and Getters
	public void setName(String name){
		this.name = name;
	}
	
	public String getName(){
		return this.name;
	}
	
	public void setPrice(double price){
		if(0 <= price)
			this.price = price;
	}
	
	public double getPrice(){
		return this.price;
	}
	
	public void setBookId(String bookId){
		// If bookId is a string of exactly 10 digits, this.bookId = bookId
		// else this.bookId = "0123456789"		
		String defaultBookId = "0123456789"; 
	
		if (bookId.length() != 10)
			this.bookId = defaultBookId;
				
		for (int i = 0; i < bookId.length(); i++){
			if (!Character.isDigit(bookId.charAt(i)))
			{
				this.bookId = defaultBookId;
				return; // Exit method
			}
		}
		
		// If I am here, all characters are digits
		this.bookId = bookId;	
	}
	
	public String getBookId(){
		return this.bookId;
	}

	// other asked methods in the homework
	public void applyDiscount(double discountPercentage){
		// if discountPercentage is between 0 and 100: this.price - this.price * discountPercentage
		// else discountPercentage is not in range: do nothing
		if(0 <= discountPercentage && discountPercentage <= 100){
			this.price -= this.price * discountPercentage;
		}
	}
	
	public String toString(){
		String res = "--------------------\n" + 
				"Book name: " + this.getName() + "\n" +
				"Book price: " + String.valueOf(this.getPrice()) + "\n" + 
				"ISBN: " + this.getBookId() + "\n";
		return res;
	}
	
}
