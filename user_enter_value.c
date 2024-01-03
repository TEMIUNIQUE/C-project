#include <stdio.h>
int main()
{
    // This program ask user to enter 3 integer values and return the addition
    printf("This program add three integer and return the result\n");
    int a, b, c ;
    printf("please enter the first integer \n");
    scanf("%d", &a);
    printf("enter the second integer \n");
    scanf("%d", &b);
    printf("enter the last integer \n");
    scanf("%d", &c);
    int d=a+b+c;
    printf("the sum of %d, %d and %d is %d \n\n\n",a, b, c, d);

    // This program ask the user to enter 3 float values and return the products
    printf("This is a program to find the product of variables \n");
    float e, f, g;
    printf("Please enter the first number \n");
    scanf("%f", &e);
    printf("enter the second number \n");
    scanf("%f", &f);
    printf("enter the last number \n");
    scanf("%f", &g);
    float AY=e*f*g;
    printf("the product of %.3f, %.3f and %.3f is %.3f \n",e, f, g, AY);

    return (0);
}
