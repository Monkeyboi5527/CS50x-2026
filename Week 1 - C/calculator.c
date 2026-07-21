#include <cs50.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main(void)
{
   int dollars = 1;
   while (true)
   {
      char c = get_char("Here's in $%i/ Double ir and give it to the next person", dollars);
      if (c == 'y')
      {
         // Can double 30 times until it causes an Overflow and 62 times for a long
         multiply(dollars, 2);
      }
      else
      {
         break;
      }
   }
}

   int add(int x, int y)
{
   return (x + y);
}
   int subtract(int x, int y)
{
   return (x - y);
}
   int multiply(int x, int y)
{
   return (x * y);
}
   int divide(int x, int y)
{
   return (x / y);
}

   