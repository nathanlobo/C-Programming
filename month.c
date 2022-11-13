//Program to input any month number and display the total number of days in that month using switch statement
#include<stdio.h>
int main()
{
    system("cls");
    int monthnum;
    printf("Enter month number between 1-12: ");
    scanf("%d", &monthnum);
    switch (monthnum)
    {
    case 1:
        printf("\nJanuary\n\n");
        break;
    case 2:
        printf("\nFebruary\n\n");
        break;
    case 3:
        printf("\nMarch\n\n");
        break;
    case 4:
        printf("\nApril\n\n");
        break;
    case 5:
        printf("\nMay\n\n");
        break;
    case 6:
        printf("\nJune\n\n");
        break;
    case 7:
        printf("\nJuly\n\n");
        break;
    case 8:
        printf("\nAugust\n\n");
        break;
    case 9:
        printf("\nSeptember\n\n");
        break;
    case 10:
        printf("\nOctober\n\n");
        break;
    case 11:
        printf("\nNovember\n\n");
        break;
    case 12:
        printf("\nDecember\n\n");
        break;
    default:
        printf("Invalid month Number enter Number between 1-12 only.\n\n");
        break;
    }
    return 0;
}