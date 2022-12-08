// Program to find the one’s complement of a binary number
#include<stdio.h>
int main(){
    system("cls");
    int i;
    char binNum[9], onesComp[9];
    printf("Enter a 8Bit binary number: ");
    scanf("%s", binNum);
    for(i=0;i<=8;i++)
    {
        if(binNum[i]=='1')
            onesComp[i]='0';
        else if(binNum[i]=='0')
            onesComp[i]='1';
    }
    printf("One's Complement of %s = %s", binNum, onesComp);
    return 0;
}