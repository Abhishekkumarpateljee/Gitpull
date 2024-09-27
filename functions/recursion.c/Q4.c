#include<stdio.h>
int factorial(int n){
    int i=1;
    if(n==0){
    return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int no;
    printf("Enter Your No:");
    scanf("%d",&no);
     factorial(no);
     printf("%d",factorial(no));
    return 0;
}