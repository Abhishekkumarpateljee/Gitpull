#include<stdio.h>
    
void factorial(int no){
    int i=1,fact=1;
    while(i<=no){
        fact=fact*i;
        i++;
    }
    printf("fact of odd is %d,",fact);
}


int main(){
    int no;
    printf("enter your no:");
    scanf("%d",&no);

    while(no>0){
        
        printf("enter your no:");
        scanf("%d",&no);
        if(no%2!=0 ){
        factorial(no);

        }
        }
        return 0;
    
    }
