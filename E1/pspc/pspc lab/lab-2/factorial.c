#include <stdio.h>
int main(){
    int a,i,j=1;
    printf("enter a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        j=j*i;
    }
    printf("factorial of given number %d:%d",a,j);
}