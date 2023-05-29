/*
Write a program to find the factorial of a given number
Input  : 5
Output : 120 (5*4*3*2*1)

*/

#include<stdio.h>

int Factorial(int iNo)
{
     if(iNo < 0) //updater
    {
        iNo = -iNo;
    }
    
   int iCnt = 0;
   int iFact = 1;

   for(iCnt=1; iCnt<=iNo; iCnt++)
   {
        iFact = iFact * iCnt;
   }
    return iFact;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of a number is %d \n", iRet);
    return 0;
}