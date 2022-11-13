//(Using Switch) Program to input any character and check whether it is an alphabet, a digit or a special character
#include <stdio.h>
int main()  
{
    system("cls");
    char ch;  
    printf("Enter a character: ");  
    scanf("%c", &ch);  
    switch ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
    case 1:
        printf("'%c' is an alphabet.\n\n", ch);
        break;
    case 0:
        switch ((ch >= ('0') && ch <= ('9')))
        {
            case 1:
                printf("'%c' is a digit.\n\n", ch);
                break;
            case 0:
                printf("%c is a special character.\n\n", ch);
                break;
        }
        break;
    }
}