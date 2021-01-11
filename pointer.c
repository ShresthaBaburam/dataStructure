#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
Pointers in C are easy and fun to learn.
Some C programming tasks are performed more easily with pointers, and other tasks,
such as dynamic memory allocation, cannot be performed without using pointers. 
So it becomes necessary to learn pointers to become a perfect C programmer. 
Every variable is a memory location and every memory location has its address defined 
which can be accessed using ampersand (&) operator, which denotes an address in memory. 
*/

int get_sum(int *number, int size){
	int i = 0,sum = 0;
	for (i=0;i<size;i++){
		sum +=number[i];
	}
	return sum;
	
}

int * get_numbers(){
	int Z=0;
	static int numb[10];
	
	for(Z=0;Z<10;Z++){
		numb[Z]=Z+1;
	}
	return numb;	
}

int main(){
	int  var1;
	char var2[10];
	printf("Address of var1 variable: %x\n", &var1  );// it print the address of the var1 cariable
	printf("Address of var2 variable: %x\n\n", &var2  );// it print the address of the var2 cariable
	
/*
What are Pointers?
	A pointer is a variable whose value is the address of another variable, 
	i.e., direct address of the memory location. Like any variable or constant, 
	you must declare a pointer before using it to store any variable address. 
	The general form of a pointer variable declaration is:
		data_type *var-name;
		
		example:
			int    *ip;    pointer to an integer 
			double *dp;    pointer to a double 
			float  *fp;    pointer to a float 
			char   *ch     pointer to a character
			
The actual data type of the value of all pointers, whether integer, float, character, or
otherwise, is the same, a long hexadecimal number that represents a memory address. 
The only difference between pointers of different data types is the data type of the
variable or constant that the pointer points to.

How to Use Pointers?
	There are a few important operations, which we will do with the help of pointers very frequently.
		(a) We define a pointer variable, 
		(b) assign the address of a variable to a pointer and 
		(c) finally access the value at the address available in the pointer variable. 
	This is done by using unary operator (*) 
	that returns the value of the variable located at the address specified by its operand. 
*/
	int  var = 20;   //actual variable declaration 
	int  *ip;        //pointer variable declaration 
	ip = &var;  // store address of var in pointer variable
	
	printf("Address of var variable: %x\n", &var  );
	printf("Address stored in ip variable: %x\n", ip ); //address stored in pointer variable 
	printf("Value of *ip variable: %d\n", *ip );// access the value using the pointer 
	
/*
NULL Pointers
	It is always a good practice to assign a NULL value to a pointer variable 
	in case you do not have an exact address to be assigned. 
	This is done at the time of variable declaration. 
	A pointer that is assigned NULL is called a null pointer.
	
	The NULL pointer is a constant with a value of zero defined in several standard libraries
*/
	int  *ptr = NULL;
	printf("\nThe value of ptr is : %x\n", ptr  );
/*
Pointers in Detail
	Pointers have many but easy concepts and they are very important to C programming.
	
		Pointer arithmetic
			There are four arithmetic operators that can be used in pointers: ++, --, +, -
*/
	int  variable[] = {10, 100, 200};
	int  i, *ptrs;
	ptrs = variable;
	// increment the pointer
	for ( i = 0; i < 3; i++) {
		printf("\nAddress of var[%d] = %x\n", i, ptrs );
		printf("Value of var[%d] = %d\n", i, *ptrs );
		ptrs++; //move to the next location
	}
	// decrement the pointer
	ptrs = &variable[2];
	for ( i = 3; i >0; i--) {
		printf("\nAddress of var[%d] = %x\n", i-1, ptrs );
		printf("Value of var[%d] = %d\n", i-1, *ptrs );
		ptrs--; //move to the next location
	}
	
/*
Pointer Comparisons
	Pointers may be compared by using relational operators, 
	such as ==, <, and >. If p1 and p2 point to variables that are related to each other, 
	such as elements of the same array, then p1 and p2 can be meaningfully compared.
*/

	int  p1[] = {11, 111, 1111};
	int  j=0, *p2;
	p2 = p1;
	while ( p2 <= &p1[2] ) {

    	printf("\nAddress of var[%d] = %x\n", j, p2 );
    	printf("Value of var[%d] = %d\n", j, *p2 );
    	p2++;
    	j++;
	}
/*			
		Array of pointers
			You can define arrays to hold a number of pointers.
*/
	char *names[] = {
      "baburam",
      "Shyam",
      "Nisha",
      "Sarita"
	};
	int k = 0;
	for (k = 0; k < 4; k++) {
    	printf("\nValue of names[%d] = %s\n", k, names[k] );
	}
	
/*		
		Pointer to pointer
			C allows you to have pointer on a pointer and so on.
*/
	int a=30000, *b, **c;
	b=&a;
	c=&b;
	printf("\nValue of a = %d\n", a );
	printf("\nValue available at *b = %d\n", *b );
	printf("\nValue available at **c = %d\n", **c);
/*
		Passing pointers to functions in C
			Passing an argument by reference or by address enable the passed argument to 
			be changed in the calling function by the called function.
*/
	int num[]= {1,2,3,4,5,6,7,8,9};
	printf("\nThe sum=%d\n",get_sum(num, 9));

/*

		Return pointer from functions in C
			C allows a function to return a pointer to the local variable, static variable,
			and dynamically allocated memory as well
*/

	int l, *y;
	
	y= get_numbers();
	
	for(l=0;l<10;l++){
		printf("\n%d",*(y+l));	
	}


	return 0;
	
}
