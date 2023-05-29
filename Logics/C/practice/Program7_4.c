/*
Write a program which accepts number from user and count frequcny of 4 in it.

Input  : 2395
Output : 0

*/

#include<stdio.h>


int CountFour(int iNo)
{
    int digit = 0;
    int iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        digit = iNo%10;
        if(digit == 4)
        {
            iFreq++;
        }
        iNo = iNo/10;
    }
    return iFreq;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);
    printf("Frequncy of 4 : %d \n", iRet);

    return 0;
}