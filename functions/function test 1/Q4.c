#include<stdio.h>
int sumdigit(int no){
int rem,sum=0;
while(no>0){
    rem=no%10;
    sum=sum+rem;
    if(sum>10){

    }
no=no/10;
}


}
int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);
    printf("%d",sumdigit(no));
    return 0;
}