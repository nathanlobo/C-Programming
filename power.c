//Program to find power of a number using the pow function
#include <stdio.h>  
#include <math.h>  
int main ()  
{  
    system ("cls");
    float base, exp;  
    float output;  
    printf ("Enter the base value: ");  
    scanf (" %f", &base); 
    printf ("Enter the value to which the base is needed to be raised to: ");  
    scanf (" %f", &exp);
    output = pow( base, exp);  
    printf ("\n%f to the power of %f is = %f\n\n", base, exp, output);  
    return 0;  
}