#include<iostream>
using namespace std; 
int main(){

      int age=0;
      cout<<"Enter your age :"<<age<< endl;
      cin>>age;

      if(age<18){
           
            cout<<"you can come to my party"<<endl;


      } 
      else if(age==18){
           
           cout<<"You will get an kid pass for my party"<<endl;


      }

      else{
        cout<<"you canot come to my party"<<endl ; 
      }

    return 0;
}