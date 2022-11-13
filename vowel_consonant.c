//Program to determine if an Alphabet is a vowel or a consonant using switch case statement (vowel_consonant.c)
#include <stdio.h>
int main ()
{
    system("cls");
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The Alphabet %c is a vowel.\n\n", ch);
            break;
    
        default:
            printf("The Alphabet %c is a consonant.\n\n", ch);
            break;
    }
    return 0;
}