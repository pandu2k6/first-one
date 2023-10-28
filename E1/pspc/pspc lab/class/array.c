// sum of elements in an array
/*#include <stdio.h>
int main(){
    int sum,i,a[4]={1,2,3,4};
    for(i=0;i<4;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}*/

// collecting a group of numbers in an array and printing it
/*#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter a size");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++){
        printf("enter a number to array");
        scanf("%d",&a[i]);
    }
    printf("%ls",a);
    return 0;
}*/

#include<stdio.h>
#include<string.h>
void main(){
    char a[10]="1234567";
    int i,l;
    char c;
    l=strlen(a);
    for(i=l-1;i>=0;i--){
        //c=a[i];
        //a[i]=a[l-3+i];
        //a[l-3+i]=c;
        //printf("%c",a[i]);
    }
    printf("%s",a);
}


/*#include<stdio.h>
#include <string.h>
void main(){
char a[]="hello";
char b[]="Hello";
int i,flag,l1,l2;
l1=strlen(a);
l2=strlen(b);
if(l1==l2){
for(i=0;i<l1;i++){
    if(a[i]!=b[i]){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("not same");
}
else{
    printf("same");
}
}
else{
    printf("not same");
}
}*/
