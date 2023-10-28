#include <stdio.h>
void convertToWords(int num) {
    if (num < 0) {
        printf("Please enter a non-negative number.");
        return;
    }
    if (num == 0) {
        printf("zero");
        return;
    }
    int thousand = num / 1000;
    int hun = (num / 100)%10;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    if(thousand>0){
        switch(thousand){
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;     
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;                                           
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;                
            case 7:
                printf("seven ");
                break;        
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;        
        }
        printf("thousand");
    }
    if (hun > 0) {
        switch (hun) {
            case 1:
                printf(" one ");
                break;
            case 2:
                printf(" two ");
                break;     
            case 3:
                printf(" three ");
                break;
            case 4:
                printf(" four ");
                break;                                            
            case 5:
                printf(" five ");
                break;
            case 6:
                printf(" six ");
                break;                
            case 7:
                printf(" seven ");
                break;        
            case 8:
                printf(" eight ");
                break;
            case 9:
                printf(" nine ");
                break;  
        }
            printf("hundred");
    }
    if (tens > 0) {
        if (tens == 1) {
            switch (ones) {
            case 1:
                printf(" eleven");
                break;
            case 2:
                printf(" twelve");
                break;     
            case 3:
                printf(" thirteen");
                break;
            case 4:
                printf(" fourteen");
                break;                                           
            case 5:
                printf(" fifteen");
                break;
            case 6:
                printf(" sixteen");
                break;                
            case 7:
                printf(" seventeen");
                break;        
            case 8:
                printf(" eighteen");
                break;
            case 9:
                printf(" nineteen");
                break;
            }
            return;
        } 
        else {
            switch (tens) {
            case 1:
                printf(" ten");
                break;
            case 2:
                printf(" twenty");
                break;     
            case 3:
                printf(" thirty");
                break;
            case 4:
                printf(" forty");
                break;                                           
            case 5:
                printf(" fifty");
                break;
            case 6:
                printf(" sixty");
                break;                
            case 7:
                printf(" seventy");
                break;        
            case 8:
                printf(" eighty");
                break;
            case 9:
                printf(" ninety");
                break;
            }
        }
    }
    if (ones > 0) {
        switch (ones) 
        {
            case 1:
                scanf(" one");
                break;
            case 2:
                printf(" two");
                break;      
            case 3:
                printf(" three");
                break;
            case 4:
                printf(" four");
                break;                                           
            case 5:
                printf(" five");
                break;
            case 6:
                printf(" six");
                break;                
            case 7:
                printf(" seven");
                break;        
            case 8:
                printf(" eight");
                break;
            case 9:
                printf(" nine");
                break;
            case 10:
                printf("ten");
                break;     
        }
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Number in words: ");
    convertToWords(number);
    return 0;
}




