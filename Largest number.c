#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("\nThe largest number is: %d\n",num1);
    } 
    else if (num2>num1) 
    {
        printf("\nThe largest number is: %d\n",num2);
    }
return 0;
}
