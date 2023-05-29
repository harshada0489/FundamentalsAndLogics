/*
Write a program which accepts number from user and display its digits in reverse

Input  : 2395
Output : 5
         9
         3
         2

*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int digit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        digit = iNo%10;
        printf("%d \n", digit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}