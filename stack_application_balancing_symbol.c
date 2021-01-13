#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
Applications of Stack
	
	Balancing of symbols: 
		Stack is used for balancing a symbol.
		
Algorithm
	Step 1: Start
	Step 2: Read the expression
	Step 3: Scan every character of expression  If scanned character is
	        3.1: any open symbol like ( , {, [ then   push it onto the stack
	        3.2: any closed symbol then
	            3.2.1 if stack is empty then invalid expression
	            3.2.2 else  pop the top most element of stack
	                if the symbol popped is not the corresponding opening symbol, then invalid expression
	Step 4: If stack is not empty then invalid expression
	Step 5: Stop
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
	char exp[10],temp;
	int i, flag=1;
	printf("Enter an expression : ");
	gets(exp);
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
    		Push(exp[i]);
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
			if(Top == -1){
    			flag=0; 
				break;
			}
			else{
				temp=Pop();
					if(exp[i]==')' && (temp=='{' || temp=='['))
						flag=0;
					if(exp[i]=='}' && (temp=='(' || temp=='['))
						flag=0;
					if(exp[i]==']' && (temp=='(' || temp=='{'))
						flag=0;
			}
	}
	if(Top>=0)
        flag=0;
	if(flag==1)
		printf("\n Valid expression");
	else
		printf("\n Invalid expression");
	return 0;
	
}

