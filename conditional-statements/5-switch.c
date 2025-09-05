#include <stdio.h>

int main() {
    
    // syntax: switch statments
    // switch (<expreesion>){
    //     case val1:
    //          block of code;
    //          break;
    //     case val2:
    //          block of code;
    //          break
    //          ....
    //     default:
    //         block of code;
    // }
    
    // 0 - mon, 1 - tue, ....6-sun
    
    int day = 6;
    
    switch(day+1){
        case 1:
            printf("Today is Mon");
            break;
        case 2:
            printf("Today is Tue");
            break;
        case 3:
            printf("Today is Wed");
            break;
        case 4:
            printf("Today is Thu");
            break;
        case 5:
            printf("Today is Fri");
            break;
        case 6:
            printf("Today is Sat");
            break;
        case 7:
            printf("Today is Sun");
            break;
        default:
            printf("Invalid day");
    }
    return 0;
}