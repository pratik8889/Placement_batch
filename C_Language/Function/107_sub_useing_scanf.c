#include<stdio.h>

int sub(int,int);

int sub(int a,int b){

    int ans;
    ans=a-b;
    return ans;
}
  int main(){
    
    int ans;
    int a,b;

    printf("enter your no a & \n b:");
    scanf("%d%d",&a,&b);

    ans=sub(a,b);

    printf("ans is:%d\n",ans);

    return ans;
  }
