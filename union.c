#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
A union is a special data type available in C that allows to store 
different data types in the same memory location. 
You can define a union with many members, but only one member can contain a value at any given time. 
Unions provide an efficient way of using the same memory location for multiple-purpose.

Defining a Union
	To define a union, you must use the union statement 
	The union statement defines a new data type with more than one member for your program. 

		union <union_name> {
		   member definition;
		   member definition;
		   ...
		   member definition;
		} [one or more union variables]; 	

*/

union Data1 {
   int i1;
   float f1;
   char str1[20];
}data1;

union Data2 {
   int i2;
   float f2;
   char str2[20];
};

union Data3 {
   int i3;
   float f3;
   char str3[20];
};

int main(){

   union Data2 data2;
   union Data3 data3;        
/*
Accessing Union Members
	To access any member of a union, we use the member access operator (.).
	The member access operator is coded as a period between the union variable
	name and the union member that we wish to access.
	You would use the keyword union to define variables of union type.
*/
	data1.i1 = 101;
	data1.f1 = 2210.5;
	strcpy( data1.str1, "C Programming DSA");
	
	printf( "data1.i1 : %d\n", data1.i1);
	printf( "data1.f1 : %f\n", data1.f1);
	printf( "data1.str1 : %s\n", data1.str1);
	
/*
The values of i1 and f1 members of union got corrupted because the final value assigned 
to the variable has occupied the memory location and this is the reason that the value of str 
member is getting printed very well.
*/
	
	data2.i2 = 10;
	data2.f2 = 220.5;
	strcpy( data2.str2, "C Programming");

	printf( "data1.i2 : %d\n", data2.i2);
	printf( "data1.f2 : %f\n", data2.f2);
	printf( "data1.str2 : %s\n", data2.str2);
/*
The values of i2 and f2 members of union got corrupted because the final value assigned 
to the variable has occupied the memory location and this is the reason that the value of str 
member is getting printed very well.
*/

	data3.i3 = 10;
	printf( "data3.i3 : %d\n", data3.i3);
	data3.f3 = 220.5;
	printf( "data3.f3 : %f\n", data3.f3);
	strcpy( data3.str3, "C Programming");
	printf( "data3.str3 : %s\n", data3.str3);
/*
The values of i3 and f3 members of union dit notget corrupted because the value is printed after
assigning the value to the variable has occupied the memory location and this is the 
reason that the value of all member is getting printed very well.
*/
	
	return 0;
}
  
