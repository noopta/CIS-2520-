#include "header.h"

/* Function to swap values at two pointers */
void swapLetter(char *charOne, char *charTwo)
{
  char tempVar;
  tempVar = *charOne;
  *charOne = *charTwo;
  *charTwo = tempVar;
}

/* Function to print permutations of carbon
 */
void carbonSwap(char *carbon, int wordLength, int num)
{
int i;
if (wordLength == num)
  {
  printf("%s\n", carbon);
  }
else
{
  for (i = wordLength; i <= num; i++)
  {
    swapLetter((carbon+wordLength), (carbon+i));
    carbonSwap(carbon, wordLength+1, num);
    swapLetter((carbon+wordLength), (carbon+i));
  }
}
}
