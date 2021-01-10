#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
Arrays allow to define type of variables that
can hold several data items of the same kind.
Similarly structure is another user defined data type available in C
that allows to combine data items of different kinds.

Structures are used to represent a record. 
	Title
	Author
	Subject
	Book ID
	
Defining a Structure
	We must use the struct statement. 
	The struct statement defines a new data type, with more than one member.

	struct <structure_name> {
	
	   member definition;
	   member definition;
	   ...
	   member definition;
	}<boject_name;
	
Note: Ojject name can be defined either in main program 
or after the defination of structure.
*/

struct Books{
	char  title[50];
	char  author[50];
	char  subject[40];
	int   book_id;
}_Books; // object creation

void display_Book3(struct Books Book3){
	printf("%s\t%s\t%s\t%d\n",Book3.title,Book3.author,Book3.subject,Book3.book_id);
}

void display_Book4(struct Books *Book4){
	printf("%s\t%s\t%s\t%d\n",Book4->title,Book4->author,Book4->subject,Book4->book_id);
}


int main(){
/*
Accessing Structure Members
	Use the member access operator (.).  
*/
	strcpy( _Books.title, "Data Structure");
	strcpy( _Books.author, "Bks"); 
	strcpy( _Books.subject, "DSA");
	_Books.book_id = 632;
	printf("%s\t%s\t%s\t%d\n",_Books.title,_Books.author,_Books.subject,_Books.book_id);
	
	struct Books Book1; //Declare Book1 of type Book 
	struct Books Book2; //Declare Book2 of type Book
	struct Books Book3; //Declare Book3 of type Book
	struct Books Book4; //Declare Book4 of type Book
	 
//book 1 specification
	strcpy( Book1.title, "Structure");
	strcpy( Book1.author, "Bksss"); 
	strcpy( Book1.subject, "DSAS");
	Book1.book_id = 6722;
	printf("%s\t%s\t%s\t%d\n",Book1.title,Book1.author,Book1.subject,Book1.book_id);
	
//book 2 specification
	strcpy( Book2.title, "Data agorithm");
	strcpy( Book2.author, "Pks"); 
	strcpy( Book2.subject, "NM");
	Book2.book_id = 6232;
	printf("%s\t%s\t%s\t%d\n",Book2.title,Book2.author,Book2.subject,Book2.book_id);
	
//book 3 specification
	strcpy( Book3.title, "Data qbsda");
	strcpy( Book3.author, "Ps"); 
	strcpy( Book3.subject, "GM");
	Book3.book_id = 62;
	
//Structures as Function Arguments
	display_Book3(Book3);
	
	
//book 4 specification
	strcpy( Book4.title, "Data DBAs");
	strcpy( Book4.author, "fhfad"); 
	strcpy( Book4.subject, "afhajf");
	Book4.book_id = 6232;
	
// POinter to Struture
	display_Book4(&Book4);
	
	return 0;

}

