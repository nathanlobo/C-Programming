//Program to check if number even or odd
#include<stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter an Interger: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an even number\n\n", num);
    } 
    else
    {
        printf("%d is an odd number\n\n", num);
    }
    return 0;
}