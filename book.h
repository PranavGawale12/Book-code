
public class Book{
	
	private:int bookid;
			String bookName;
			double price;
			
	public:
		Book();
	
	int getBookId();
	
	String getBookName();
	
	double price();
	
	void setBookId(int id);
	void setBookName(String bookName);
	void setPrice(double price);
	
	double totalPrice(int quantity,double price);
		

};
