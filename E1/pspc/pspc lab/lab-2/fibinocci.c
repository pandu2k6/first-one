#include <stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("enter a numebr");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}