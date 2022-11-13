#include <stdio.h>
int main()
{
    system("cls");
    int i=1, n;
    printf("This program prints all natural numbers from 1 to n\nEnter the value of n:");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}