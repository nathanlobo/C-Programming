// Program to determine if the LSB of a byte is set or not
#include <stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num & 1)
        printf("LSB of %d is set.\n\n", num);
    else
        printf("LSB of %d is not set.\n\n", num);
    return 0;
}