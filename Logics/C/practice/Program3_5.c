/*
Write a program which accepts number from user and returns difference between sumation  of 
all its factors and non factors

Input  : 12
Output : -34 (16 - 50)

*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiffOfSum = 0;

   for(iCnt =1; iCnt <iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    iDiffOfSum = iSumFact - iSumNonFact;

    return iDiffOfSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

     printf("%d \n", iRet);
     
    return 0;
}