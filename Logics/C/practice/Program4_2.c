/*
Write a program which accepts one number from user and check whether that number is grater than 100 or not

Input  : 101
Output : Greater

*/

#include<stdio.h>

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    BOOL bAns = FALSE;

    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number \n");
    scanf("%d", &iValue);


    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater \n");
    }
    else
    {
        printf("Smaller \n");
    }
     
    return 0;
}

