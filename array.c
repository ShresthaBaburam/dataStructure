#include<stdio.h>
int main(){
    int i, n , m;
/*
Arrays
    Arrays are defined as the collection of similar type of data items stored 
    at contiguous memory locations.
    Arrays are the derived data type in C programming language which can store 
    the primitive type of data such as int, char, double, float, etc.
    Array is the simplest data structure where each data element can be randomly accessed 

Properties
    Each element is of same data type and carries a same size i.e. int = 4 bytes.
    Elements of the array are stored at contiguous memory locations where 
    the first element is stored at the smallest memory location.
    Elements of the array can be randomly accessed since we can calculate  the address of 
    each element of the array with the given base address and the size of data element.

The syntax of declaring an array 
    int arr[10]; 
    char arr[10]; 
    float arr[5];
*/

// Array declaration by specifying size n
    printf("Enter the size of the array(n):");
    scanf("%d",&n);
    int math[n];
    for(i=0; i<n;i++){
        printf("Enter the number in maths of [%d] Student:",i+1);
        scanf("%d",&math[i]);
    }

// Array declaration by specifying size
    int science[5];
    for(i=0; i<5;i++){
        printf("Enter the number in science of [%d] Student:", i+1);
        scanf("%d",&science[i]);
    }

// Array declaration by specifying size and value
    int geology[10] = {53,6,4,67,4,52,32,14, 23, 52};

// Array declaration by specifying without size and value
    printf("Enter the size of the array(m):");
    scanf("%d",&m);
    int social[m];
    for(i=0; i<m;i++){
        printf("Enter the number in Social of [%d] Student:",i+1);
        scanf("%d",&science[i]);
    }

/*
Need of using Array
    The most of the cases requires to store the large number of data of similar type. 
    To store such amount of data, we need to define a large number of variables. 
    It would be very difficult to remember names of all the variables while writing the programs. Instead of naming all the variables with a different name, it is better to define an array and store all the elements into it.

Advantages of Array
    Array provides the single name for the group of variables of the same type therefore, 
    it is easy to remember the name of all the elements of an array.
    Traversing an array is a very simple process, we just need to increment 
    the base address of the array in order to visit each element one by one.
    Any element in the array can be directly accessed by using the index.
    Use of less line of code as it creates a single array of multiple elements.
    Sorting becomes easy as it can be accomplished by writing less line of code.

Disadvantages of an Array 
    Allows a fixed number of elements to be entered which is decided at the time of declaration.
    Unlike a linked list, an array in C is not dynamic.
    Insertion and deletion of elements can be costly 
    since the elements are needed to be managed in accordance with the new memory allocation.
*/

//Accessing Array Elements
    printf("%d,%d,%d,%d,%d", math[0],math[1],math[2], math[3],math[4],math[5]);
    for(i=0; i<10;i++){
        printf("%d\n", science[i+1]);
    }

//Array as the argument
    printf("%d",average_math(n, math[n]));
    return 0;
}

int average_math(int a, int math_number[a]){
    int i, average_marks=0;
    for(i=0; i<a;i++){
        average_marks += math_number[i];
    }
    average_marks /=a;
    return average_marks;
}
