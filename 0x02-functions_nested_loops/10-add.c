#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */

int add(int a, int b)
{
   int sum = a + b;
   int result = 0;
   int digit = 0;
   if (sum < 0)
   {
       _putchar('-');
       sum *= -1;
   }

   result = sum;

   do {
       digit = result % 10;
       _putchar(digit + '0');
       result /= 10;
   } while (result != 0);

   if (sum == 0)
   {
       _putchar('0');
   }

   _putchar('\n');

   return sum;
}
