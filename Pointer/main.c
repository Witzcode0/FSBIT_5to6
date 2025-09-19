// A pointer in C is a variable that stores the memory address of another variable. Instead of holding a direct value like an integer or a character, a pointer holds the location in memory where another variable's value is stored.

// syntax:

// data_type *variable_name;

// int x = 10; // declares a pointer to an integer
// char *charPtr; // declares a pointer to a character
// int *y;

// Address-of Operator (&): This operator returns the memory address of a variable.
// y = &x; // ptr now stores the memory address of num

// Uses of Pointers:

// Dynamic Memory Allocation: Pointers are crucial for allocating memory during program execution using functions like malloc(), calloc(), and realloc().

// Arrays: Array names often behave as pointers to their first element, enabling efficient array manipulation and traversal.

// Functions: Pointers can be passed to functions to modify the original variables (pass by reference) and return multiple values.

// Data Structures: Pointers are fundamental for implementing complex data structures like linked lists, trees, and graphs.

// String Manipulation: Pointers are frequently used for efficient manipulation of strings.

// Example : 1
#include <stdio.h>


int main() {
    int x = 10;
    int *y;
    
    y = &x;
    // Dereference Operator (*): This operator, when used with a pointer, accesses the value stored at the memory address the pointer holds.
    printf("*y: %d\n", *y);
    printf("y: %x", y);
    return 0;
}


// Example : 2
#include <stdio.h>

int add(int *a, int *b){
    return *a + *b;
}

int main() {
    int x = 10, y = 20;
    printf("%d", add(&x, &y));
    
    return 0;
}
