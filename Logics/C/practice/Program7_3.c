/*
Write a program which accepts number from user and count frequcny of 2 in it.

Input  : 2395
Output : 1

*/

#include<stdio.h>


int CountTwo(int iNo)
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
        if(digit == 2)
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

    iRet = CountTwo(iValue);
    printf("Frequncy of 2 : %d \n", iRet);

    return 0;
}