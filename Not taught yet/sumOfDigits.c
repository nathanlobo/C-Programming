// Write a function to find the sum of digits of a given number
#include<stdio.h>
int main()    
{
    system("cls");
    printf("Enter a number:");
    printf("Sum of Digits = %d\n\n", sumDigits());
    return 0;
}
int sumDigits()
{
    int n,sum=0,m;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    return sum;
}