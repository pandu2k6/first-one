/*#include<stdio.h>
#define size 5
struct student{
    int id;
    char name[20];
    int marks;
}

main(){
    int s1;
    struct student s[5];
    void printf(struct student s1);
    printf("id no :");
    scanf("%d",&s1.id);
    printf("name :");
    scanf("%s",s1.name);
    printf("marks :");
    scanf("%d",s1.marks);
}*/


#include<stdio.h>
void main(){
    char name[15];
    fgets(name);
    printf("name of the candidate = %s",name);
}