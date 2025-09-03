#include<stdio.h>

void main(){

    // c1 c2 c3 && ||
    // T  T  T  T  T
    // F  T  T  F  T
    // T  F  T  F  T
    // T  T  F  F  T
    // F  F  F  F  F

    // c !
    // T F
    // F T

    int c1 = 20 < 30; // 1
    int c2 = 0; // 0
    int c3 = 30 < 20; // 0
    int c4 = 1; // 1

    // printf("%d", c1 && c2);
    // printf("%d", c1 || c2);
    // printf("%d", c1 && c2 && c3 || c4);

    printf("%d\n", ! c1);

}
