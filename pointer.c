#include <stdio.h>
int main()
{
    int *pc, c;
    c = 22;
    printf("address of c: %p\n", &c);
    printf("value of c: %d\n\n", c); // 22
    pc = &c;                         // assigns the address of var "c" to pointer pc
    printf("address of pointer pc: %p\n", pc);
    printf("content of pointer pc: %d\n\n", *pc); // 22
    c = 11;
    printf("address of pointer pc: %p\n", pc);
    printf("content of pointer pc: %d\n\n", *pc); // 11
    *pc = 2;                                      // change value at memory location pointed by the pointer pc to 2
    printf("address of c: %p\n", &c);
    printf("value of c: %d\n\n", c); // 2

    return 0;
}

// pc is address but c is variable with value
// pc = c; // error

// &c is address but *pc is pointer
// *pc = &c; // error

// both &c and pc are addresses
// pc = &c;

// c and *pc have values
// *pc = c;