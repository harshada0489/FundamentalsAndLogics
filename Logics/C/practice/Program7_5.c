/*
Write a program which accepts number from user and count frequcny of such 
a digits which are less than 6 in it.

Input  : 2395
Output : 0

*/

#include<stdio.h>


int Count(int iNo)
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
        if(digit < 6)
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

    iRet = Count(iValue);
    printf("%d \n", iRet);

    return 0;
}