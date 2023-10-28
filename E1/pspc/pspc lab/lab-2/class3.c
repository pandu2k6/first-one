#include<stdio.h>
#define size 5
 int main(){
    int i;
    int marks1[size];
    int marks2[size];
    int marks3[size];
    int marks4[size];
    int totalmarks[size];
    printf("marks of the first subject");
    for(i=0;i<size;i++){
        printf("enter the marks of %d student = ",i+1);
        scanf("%ls",marks1[i]);
    }
    printf("marks of second subject");
    for (i=0;i<size;i++){
        printf("enter the marks of %d student = ",i+1);
        scanf("%ls",marks2[i]);
    }
    printf("total marks of each student is = ");
    for (i=0;i<size;i++){
        totalmarks[i]=marks1[i]+marks2[i];
        printf("\n total marks of student=%ls",totalmarks);
    }
}