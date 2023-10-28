#include <stdio.h>
#include <math.h>
int main(){
    int a,b,input;
    printf("enter two numbers");
    scanf("%d,%d",&a,&b);
    printf("1.add\n 2.sub\n 3.div \n 4.mult\n5.module");
    scanf("%d",&input);
    switch(input){
        case 1:
            printf("%d",a+b);
            break;
    
        case 2:
            printf("%d",a-b);
            break;

        case 3:
            printf("%d",a/b);
            break;

        case 4:
            printf("%d",a*b);
            break;

        case 5:
            printf("%d",a%b);
            break;
    }
    return 0;
}
