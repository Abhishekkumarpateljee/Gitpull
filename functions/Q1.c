//WAP TO TAKE TWO USER INPUT FROM USER AND CALCULAT THE POWER OF GIVEN NO USING FUNCTION CALLLED POWER :
#include<stdio.h>
int power(int a,int b);
int power(int a ,int b){
   int  p=1,i=1;
   while(i<=b){
    p=p*a;
    i++;
   }
  return p;
}
int main(){
    int x;
    printf("enter your base:");
    
    scanf("%d",&x);
    int y;
    printf("enter your power:");

    scanf("%d",&y);

    power(x,y);

    printf("%d",power(x,y));
}
