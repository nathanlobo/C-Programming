// Program to display all prime numbers 1 to n
#include<stdio.h>
int main(){
    system("cls");
    int num,i,count,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(num = 1;num<=n;num++)
    {
        count = 0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && num!= 1)
        printf("%d\n",num);
    }
    return 0;
}