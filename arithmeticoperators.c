#include <stdio.h>

int main () {
    // arithmetic operators
 
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement
 
    int x = 5;
    int y = 2;
    printf("%d\n", x);
    printf("%d\n", y);
    
    int z = x + y;
    printf("%d\n", z);
    z = x - y;
    printf("%d\n", z);
    z = x * y;
    printf("%d\n", z);
    float w = x / (float) y;
    printf("%f\n", w);
    z = x % y;
    printf("%f\n", z);
    x++;
    printf("%d\n", x);
    y--;
    printf("%d\n", y);

    // augmented assignment operators = used to replace a statement where an operator
    //                                  takes a variable as one of its arguments
    //                                  and then assigns the result back to the same variable
    //                                  x = x + 1 or x+=1
 
    x = 10;
 
    x = x + 2;
    x+=2;
    printf("%d\n", x);
 
    x = x - 3;
    x-=3;
    printf("%d\n", x);
 
    x = x * 4;
    x*=4;
    printf("%d\n", x);
 
    x = x / 5;
    x/=5;
    printf("%d\n", x);
 
    x = x % 2;
    x%=2;
    printf("%d\n", x);

    return 0;
}