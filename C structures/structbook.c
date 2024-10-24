//C structures
#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
	} book1;
int main () {
	//struct book,book1;
	strcpy(book1.title,"blossoms of savannah");
	strcpy(book1.author,"Natalie Wambua");
	book1.publication_year=2001;
	strcpy(book1.ISBN,"469984851460");
	book1.price=255.50;
	
	printf("the title is:%s\n",book1.title);
	printf("the author is:%s\n",book1.author);
	printf("the publication_year is:%d\n",book1.publication_year);
	printf("the ISBN is:%s\n",book1.ISBN);
	printf("the price is:%f\n",book1.price);
	
	return 0;
	}