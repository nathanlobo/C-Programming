// Program to find the sum of even number between 1 to n using while loop
#include<stdio.h>
int main()
{
    system("cls");
    int n, i = 1, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);  
    while(i <= n)  
    {  
        if(i%2 == 0)  
        {  
            sum = sum + i;  
        }  
        i++;  
    }  
    printf("Sum of Even numbers from 1 to %d is %d\n", n, sum);  
    return 0;  
}  
