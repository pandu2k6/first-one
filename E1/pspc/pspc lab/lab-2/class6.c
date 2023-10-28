/*#include <stdio.h>
int main(){
    char a;
    for(a=65;a<=122;a++){
        if(a>90 && a<97)
            continue;
        printf("[%d-%c]",a,a);
        
    }
    return 0;
}*/


/*#include <stdio.h>
int main(){
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=a*-1;
    printf("%d\n",b);
    return 0;

}*/


/*#include <stdio.h>
int main(){
    int i,a,b,j,k;
    printf("enter how many numbers");
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        printf("how many histograms");
        scanf("%d",&b);
        for(j=1;j<=b;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}*/



/*#include <stdio.h>
#include <math.h>
int main(){
    int a,i,count;
    printf("enter a range");
    scanf("%d",&a);
    printf("perfect even squares\n");
    for(i=1;i<=a;i++){
        if(i%2==0){
            count=i*i;
            printf(" %d*%d=%d\n",i,i,count);
        }
    }
    printf("perfect odd squares\n");
    for(i=1;i<=a;i++){
        if(i%2!=0){
            count=i*i;
            printf("%d*%d=%d\n",i,i,count);
        }
    }
    return 0;
}*/




#include <stdio.h>
int main(){
    int x=10;
    int y=20;
    int z=30;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%u\n",&x);
    printf("%u\n",&y);
    printf("%u\n",&z);
    return 0;        
}