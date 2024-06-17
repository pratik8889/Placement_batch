#include<iostream>
using namespace std ; 

 int c = 45 ; 

int main() {
      
      int a , b , c ; // local variable

      cout<<"enter num1 :  " << endl ; 
      cin>>a;

      cout<<"enter num2 :  " << endl ; 
      cin>>b;

      c=a+b;

      cout<<"The sum of a & b is : " << c << endl ; // function prefer local variable and output is value of c 
      cout<<"value of globle  c :" << ::c <<endl ; // help of scope resolution oprator we print globle variable 



}