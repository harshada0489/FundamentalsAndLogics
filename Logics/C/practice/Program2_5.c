/*
Accept number from user and ceck whether number is even or odd
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    BOOL isEven = FALSE;

   if((iNo % 2) == 0)
   {
    isEven = TRUE;
   }
   else
   {
   isEven = FALSE;
   }
    return isEven;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number");
    scanf("%d", &iValue);


    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is not Even \n");
    }
     
    return 0;
}