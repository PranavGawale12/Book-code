#include "book.h"

Book::Book(){
		bookid=1;
		bookName="Twilight";
		price=300;
		}

int Book::getBookId(){
		return bookId;
	}

String Book::getBookName(){
		return bookName;
	}
	
double Book::price(){
		return price;
	}
	
void Book::setBookId(int id){
		this.bookid=id
	}

double Book::totalPrice(int quantity,double price){
	return price=price*quantity;
}

