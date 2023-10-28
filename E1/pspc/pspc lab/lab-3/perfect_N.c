#include <stdio.h>
int main(){
    int n,sum,num=1;
    printf("enter");
    scanf("%d",&n);
    int i=0;
    while(i<n){
        sum=0;
        for(int j=1;j<num;j++){
            if(num%j==0){ 
            sum+=j;
            }
        }
        if(sum==num){
            printf("%d ",num);
            i++;
        }        
        num++;
    }
    printf("\n");
    return 0;
    }