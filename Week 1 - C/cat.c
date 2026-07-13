#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int n; //Creates an int n but does not assign it
   do
   {
      n = get_int("How many "); // Asks until the number is positive
   }
   while (n < 0); // repeat if input is negative
   
   for (int i = 0; i < n; i++) // loop n times
   {
      printf("meow\n"); // print "meow" once per iteration
   }
}