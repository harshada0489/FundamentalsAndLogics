/*
Write a program which accepts two number and check whether number are equal or not

Input  : 10 10
Output : Equal

*/

#include<stdio.h>

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    BOOL bAns = FALSE;

    if(iNo1 == iNo2)
    {
        bAns = TRUE;
    }
    else
    {
        bAns = FALSE;
    }
    return bAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;
    
    printf("Enter two number \n");
    scanf("%d %d", &iValue1, &iValue2);


    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal \n");
    }
    else
    {
        printf("Not Equal \n");
    }
     
    return 0;
}