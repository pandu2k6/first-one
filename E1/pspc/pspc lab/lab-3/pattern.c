#include <stdio.h>
int main(){
    int a,i,j,k,l;
    printf("enter");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("*");
        }
        for(l=0;l<i-1;l++){
            printf("*");
        }
        printf("\n");
    }
    int m,n,o,p;
    for (m=0;m<a;m++){
        for(n=0;n<m;n++){
            printf(" ");
        }
        for(o=0;o<(a-m)-1;o++){
            printf("*");
        }
        for (p=0;p<(a-m);p++){
            printf("*");
        }
        printf("\n");
    }
}