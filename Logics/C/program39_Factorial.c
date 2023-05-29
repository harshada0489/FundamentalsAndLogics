#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    if(iNo < 0) // updater
    {
        iNo = -iNo;
        
    }
   int iCnt = 0;
   ULONG iFact = 1;

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue =0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Result is : %ld \n" , iRet);

   return 0;
}

/*
iNo = 5;

5!

Factorial = 5*4*3*2*1 = 120

*/
 