#include<stdio.h>

int sub(int,int);

int sub(int a,int b){

    int ans;
    ans=a/b;
    return ans;
}
  int main(){
    
    int ans;
    int a=500;
    int b=250;

    ans=sub(a,b);

    printf("ans is:%d\n",ans);
  }
