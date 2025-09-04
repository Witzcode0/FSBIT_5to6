#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if(age >= 18){
        float weight;
        printf("Enter your weight: ");
        scanf("%f", &weight);
        if(weight >= 50){
            printf("You can donate");
        }else{
            printf("You can not donate");
        }
    }else{
        printf("You can not donate");
    }
    
    return 0;
}