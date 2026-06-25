#include <stdio.h>
#include <cs50.h>

// C conditionals

int main(void)
{
    int x = get_int("x:");
    int y = get_int("y:");
    
    if (x > y)
    {
        printf("%d > %d\n", x, y);
    }
    else if (x < y)
    {
        printf("%d < %d\n", x, y);
    }
    else
    {
        printf("%d == %d\n", x, y);
    }
    // else if (x == y) works the same but is less efficient
    
    
    /*
     * =  assignment operator
     * == equals
     * < less than
     * > greater than
     * <= less than or equal to
     * >= greater than or equal to
     * != not equal
     */
    
    // Data Types
    bool hi = false; // A Yes or No statement, 0 or 1
    char a = 'a'; // A single character
    double d = 3.1400000000000000000000000000000000000; // float with 64 bits
    float f = 3.14; // "floating point" 32 bits, a number with a decimal
    int i = 42; // 32 bits, simple integers 
    long l = 4200000000l; // 64 bits, simple integers
    string s = "Hello World!"; // Multiple characters in a line
    
    // Format Codes
    printf("%c\n", a); // char
    printf("%f\n", f); // float
    printf("%i\n", i); // int
    printf("%li\n", l); // int
}