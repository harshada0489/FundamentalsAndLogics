#include<stdio.h>
#include<stdbool.h>

int CheckDigitFrequency(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iSearch <0 || iSearch>9) //filter
    {
        printf("Please enter digits in range 0 to 9 \n");
        return false;
    }
    if(iNo < 0) //  updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == iSearch)
        { 
            iCnt ++;
            
        }
        iNo = iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iValue2=0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue1);   

    printf("Enter digit(0 to 9) \n");
    scanf("%d",&iValue2);    

    iRet = CheckDigitFrequency(iValue1, iValue2); 
    printf("Frequcny of %d  in %d : %d \n", iValue2, iValue1, iRet);
    
    return 0;
}
