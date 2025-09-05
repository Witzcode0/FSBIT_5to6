#include <stdio.h>

int main() {
    for(int start = 1; start <= 10; start++){
        if (start == 2){
            continue;
        }
        
        if (start == 5){
            break;
        }
        printf("%d\n", start);
    }
    
    

    return 0;
}