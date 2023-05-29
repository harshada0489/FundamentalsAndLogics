/*
Write a program which accepts number from user and return the multiplication of all the digits
Input  : 2395
Output : 270
*/

#include<stdio.h>

int MultDigits(int iNo)
{
     if(iNo < 0) //updater
    {
        iNo = -iNo;
    }

    int digit = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        digit = iNo%10;
        iMult = iMult * digit;
        iNo = iNo/10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

   iRet = MultDigits(iValue);

    printf("%d \n",iRet);

    return 0;
}