/*
Write a program which accepts number from user and returns summation of 
all its non factors

Input  : 12
Output : 50 (5+7+8+9+10+11)

*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

   for(iCnt =1; iCnt <iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iAns = iAns + iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

     printf("%d \n", iRet);
     
    return 0;
}