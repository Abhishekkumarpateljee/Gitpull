#include<stdio.h>
int rf(int i);
   int rf(int i){
    if(i<=5){
        printf("%d\n",i);
        rf(i+1);
    }
    return 0;
}
int main(){
    int i=1;
    rf(i);
    return 0;
}