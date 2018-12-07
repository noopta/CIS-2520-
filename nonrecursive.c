#include "header.h"

float nonRecursive(float x, float e)
{
    /*float e; */                             /*variable declerations*/
    float a;

    a = x /2;                            /*doing the first step in the algorithim dividing x by 2*/
    /*e = 0.001;*/

        while(fabs((a*a-x)/2) >=e )      /*while the square root of x is greater than a range of e*/
        {
            a = (a+x/a) /2;

        }
     return a;                             /*return the value of a after finding the square root*/
}
/*
int main() {
   float xValue=16;
   float aVal;
   float holder;


   holder = nonRecursive(xValue);


   printf("The square root of %f is %f",xValue, holder);


}
*/
