#include<stdio.h>

// Function declaration: add two integers and return the result
int add(int,int);

// Function definition: adds two integers and returns the result
int add(int A, int B){

    int sum;
    sum=A+B;
    return sum;
}

int main()
{
   int A; // Variable to hold the first integer
   int B; // Variable to hold the second integer
   int sum; // Variable to hold the sum of A and B
  
   A=500; // Assigning a value of 500 to A
   B=1000; // Assigning a value of 1000 to B

   // Call the add function with A and B as arguments, store the result in sum
   sum=add(A,B);

   // Print the result
   printf("Addition is:%d\n",sum);

   return 0; // Indicate successful completion of the program
}
