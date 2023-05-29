/*
Accepts Character from user and check whether it is a digit or not(0-9)

Input  : 7

Output : TRUE

*/       

#include<stdio.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkDigit(char ch)
{
    BOOL bFlag = TRUE;
        if(isdigit(ch) == 0)
        {
            bFlag = FALSE;
        }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character \n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Digit \n");
    }
    else
    {
        printf("It is not a Digit \n");
    }
    
    return 0;
}