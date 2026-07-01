#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree?");
    
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not Agreed.\n");
    }
    
    // Loops
    // initializes a variable
    // checks the condition
    // i gets incremented by 1
    for (int i = 0; i <= 10; i++)
    {
        printf("%i", i);
    }
    // Keeps going until the condition is false
}