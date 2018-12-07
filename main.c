#include "header.h"

int main()
{
unsigned long int n;
unsigned long int m;
float squareTwo;
float valTwo;
float square;
float aVal;
unsigned long int answerOne;
float result, resultTwo;

char userString[] = "carbon";
int stringSize = strlen(userString);

carbonSwap(userString, 0, stringSize-1);

printf("Enter a value for m: ");
scanf("%lu", &m);

printf("Enter a value for n: ");
scanf("%lu", &n);

answerOne = ackermans(m,n);

printf("Ackermans functions gives: %lu\n", answerOne);

printf("\nFind the square root of: ");
scanf("%f",&square);

aVal = square/2;
/*
printf("Choose your 'e' value: ");
scanf("%f", &eVal);
*/
result = newtons(square, aVal);

printf("The square root of %f is %f\n", square, result);

printf("Find the square root of: ");
scanf("%f", &squareTwo);

printf("Choose your 'e' value: ");
scanf("%f", &valTwo);

resultTwo = nonRecursive(squareTwo, valTwo);

printf("The square root of %f is: %f\n",squareTwo ,resultTwo);




return 0;
}
