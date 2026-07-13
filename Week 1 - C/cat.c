#include <stdio.h>
#include <cs50.h>

   // In C and C++ the convention is to declare the function before the main()
   
// The prototype
void meow(void);
void meow2(int n);

int main (void)
{
   /*
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
   */
   
   /*
   for (int i = 0; i < 3; i++)
   {
      meow();
   }
   */
   
   int n = get_int("How many times");
   meow2(n); // n in the function is not in the scope of the main 
}

   // Initializes the function here

// creates a function named meow 
void meow(void) // void -> doesn't return anything | doesn't take in an input
{
      printf("meow\n"); // this is just a byproduct of running meow
}

void meow2(int n) // has an input of n
{
      for (int i = 0; i < n; i++) // loop n times
      {
         printf("meow\n"); 
      }
}