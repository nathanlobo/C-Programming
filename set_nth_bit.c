// Program to set the nth bit of a byte
#include <stdio.h>
int main()
{
    system("cls");
    int num,n,newNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter nth bit (0-31): ");
    scanf("%d", &n);
    newNum = (1 << n) | num;
    printf("\nNumber before %d bit is set: %d", n, num);
    printf("\nNumber after %d bit is set: %d\n\n", n, newNum);
    return 0;
}