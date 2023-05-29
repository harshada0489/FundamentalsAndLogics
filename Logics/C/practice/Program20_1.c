/*
Accepts Character from user and check whether it is alphabet or not(A-Z a-z)

Input  : F

Output : TRUE

*/       

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;
     if(((ch>=65) && (ch<=90)) || ((ch>=97) && (ch<=122)))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Character \n");
    }
    else
    {
        printf("It is not a Character \n");
    }
    
    return 0;
}