//program to print week day name according to given weekday number using switch statement
#include <stdio.h>
int main()
{
    int daynum;
    printf("Enter Week day Number between 1-7: ");
    scanf("%d", &daynum);
    switch (daynum)
    {
    case 1:
    printf("Monday\n\n");
    break;
    case 2:
    printf("Tuesday\n\n");
    break;
    case 3:
    printf("Wednesday\n\n");
    break;
    case 4:
    printf("Thursday\n\n");
    break;
    case 5:
    printf("Friday\n\n");
    break;
    case 6:
    printf("Saturday\n\n");
    break;
    case 7:
    printf("Sunday\n\n");
    break;
    default:
    printf("Invalid day number! Enter day No. between 1-7.\n\n");
    break;
    }
    return 0;
}