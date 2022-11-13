// Program to display the first five multiples of a number using do while loop
#include <stdio.h>
int main() {
    system("cls");
    int num, i=1;
    printf("Enter an number to find it's first five multiples: ");
    scanf("%d", &num);
    printf("\n");
    do {
        printf("%d * %d = %d \n", num, i, num * i);
        i++;
    } while(i<=5);
    printf("\n");
    return 0;
}