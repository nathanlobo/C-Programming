//Program to find the area and circumference of a circle
#include<stdio.h>
#define PI 3.1414
int main()
{
    system("cls");
    float radius, area, cf; //cf = circumference
    printf("Enter radius of the circle in cm: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf ("\n\nArea of the circle %f", area);
    cf = 2 * PI * radius;
    printf ("\nCircumference of the circle %f \n\n", cf);
    return 0;
}
