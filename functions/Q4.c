#include<stdio.h> 
int  primeno(int no){
   int i=2;
while(no>0){
   if(no%i==0){
   return 0;
   break;
}
i++;
   if(no==i){
      return 1;
   }
}
}
int main(){
   int n;
   printf("enter your no:");
   scanf("%d",&n);
   primeno(n);
   printf("%d",primeno(n));
return 0;
}