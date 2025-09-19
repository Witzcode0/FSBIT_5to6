#include <stdio.h>
#include <stdlib.h>


int main() {
    int num = 10;
    int* ptr;
    
    ptr = (int*)calloc(num, sizeof(int));
    
    if (ptr == NULL){
        printf("Memory is not allocated.\n");
        exit(0);
    }else{
        printf("Memory allocated succssefully.\n");
    }
    
    free(ptr);
     printf("Calloc Memory Successfully freed.\n");
    
    
    return 0;
}
