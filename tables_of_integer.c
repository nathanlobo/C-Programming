// Program to print the multiplication tables of any integer.(tables_of_integer.c)
#include <stdio.h>
int main() {
    system("cls");
    int num, limit, i;
    printf("Enter an integer to view its multiplication: ");
    scanf("%d", &num);
    printf("Enter the value till which the integer needs to be multiplied: ");
    scanf("%d", &limit);
    for(i=1; i<=limit; i++){
        printf("%d * %d = %d \n", num, i, num * i);
    }
    return 0;
}