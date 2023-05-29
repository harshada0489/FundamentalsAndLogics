#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;
    
    if(iNo< 0)
    {
        printf("Please enter positive number \n");
        return false;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo/10;
    }

    if(iReverse == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number \n");
    scanf("%d",&iValue);     

    bRet = CheckPalindrome(iValue); 
    if(bRet == true)
    {
        printf("Number is palindrome \n");
    }
    else
    {
        printf("Number is not palindrome \n");
    }
    
    
    return 0;
}
