//left angle triangle
/*#include <stdio.h>
int main(){
    int a,i,j;
    printf("enter");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
//reverse left angle triangle
/*#include <stdio.h>
int main(){
    int a,i,j,k;
    printf("enter");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<a-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
//right angle triangle
/*#include <stdio.h>
int main(){
    int a,i,j,k;
    printf("etner");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<a-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

//reverse right angle triangle
/*#include <stdio.h>
int main(){
    int a,i,j,k;
    printf("enter");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=0;k<=a-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

//diamond pattern
/*#include <stdio.h>
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
    return 0;
}*/


//different diamond pattern
/*#include <stdio.h>
int main(){
    int a,i,j,k,l;
    printf("enter");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<a-i;j++){
            printf(" ");
        }
        for(l=0;l<=i;l++){
            printf("* ");
        }
        printf("\n");
    }
    int m,n,o,p;
    for (m=0;m<a;m++){
        for(n=0;n<m;n++){
            printf(" ");
        }
        for (p=1;p<a-m;p++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}*/




#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,rows,count;
    long x;
    printf("enter numebr of rows");
    scanf("%d",&rows);
    count=rows-1;
    for(i=0;i<rows;i++){
        x=1;
        for(k=0;k<=count;k++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("%6ld",x);
            x=(x*(i-j)/(j+1));
        }
        count--;
        printf("\n");
    }
    return 0;
}
