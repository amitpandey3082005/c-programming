// write the program for uniary opeartor
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("*****************Section [A]*************\n");
    // using the Pre-increment Operator
    printf("X = 50 + ++a : %d\n", 50 + (++a)); // printing expression values
    printf("a = %d\n", a);
    printf("b : %d\n", b);

    printf("*****************Section [B]*************\n");
    // reassigning the values
    a = 10, b = 20;
    printf("X = 50 + a++ : %d\n", 50 + (a++));
    printf("a = %d\n", a);
    printf("b : %d\n", b);

    printf("*****************Section [C]*************\n");
    // reassigning the values
    a = 10, b = 20;
    printf("X = a++ + --b : %d\n", (a++) + (--b));
    printf("a = %d\n", a);
    printf("b : %d\n", b);

    return 0;
}