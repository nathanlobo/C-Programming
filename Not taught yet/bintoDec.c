#include <stdio.h>  
#include <conio.h>
int main()
{
    system("cls");
    printf("Enter a binary number with the combination of 0s and 1s: ");
    printf("The decimal number is %d\n\n", dec());
    return 0;
}
int dec()
{
    int num, binary_num, decimal_num = 0, base = 1, rem;    
    scanf("%d", &num);
    binary_num = num;
    while(num>0)
    {
        rem = num % 10; 
        decimal_num = decimal_num + rem * base;  
        num = num / 10;
        base = base * 2;  
    }
    return decimal_num;
}