/*#include <stdio.h>
int fun(int n){
    if(n==1)
        return 1;
    else
        return 1+fun(n-1);
}
int fun(int n){
    if(n==0)
        return 1;
    else
        return 1+fun(n-1);
}
int main(){
    int n=3;
    printf("%d\n",fun(n));
    printf("%d",fun(n));
    return 0;
}*/



#include<stdio.h>
struct student{
    int id;
    char name[20];
    int marks;
}

main(){
    void print(struct student);
    printf("id no :");
    scanf("%d",&s1.id);
    printf("name :");
    scanf("%s",s1.name);
    printf("marks :");
    scanf("%d",s1.marks);
}