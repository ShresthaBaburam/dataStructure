#include<stdio.h>
#include<conio.h>

int Maxsize = 10;      
int Stack[10];     
int Top = -1;
/*
What is a Stack?
	A Stack is a linear data structure that follows the LIFO (Last-In-First-Out) principle. 
	Stack has one end, whereas the Queue has two ends (front and rear). 
	It contains only one pointer top pointer pointing to the topmost element of the stack. 
	Whenever an element is added in the stack, it is added on the top of the stack, 
	and the element can be deleted only from the stack. 
	In other words, a stack can be defined as a container in which insertion and 
	deletion can be done from the one end known as the top of the stack.

Some key points related to stack
	>It is called as stack because it behaves like a real-world stack, piles of books, etc.
	
	>A Stack is an abstract data type with a pre-defined capacity, 
	which means that it can store the elements of a limited size.
	
	>It is a data structure that follows some order to insert and delete the elements, 
	and that order can be LIFO or FILO.
	
Working of Stack
	>Stack works on the LIFO pattern. 
	As we can observe in the below figure there are five memory blocks in the stack; 
	therefore, the size of the stack is 5.
	
	>Suppose we want to store the elements in a stack and let's assume that stack is empty. 
	We have taken the stack of size 5 as shown below in which we are pushing 
	the elements one by one until the stack becomes full.
	
	>Since our stack is full as the size of the stack is 5. In the above cases, we can observe that it goes from the top to the bottom when we were entering the new element in the stack. The stack gets filled up from the bottom to the top.
	
	>When we perform the delete operation on the stack,
	there is only one way for entry and exit as the other end is closed. 
	It follows the LIFO pattern, which means that the value entered first will be removed last. 
	In the above case, the value 5 is entered first, 
	so it will be removed only after the deletion of all the other elements.
*/
/*

Standard Stack Operations
	
	push(): 
		When we insert an element in a stack then the operation is known as a push. 
		If the stack is full then the overflow condition occurs.
		
		The steps involved in the PUSH operation:
			>Before inserting an element in a stack, we check whether the stack is full.
			>If we try to insert the element in a stack, and the stack is full, then the overflow condition occurs.
			>When we initialize a stack, we set the value of top as -1 to check that the stack is empty.
			>When the new element is pushed in a stack, first, the value of the top gets incremented, i.e., top=top+1, and the element will be placed at the new position of the top.
			>The elements will be inserted until we reach the max size of the stack.
*/
int Push(int data){
	if(!Is_Full()){
    	Top = Top + 1;   
    	Stack[Top] = data;
	} 
	else{
    	printf("Stack is Overflow.\n");
	}
}

/*
	pop(): 
		When we delete an element from the stack, the operation is known as a pop. 
		If the stack is empty means that no element exists in the stack, 
		this state is known as an underflow state.
		
		The steps involved in the POP operation:
			>Before deleting the element from the stack, we check whether the stack is empty.
			>If we try to delete the element from the empty stack, then the underflow condition occurs.
			>If the stack is not empty, we first access the element which is pointed by the top
			>Once the pop operation is performed, the top is decremented by 1, i.e., top=top-1.
*/
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

/*			
	isEmpty(): 
		 determines whether the stack is empty or not.
*/

int Is_Empty() {

   if(Top == -1)
      return 1;
   else
      return 0;
}
   
/*
		 
	isFull(): 
		It determines whether the stack is full or not.'
*/
int Is_Full() {

   if(Top == Maxsize)
      return 1;
   else
      return 0;
}
/*	
	peek(): 
		It returns the element at the given position.
*/
int Peek(int n){
	if(!Is_Empty()){ // calling the Is_Empty() function
		printf("Stack have value at index %d=%d\n",n,Stack[n-1]);
		return ;
	}
	else{
		printf("Stack Underflow\n");
		return;
	}
}
 
	
/*	
	count(): 
		It returns the total number of elements available in a stack.
*/
int Count(){
	if(!Is_Empty()){ // calling the Is_Empty() function
		int i =0,data[10];
		while(!Is_Empty()){ // calling the Is_Empty() function
    		data[i] = Pop(); // calling Pop() function
    		i++;	
		}
		printf("The Length of Stack=%d\n",i);
		i--;
		while(i>=0){
			Push(data[i]);
			i--;
		}
		return ;
	}
	else{
		printf("Stack Underflow\n");
		return;
	}
}
	
/*	
	change(): 
		It changes the element at the given position.
*/
int Change(int n,int val){
	if(!Is_Empty()){ // calling the Is_Empty() function
		printf("The Old Elements is:%d\n",Stack[n-1]);
		Stack[n-1]=val;
		printf("The Changed Elements is:%d\n",Stack[n-1]);
		return ;
	}
	else{
		printf("Stack Underflow\n");
		return;
	}
}
	
/*	
	display(): 
		It prints all the elements available in the stack.

*/
int Display(){
	if(!Is_Empty()){ // calling the Is_Empty() function
		int i =0,data[Maxsize];
		printf("Stack Elements are:\n");
		while(!Is_Empty()){ // calling the Is_Empty() function
    		data[i] = Pop(); // calling Pop() function
    		printf("%d\n",data[i]);
    		i++;	
		}
		i--;
		while(i>=0){
			Push(data[i]);
			i--;
		}
		return ;
	}
	else{
		printf("Stack Underflow\n");
		return;
	}
}

int main(){
	int j=0;
	while(!Is_Full()){ // calling the Is_Full() function	
    	Push(j); // calling Push() function
    	printf("%d\n", j);
    	j++;
   	}
   	
   	Count(); // calling the Count() function
   	
   	Change(4,34); // calling the Change() function
   	
   	Display(); // calling the Display() function
   	
   	Peek(8); // calling the Peek() function
   	
   	printf("The Poped Elements are:\n");
   	
	while(!Is_Empty()){ // calling the Is_Empty() function
    	int data = Pop(); // calling Pop() function
    	printf("%d\n",data);
	}
	
	Peek(8); // calling the Peek() function
	
	printf("Stack full: %s\n" , Is_Full()?"true":"false"); // calling the Is_Full() function
	printf("Stack empty: %s\n" , Is_Empty()?"true":"false"); // calling the Is_Empty() function
   
	return 0;
	
}
/*
Applications of Stack
	
	Balancing of symbols: 
		Stack is used for balancing a symbol.
		
	String reversal: 
		Stack is also used for reversing a string. 
		
	UNDO/REDO: 
		It can also be used for performing UNDO/REDO operations. 
		
	Recursion: 
		The recursion means that the function is calling itself again.
		 
	DFS(Depth First Search): 
		This search is implemented on a Graph, and Graph uses the stack data structure.
		
	Backtracking: 
		Suppose we have to create a path to solve a maze problem. 
		If we are moving in a particular path, and we realize that we come on the wrong way. 
		In order to come at the beginning of the path to create a new path, 
		we have to use the stack data structure.
	
	Expression conversion: 
		Stack can also be used for expression conversion. 
		This is one of the most important applications of stack. 
		The list of the expression conversion is given below:
			Infix to prefix
			Infix to postfix
			Prefix to infix
			Prefix to postfix
			Postfix to infix
	Memory management: 
		The stack manages the memory. 
		The memory is assigned in the contiguous memory blocks. 
		The memory is known as stack memory as all the variables are assigned in a function call stack memory. 
		The memory size assigned to the program is known to the compiler. 
		When the function is created, all its variables are assigned in the stack memory. 
		When the function completed its execution, all the variables assigned in the stack are released.
*/
