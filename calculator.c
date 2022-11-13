// To design a calculator with basic operators like +, -, *, / and % using switch statement
#include <stdio.h>
int main() {
    //Don't Copy System statement they are not part of C programming
    system("cls");
    system("color 2");
    char op;
    int num1, num2;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &op);
    switch (op) 
    {
        case '+':
            printf("Enter two operands: ");
            scanf("%d %d", &num1, &num2);
            printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Enter two operands: ");
            scanf("%d %d", &num1, &num2);
            printf("%d - %d = %d\n\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Enter two operands: ");
            scanf("%d %d", &num1, &num2);
            printf("%d * %d = %d\n\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("Enter two operands: ");
            scanf("%d %d", &num1, &num2);
            printf("%d / %d = %d\n\n", num1, num2, num1 / num2);
            break;
        case '%':
            printf("Enter two operands: ");
            scanf("%d %d", &num1, &num2);
            printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);
            break;
        default:
            //Don't Copy System statement they are not part of C programming
            system("color C");
            printf("Error! operator is not correct\n\n");
    }
  return 0;
}