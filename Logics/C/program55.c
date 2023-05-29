#include<stdio.h>
#include<stdbool.h>

bool CheckDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 8)
        { 
           break; 
        }
        iNo = iNo/10;
    }

     if(iNo == 0)
     {
        return false;
     }
     else
     {
        return true;
     }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number \n");
    scanf("%d",&iValue);    
    bRet = CheckDigits(iValue); 

    if(bRet == true)
    {
        printf("Digit 8 is present \n");
    }
    else
    {
        printf("Digit 8 is not present \n");
    }
    return 0;
}


/*
  Input  : 7854
  Output :  4
            5
            8
            7

            Best Time Complexity : O(N)
            Avg Time Complexity : between 1 to N
            Worst Time Complexity : O(1)
*/