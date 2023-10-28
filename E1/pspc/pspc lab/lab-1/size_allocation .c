#include <stdio.h>
 int main(){
    printf("memory for int:%ld\n",sizeof(int));
    printf("memory for float:%ld\n",sizeof(float));
    printf("memory for char:%ld\n",sizeof(char));
    printf("memory for double:%ld\n",sizeof(double));
    printf("memory for void:%ld\n",sizeof(void));
    return 0;
}