#include<stdio.h>
int f(int i){
    
    if(i<=5){
        printf("%d",i);
        f(i+1);
    }
    return 0;
}
int main(){
    int i=1;
    f(i);
    return 0;
}