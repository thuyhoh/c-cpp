#include <stdio.h>
#include <limits.h>

/* 
 * Calculate the number of milliseconds for the provided age in years
 * Milliseconds = age in years * 365 days/year * 24 hours/day, 60 minutes/hour, 60 seconds/min, 1000 millisconds/sec
 */
#define MILLISECONDS(age) (age * 365 * 24 * 60 * 60 * 1000)

int main()
{
   char chat = 'p';
   printf("%d",chat);
   return 0;
}