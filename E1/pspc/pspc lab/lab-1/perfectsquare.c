#include <stdio.h>
int main(){
    int a,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a==i*i){
            printf("it is perfect number");
        }
    }
    return 0;
}