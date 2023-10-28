#include <stdio.h>
int main(){
    int a;
    printf("enter a number to check");
    scanf("%d",&a);
    if(a>=1){
        printf("it is +ve");
    }
    else if(a<=-1){
        printf("it is -ve");
    }
    else{
        printf("zero");
    }
    return 0;
}