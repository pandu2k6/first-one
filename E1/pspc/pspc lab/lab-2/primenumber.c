#include <stdio.h>
int main(){
    int a,i,x;
    printf("etner a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            x++;
        }
    }
    if(x==2){
        printf("it is prime number");
    }
}