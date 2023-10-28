#include <stdio.h>
int main(){
    int a,x,i,z,num=0;
    printf("enter a number");
    scanf("%d",&a);
    x=a;
    for(i=1;i<=a;a=a/10){
        z=a%10;
        num=num*10+z;
    }
    if(x==num){
        printf("palindrome number.");
    }
    else{
        printf("not");
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int num , rem , rev = 0, temp ;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp =num ;
    while(num!=0)
    {
        rem = num % 10;
        rev = rev * 10 + rem ;
        num /= 10;
    }
    if (temp == rev)
    {
        printf("%d is a palindrome",temp);
    }
    else
        printf("%d is not a palindrome",temp);
    return 0;
}
*/