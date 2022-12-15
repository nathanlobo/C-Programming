// Program to make function to find the factorial of any number
#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    printf("Enter a Number to Find Factorial: ");
    printf("Factorial of a given Number is %d\n\n", fact());
    return 0;
}
int fact()
{
    int i, fact=1, n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}