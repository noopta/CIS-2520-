#include "header.h"

unsigned long int ackermans(unsigned long int mValue, unsigned long int nValue) /*recursive function*/
{

     if (mValue ==0)      /*if the m value is 0 then add one to n*/
    {
        return nValue+1;
    }
    else if(nValue ==0)   /*if the n value is 0 then subtract one from m and add one to n*/
    {
        return ackermans(mValue -1, 1);
    }

    else
    {
        return ackermans(mValue-1, ackermans(mValue, nValue-1)); /*if m,n > 0 then run the algorithim*/
    }

}


/* int main() {
  unsigned long int n = 1;
  unsigned long int m = 2;
  int numberOne = 1;
  int numberTwo = 2;

  unsigned long int Answer;

  Answer = ackermans(m,n);
  printf("\nIf n = %d and m = %d then the result is %lu. \n", numberOne, numberTwo, Answer);

} */
