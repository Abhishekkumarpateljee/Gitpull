#include<stdio.h>
int count(int n){
int countofdigit=0;
while(n>0){
    n=n/10;
countofdigit++;
}
return countofdigit;
}
int power(int a,int b){
    int result =1;
    for(int i=1;i<=b;i++){
    result=result*a;
    }
    return result ;
}
int isarmstrongno(int n){
    int nod=count(n);
    int temp=n;
    int sum =0;
    while(temp>0){
        int digit=temp%10;
        sum =sum+power(digit,nod);
           temp=temp/10;
    }
    if(sum==n){
   return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter ypur no:");
    scanf("%d",&n);
    if(isarmstrongno(n)){
        printf("%d no is armstrong no",n);
    }
    else{
        printf(" %d id not an arstrong no",n);
    }

}