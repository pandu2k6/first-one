/*#include <stdio.h>
int main(){
    int x=11;
    int y=22;
    int z=33;
    int *a=&x;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%u\n",&x);
    printf("%u\n",&y);
    printf("%u\n",&z);
    printf("%u\n",a);
    return 0;        
}*/



/*#include <stdio.h>
int main(){
    float a=23.5;
    float b=23.5;
    float c=a+b;
    printf("%f",c);
    return 0;
}*/



/*#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf("\n\n Pointer : Store and retrieve elements from an array :\n"); 
   printf("------------------------------------------------------------\n");    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i);
	  scanf("%d",arr1+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %u \n",i,*(arr1+i));
	  }
	   return 0;
}*/



/*#include <stdio.h>
int calculateLength(char*);
 
void main() 
{
    char str1[25];
    int l;
    printf(" Input a string : ");
    gets(str1);
    l = calculateLength(str1);
    printf(" The length of the given string %s is : %d ", str1, l);
}
 
int calculateLength(char* ch) // ch = base address of array str1 ( &str1[0]  )
{
   int ctr = 0;
   while (*ch != '\0') 
   {
      ctr++;
      ch++;
   }
   return ctr;
}*/



/*#include <stdio.h>
int mul(int a,int b){
    int z;
    z=a*b;
    return (z);
}
int divi(int a,int b){
    int z=a/b;
    return (z);
}
int main(){
    int a;
    int b;
    int d;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    int c =mul(a,b);
    printf("%d\n",c);
    d=divi(a,b);
    printf("%d",d);
}*/



/*#include<stdio.h>
#include <string.h>
struct student{
    int age;
    char name[30];

};
int main(){
    struct student s1={34,"krishna"};
    printf("name of the student : %s\n",s1.name);
    printf("age of the student : %d\n",s1.age);
}*/

/*#include<stdio.h>
//#include <string.h>
struct student{
    int i;
    char c;

};
int main(){
struct student x,y;
struct student s1={44,"world"};
struct student s2={55,"hello"};
printf("i of the student is : %d\n",s1.i);
printf("c of the student is : %s\n",s1.c);
printf("i of the student is : %d\n",s1.i);
printf("c of the student is : %s\n",s1.c);
}*/



/*#include<stdio.h>
#include <string.h>
struct man{
    int age;
    char name[100];
    float salary;
};
int main(){
struct man x={34,"mohan",65000.75};
printf("name of the person is : %s\n",x.name);
printf("name of the person is : %d\n",x.age);
printf("name of the person is : %f\n",x.salary);
}*/


#include <stdio.h>
#include <string.h>
union value{
    char i[20];
    char j[30];
};
int main(){
union value abc={"123","1222"};
printf("%s\n",abc.i);
printf("%s\n",abc.j);
}

