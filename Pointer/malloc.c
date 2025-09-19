// In C programming, malloc(), calloc(), and realloc() are functions used for dynamic memory allocation, allowing programs to allocate memory during runtime rather than compile time. These functions are declared in the <stdlib.h> header file.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int num = 10;
    int* ptr;
    
    ptr = (int*)malloc(num * sizeof(int));
    
    if (ptr == NULL){
        printf("Memory is not allocated.");
        exit(0);
    }else{
        printf("Memory allocated succssefully.");
    }
    
    
    
    return 0;
}
