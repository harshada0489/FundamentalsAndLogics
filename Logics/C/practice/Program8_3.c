/*
Write a program which accepts number from user and return the count of digits in between 3 and 7
Input  : 2395
Output : 1
*/

#include<stdio.h>

int CountRange(int iNo)
{
     if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int digit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        digit = iNo%10;
        if(digit>3 && digit<7)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

   iRet = CountRange(iValue);

    printf("%d \n",iRet);

    return 0;
}