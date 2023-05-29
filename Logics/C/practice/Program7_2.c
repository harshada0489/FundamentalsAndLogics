/*
Write a program which accepts number from user and check whether it contains ) or not.

Input  : 2395
Output : 5
         9
         3
         2

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int digit = 0;
    BOOL isZero = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        digit = iNo%10;
        if(digit == 0)
        {
            isZero = TRUE;
        }
        iNo = iNo/10;
    }
    return isZero;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It contains Zero \n");
    }
    else
    {
        printf("It does not contains Zero \n");
    }

    return 0;
}