#include<iostream>
using namespace std;

int main()
{
     int age; 

       cout<<"Enter your age:"<<endl;
       cin>>age;

       switch (age)
       {
       case  18:
          
              cout<<"you are eligiable: "<<endl;
        
        break;

          case 22:
            
              cout<<" you are not eligiable"<<endl;
            
             break;
       
       default:
                     cout<<"No value matched"<<endl;
          
        break;
       }

} 
