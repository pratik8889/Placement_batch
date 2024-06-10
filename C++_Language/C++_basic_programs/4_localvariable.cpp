#include<iostream>

using namespace std ;

  int globle = 100 ; // globle variable 
   void sum()
   {
     int a ; 
   }
 
 int main(){
    
    // local variales

    int a = 15 ;
    int b = 18 ;
    char pratik = 'P';
    float s = 3.26 ; 
    sum();

    cout<< "value of a is : " << a << "\nvalue of b is: " << b ;  // printing integer values
    cout<< "\nfirst latter of pratik is : "<<  pratik ; // printing charecter
    cout << " \nvalue of float is : " << s ;  // printing float value

     cout<<globle << endl ;
    return 0 ;
 }