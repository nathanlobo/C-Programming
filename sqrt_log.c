//Program to find square root and logarithm of a number
#include<stdio.h>
#include<math.h>

int main()
{ 
    system("cls");
    // float num, sqroot;
    double num, sqroot, logar;
    printf("Enter a number: ");
    scanf("%lf", &num);
    sqroot = sqrt(num);
    printf("\nSquare of the given number %.2f is = %.2f\n\n", num, sqroot);
    logar = log(num);
    printf("The Natural log of %.2lf = %lf\n", num, logar);
    return 0;
}

