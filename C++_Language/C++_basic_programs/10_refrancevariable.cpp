#include<iostream>
using namespace std ;
 
 int main () 
              {
                int a=500 ;

                int & b = a ; //  the b is value of a 

                cout<< "value of a: " << a <<endl; 
                cout<< "value of b: " << b <<endl; 
            
             return 0 ; 
              }