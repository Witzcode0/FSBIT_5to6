#include <stdio.h>

int main() {
    
    // if statments
    // syntax:
    // if (condition){
        // block of code
    // }else{
        // block of code
    // }
    
    int bal = 1000;
    int withdrow;
    
    printf("Enter withdrow amount: ");
    scanf("%d", &withdrow);
    
    if (withdrow <= bal){
        printf("Now, your remaining balance is: %d", bal- withdrow);
    }else{
        printf("Sorry, insufficent balance.");
    }
    
    
    return 0;
}