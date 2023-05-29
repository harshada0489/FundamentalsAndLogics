/*
Accepts Character from user and check whether it is a small case character or not

Input  : g

Output : TRUE

*/       

#include<stdio.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkSmall(char ch)
{
    BOOL bFlag = FALSE;
        if((ch>=97) && (ch<=122))
        {
            bFlag = TRUE;
        }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character \n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a small character \n");
    }
    else
    {
        printf("It is not small character \n");
    }
    
    return 0;
}