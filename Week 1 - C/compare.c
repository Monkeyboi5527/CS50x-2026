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
}