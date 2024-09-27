#include<stdio.h>
int isprime(int no){
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
    return 0;
}
int main(){
    int no1;
    printf("enter your no:");
    scanf("%d",&no1);
    int no2;
    printf("enter your second no:");
    scanf("%d",&no2);
    for(int i=no1;i<=no2;i++){
      if( isprime(i)){
        printf("%d",i);
      }
    
    }
    return 0;
}