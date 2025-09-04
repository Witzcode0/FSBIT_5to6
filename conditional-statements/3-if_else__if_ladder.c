#include <stdio.h>

int main() {
    
    // if_else if ladder statments
    // syntax:
    // if (condition-1){
        // block of code
    // } else if(condition-2){
        // block of code
    // }else if(condition-3){
        // block of code
    // }....
    //else{
        // block of code
    // }
    
    int score;
    
    printf("Enter your score: ");
    scanf("%d", &score);
    
    if((score >= 0) && (score <= 100)){
        printf("Valid score!!!\n");
        if(score >= 80){
            printf("Class A");
        }else if(score >= 60){
            printf("Class B");
        }else if(score >= 40){
            printf("Class C");
        }else{
            printf("Sorry, you are not elegible for class 10th");
        }
    }else{
        printf("Invalid score!!!");
    }
    
    
    
    return 0;
}