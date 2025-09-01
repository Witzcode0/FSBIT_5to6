#include<stdio.h>

// global declaration
const float PI = 3.14;

void main(){
    float area_of_circle;
    int r = 10;

    // PI = 100; // read-only: You can not update constant values

    area_of_circle = PI * r * r;
    printf("Area of Circle is : %.2f", area_of_circle);


}
