#include <cs50.h>
#include <stdio.h>

void rows (int);
void columns (int);
void box (void);

int main(void)
{
    rows (get_int("How many rows"));
}

    void rows (int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("?");
    }
}

    void columns (int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("?\n");
    }
}

    void box (void)
{
    
}