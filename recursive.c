#include "header.h"

float newtons(double x, double a)
{

    float e;
    e = 0.001;

    if(fabs(a*a-x)/2.00 <= e)
    {
        return a;
    }
    else
    {
        a = (a+x/a)/2.00;

    }
    return newtons(x, a);
}

/*int main() {

   double value = 81.00;
   double epsilon = 0.00001;
   double dummy = 81.00;
   double answer;
   double aVal;

   aVal = value/2;
   answer = newtons(value, aVal);

   printf("The value %lf becomes %lf", dummy, answer);



}
*/
