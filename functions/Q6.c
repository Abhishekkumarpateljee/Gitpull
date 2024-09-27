#include<stdio.h>
int factorial(int no){
    while(no>0){
        int rem=no%10;
        int fact=1,i=1;
        while(i<=rem){
          fact=fact*i;
          i++;
        }
        return fact;
        no=no/10;
    }
}
int strongno(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        int digit=temp%10;
        sum=sum+factorial(digit);
        temp=temp/10;
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }

}
int main() {
    int n;
    printf("enter your no:");
    scanf("%d",&n);
    if(strongno(n)){
        printf("%d is strong no",n);
    }
    else{
printf("%d is not strong no",n);
    }
}