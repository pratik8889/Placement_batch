#include<iostream>

using namespace std ; 

int main () {
    
     
     int a = 5 , b = 6 ;

          cout<< "the process of && is : "<< ((a==b) && (a>b))<<endl; // logical and oprator

          a = 5 ; b = 5 ; // we  changed value of b 

          cout<< "the process of != is : "<< ((a==b)||(a!=b))<<endl;  // logical or oprator
           
           a = 5 ; b = 5 ;

           cout<<"the process of ! logical not oprator is : " << (!(a==b))<<endl ; // logical not 
           
     return 0 ;

}
