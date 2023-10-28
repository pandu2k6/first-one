# include<stdio.h>
# include<math.h>
void main()
{
    int b,a,len=0,n,sys,re,one,te;
    char* num[] = {"one","two","three","four","five","six","seven","eight","nine"};
    char* ten[] = {"ten","eleven","twele","therteen","fourteen","fifteen","sixteen","seventenn","eighteen","ninteen"};
    char* ty[] = {"","twenty","therty","fourty","fifty","sixty","seventy","eight","ninty"};
    char* ind[] = {"hunder","thousend","lackh","crore"};
    char* forg[] = {"hunder","thousend","million","billion","trilion"};
    printf("enter a number : -\n");
    scanf("%d",&a);
    b=a;
    printf("choose a option for number system enter the option number \n1) INDIA \n2) FORIGEN");
    scanf("%d",&sys);
    while(a>0)
    {
        a/=10;
        len+=1;
    }
    while(b>0){
        if (sys == 1){
            if (len%2 != 0){
                if (len !=3){len -= 2;}
                n = pow(10,9);
                te = n/10;
                one = n%10;
                printf("%s",ten[te]);
                printf("%s",num[one]);
                printf("%s",ind[len/2]);
            }
        }
        b = b%n;
    }
}