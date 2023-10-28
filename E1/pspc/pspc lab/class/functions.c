#include <stdio.h>
int add(int z,int x){
    return z+x;
}

int main(){
    int a;
    int b;
    printf("enter a number");
    scanf("a is %d\n",&a);
    printf("enter a number");
    scanf("b is %d",&b); 
    int sum = add(a,b);
    printf("the sum of the given numbers is %d",sum);
    return 0;
}