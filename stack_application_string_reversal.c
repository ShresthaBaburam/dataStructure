#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
Applications of Stack
	
	String reversal: 
		Stack is also used for reversing a string.
		

The logic behind to implement this program:
	Read a string.
	Push all characters until NULL is not found 
		-Characters will be stored in stack variable.
	Pop all characters until NULL is not found 
		-As we know stack is a LIFO technique, 
		so last character will be pushed first and finally we will get reversed string in 
		a variable in which we store inputted string
	
*/

int Maxsize = 10;      
int Stack[10];     
int Top = -1;

int Push(int data){
	if(!Is_Full()){
    	Top = Top + 1;   
    	Stack[Top] = data;
	} 
	else{
    	printf("Stack is Overflow.\n");
	}
}

int Pop(){
	int data;
	if(!Is_Empty()){
    	data = Stack[Top];
    	Top = Top - 1;  
    	return data;
	} 
	else{
    	printf("Stack is Underflow\n");
	}
}

int Is_Empty() {

   if(Top == -1)
      return 1;
   else
      return 0;
}
   
int Is_Full() {

   if(Top == Maxsize)
      return 1;
   else
      return 0;
}



int main(){
	char str[10];
    int i;
    
    printf("Input a string: ");
    gets(str);
    
    for(i=0;i<strlen(str);i++)
        Push(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=Pop();

    printf("Reversed String is: %s\n",str);
	return 0;
	
}

