#include <stdio.h>
#include <stdlib.h>


int main() {
    int num = 10;
    int* ptr;
    int* ptr1;
    
    ptr = (int*)malloc(num*sizeof(int));
    
    ptr1 = (int *)realloc(ptr, 20 * sizeof(int));
    
    if (ptr1 == NULL){
        printf("Memory is not allocated.\n");
        exit(0);
    }else{
        printf("Memory allocated succssefully.\n");
    }
    
    free(ptr);
     printf("Calloc Memory Successfully freed.\n");
    
    
    return 0;
}
