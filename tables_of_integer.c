// Program to print the multiplication tables of any integer.(tables_of_integer.c)
#include <stdio.h>
int main() {
    system("cls");
    int num, i;
    printf("Enter an integer to view its multiplication: ");
    scanf("%d", &num);


    for(i=1; i<=10; i++){
        printf("%d * %d = %d \n", num, i, num * i);
    }
    return 0;
}
