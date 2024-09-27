#include<stdio.h>
int count(int no);
int count(int no){
    int c=0;
    while(no>0){
        c++;
        no=no/10;
    }
    return c;
}
int main(){
    int num;
    printf("ENTER YOUR NO:");
    scanf("%d",&num);
    
    count(num);
    printf("%d",count(num));
}