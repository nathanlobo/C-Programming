

// Program to find factorial of a number

#include <stdio.h>

int main() 
{
    
    int num, i, fact=1;
    printf("Enter an integer to find it's factorial: ");
    scanf("%d", &num);
        for (i=num; i>=1; i--) {
            fact*=i;
        }
        printf("Factorial of %d = %d\n", num, fact);
    
    return 0;
}
