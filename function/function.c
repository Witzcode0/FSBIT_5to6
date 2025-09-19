// Without return_type with parameter
// #include <stdio.h>

// void sum(int a, int b){
//     printf("%d", a + b);
// }

// int main() {
//     sum(10, 20);
//     return 0;
// }



// Without return_type without parameter
// #include <stdio.h>

// void sum(){
//     int a = 10,b = 20;
//     printf("%d\n", a + b);
// }

// int main() {
//     sum();
//     sum();
//     return 0;
// }

// With return_type without parameter
// #include <stdio.h>

// int sum(){
//     int a = 10,b = 20;
//     return a + b;
// }

// int main() {
//     int total = sum();
//     printf("Total : %d\n", total);
//     printf("Total+2 : %d", total+2);
//     return 0;
// }


// With return_type with parameter
// #include <stdio.h>

// int sum(int a, int b){
//     return a + b;
// }

// int main() {
//     int total = sum(100, 250);
//     printf("Total : %d\n", total);
//     printf("Total+2 : %d", total+2);
//     return 0;
// }


// 0 1 1 2 3 5 8 13.... (fibbonaci)

// #include <stdio.h>

// void fibbo(int num){
//     int n1 = 0;
//     int n2 = 1;
//     for(int start = 1; start<=num; start+=1){
//         if (start == 1){
//             printf("0 ");
//         }else if(start == 2){
//             printf("1 ");
//         }else{
//             int nth = n1 + n2;
//             n1 = n2;
//             n2 = nth;
//             printf("%d ", nth);
//         }
//     }
// }
// int main() {
//     int n;
//     printf("Enter a num: ");
//     scanf("%d", &n);
//     fibbo(n);
//     return 0;
// }

// Factoial
// 5! = 5*4*3*2*1

// Recursion

#include <stdio.h>

int Factorial(int n){
    if (n == 0){
        return 1;
    }else{
        return n * Factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    
    printf("%d", Factorial(num));

    return 0;
}

// #include <stdio.h>

// int factorial(int num){
//     if (num <= 1){
//         return 1;
//     }else{
//         return num * factorial(num - 1);
//     }
// }

// int main() {
//     printf("%d", factorial(5));

//     return 0;
// }

// 5!
// 5 * 4 * 3 * 2 * 1