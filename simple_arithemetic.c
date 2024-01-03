#include <stdio.h>
int main ()
{
    //This program ask users to enter 3 values
    printf("This program add up values \n");
    int a, b;
    float c;
    printf("Please enter the first number \n");
    scanf("%d", &a);
    printf("enter the second number \n");
    scanf("%d", &b);
    printf("enter the last number \n");
    scanf("%f", &c);
    //This program add up values and return the result
    float AZ=a+b+c;
    printf("the sum of %d, %d and %.2f is %.2f \n", a, b, c, AZ);
    //This program subtracts values and return the result
    AZ=a-b-c;
    printf("the subtraction of %d, %d and %.2f is %.2f \n", a, b, c, AZ);
    //This program multiply values and return the result
    AZ=a*b*c;
    printf("the product of %d, %d and %.2f is %.2f \n",a, b, c, AZ);
    //This program divide values and return the result
    AZ=a/b/c;
    printf("the division of %d, %d and %.2f is %.2f \n",a, b, c,AZ);

    return(0);
}
