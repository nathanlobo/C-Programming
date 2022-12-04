// Program to find factorial of a number
#include <stdio.h>
int main() 
{
    system("cls");
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer to find it's factorial: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else {
        for (i=1; i<= n; i++) {
            fact*=i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}