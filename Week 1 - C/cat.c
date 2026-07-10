#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int n;
   
   while (true)
   {
      n = get_int("How many "); // Has a built-in try catch
      if (n < 0)
      {
         continue;
      }
      else
      {
         break;
      }
   }
   for (int i = 0; i < n; i++)
   {
      printf("meow\n");
   }
}