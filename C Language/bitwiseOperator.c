// writing a C program to Demonstarte the use of Bitwise Operator in C 
#include <stdio.h>
int main()
{
    printf("**************** BITWISE OPERATOR IN c *************************\n");

    // intialize the value of A and B
    int A = 5, B = 3;
    printf("==== Set-01 ========\n");
    // printing bitwise and of the A and B
    printf("A&B : %d\n", A & B);
    // printing bitwise or of the A and B
    printf("A|B : %d\n", A | B);
    // printing bitwise xor of the A and B
    printf("A^B : %d\n", A ^ B);

    // Reassign new value to A and B 
    A = 12,B=10;
    printf("====Set - 02 ========\n");
    // printing bitwise and of the A and B
    printf("A&B : %d\n", A & B);
    // printing bitwise or of the A and B
    printf("A|B : %d\n", A | B);
    // printing bitwise xor of the A and B
    printf("A^B : %d\n", A ^ B);

    // Reassign new value to A and B 
    A = 15,B=7;
    printf("==== Set - 03 ========\n");
    // printing bitwise and of the A and B
    printf("A&B : %d\n", A & B);
    // printing bitwise or of the A and B
    printf("A|B : %d\n", A | B);
    // printing bitwise xor of the A and B
    printf("A^B : %d\n", A ^ B);

    printf("==== Set - 04(Shift Operator ) ========\n");

    // Now Performing the bitwise left and right shift of the A and with 1 and 2 bits 
    A = 16;// reassign value of the A 
    printf("A>>1 : %d\n",A>>1); // right shift by 1 bit 
    printf("A>>2 : %d\n",A>>2); // right shift by 1 bit 

    // Reassigning the value of the expression using A and B
    A=6,B=3;
    printf("(A&B) | (A^B) : %d\n",(A&B)|(A^B));

    // reassign the value of A to perform bitwise complement of the A 
    A = 10;
    printf("~A : %d",~A);

    return 0;
}