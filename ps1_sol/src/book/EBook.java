package book;

public class EBook extends Book{
	
	private double fileSize;
	private String encodingFormat; // pdf, chm, djvu
	private int numDevicesAllowed;
	private int numDevicesBeingUsed;
	
	// Constructor
	public EBook(String name, double price, String bookId, double fileSize, String encodingFormat, int numDevicesAllowed){
		super(name, price, bookId);
		setFileSize(fileSize);
		setNumDevicesAllowed(numDevicesAllowed);
		setEncodingFormat(encodingFormat);
		this.numDevicesBeingUsed = 0;
	}

	// Setters and Getters
	public void setFileSize(double fileSize) {
		this.fileSize = fileSize > 0 ? fileSize : 1.0;
	}
	
	public double getFileSize() {
		return this.fileSize;
	}

	public void setEncodingFormat(String encodingFormat) {
		this.encodingFormat = encodingFormat;
	}

	public String getEncodingFormat() {
		return this.encodingFormat;
	}

	public void setNumDevicesAllowed(int numDevicesAllowed) {
		this.numDevicesAllowed = numDevicesAllowed > 0 ? numDevicesAllowed : 1;
	}
	
	public int getNumDevicesAllowed() {
		return this.numDevicesAllowed;
	}

	public int getNumDevicesBeingUsed() {
		return this.numDevicesBeingUsed;
	}
	
	// Other asked methods in the homework
	public boolean addDevice(){
		this.numDevicesBeingUsed++;
		return true;
	}
	
	public boolean removeDevice(){
		this.numDevicesBeingUsed--;
		return true;
	}
	
	public String toString(){
		String res = super.toString() +
				"Book file size: " + this.getFileSize() + "\n" +
				"Number of devices the book is allowed on: " + this.getNumDevicesAllowed() + "\n" +
				"Number of devices the book is being used on: " + this.getNumDevicesBeingUsed() + "\n";
		return res;
	}
}
