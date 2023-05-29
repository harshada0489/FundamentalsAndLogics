/*
Write a program which accepts number from user and return difference between summation of even digts 
and summation of odd digits.

Input  : 2395
Output : -15
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int digit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(iNo != 0)
    {
        digit = iNo%10;
        if((digit%2) == 0)
        {
            iEvenSum = iEvenSum + digit;
        }
        else
        {
            iOddSum = iOddSum + digit;
        }
        
        iNo = iNo/10;
    }
    return iEvenSum-iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

   iRet = CountDiff(iValue);

    printf("%d \n",iRet);

    return 0;
}