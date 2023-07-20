#include <stdio.h>
/*This program is basically for calculator for simple operation like addition, subtraction, multiplication and division*/
int main()
{
    int a;/*Tnhis is first varibel for taking value from the user*/
    int b;/*This is second varible for taking from the user*/
    int n;/*This varible is used for take input from user for operation*/
    printf("\nWelcome to Calculator platform");
    printf("\n1. Add");
    printf("\n2. sub");
    printf("\n3. mult");
    printf("\n4. div"); 
    printf("\nPlease Enter choice:");
    scanf("%d",&n);/**/
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    switch (n)
    {
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%d",a/b);
        break;
    default:
        printf("Input is invalid");
        break;
    }
}
///hello
