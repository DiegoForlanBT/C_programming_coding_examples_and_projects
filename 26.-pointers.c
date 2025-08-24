#include <stdio.h>

int main() {
    int a;      // a normal integer variable
    int *p;     // a pointer to an integer (can store the address of an int variable)

    p = &a;     // assign the address of 'a' to pointer 'p'
    
    a = 112;    // assign the value 112 to variable 'a'
    
    printf("%d\n", a);   // prints the value of 'a' → 112
    printf("%p\n", p);   // prints the memory address of 'a' (the value stored in pointer 'p')
    printf("%d\n", *p);  // prints the value stored at the memory address 'p' points to → 112

    return 0;
}
