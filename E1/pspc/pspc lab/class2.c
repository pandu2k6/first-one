#include<stdio.h>
/*int main(){
    int a=5;
    printf("a=%d\n",a);
    printf("a=%d\n",a++);
    printf("a=%d\n",a);
    printf("a=%d\n",a--);
    printf("a=%d\n",a);
}*/

/*void main(){
int a=3;
int b=++a + a++ + --a;
printf("%d\n",++a);
printf("%d\n",a++);
printf("%d\n",--a);
printf("%d",b);
}*/

/*int main()
{
    int a = 10;
    printf("a = %d\n",a);
    printf("a = %d\n",++a);
    printf("a = %d\n",a);
    printf("a = %d\n",++a);
    printf("a = %d\n",++a);
    printf("a = %d\n",++a + ++a);
    printf("a = %d\n",++a + ++a);
    //printf("a = %d\n",a);

} */


/*int main(){
    int a,b,c,d,e,f;
    printf("enter a angle of triangle");
    scanf("%d",&a);
    printf("enter a angle of triangle");
    scanf("%d",&b);
    printf("enter a angle of triangle");
    scanf("%d",&c);
    printf("enter a angle of triangle");
    scanf("%d",&d); 
    printf("enter a angle of triangle");
    scanf("%d",&e);    
    f=360-a-b-c-d-e;
    printf("last side of triangle is : %d",f);          
}*/



/*int main(){
    int a,b,c,d;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    printf("enter a number");
    scanf("%d",&c);
    d=a*b*c;
    printf("priduct of %d,%d and %d is : %d",a,b,c,d);    
}*/



/*int main(){
    int a,b,c,d,e,f,g;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    c=a%10;
    d=b%10;
    g=(c*c)+(d*d);
    printf("their units digits square is : %d",g);
}*/


/*void main(){
   // clrscr();
    int x=10;
    int *a,*b;
    a=&x;
    printf("\n address of x=%ls",a);
    printf("\n address of x=%ls",b);
}*/


int fun(){
    if(n==1){
        return 1;
    }
    else{
        return 1+fun(n-1);
    }
}
    int main(){
        int n=3;
        printf("%d",fun(n));
        return 0;
    }