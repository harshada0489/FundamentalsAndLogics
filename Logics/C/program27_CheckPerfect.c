#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=(iNo/2); iCnt++) 
    {
        if((iNo % iCnt)  == 0)
        {
            iSum = iSum + iCnt;
            printf("%d\n", iCnt);
        }
    }

    
    return iSum;

}

bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactor(iNumber);
    if(iResult == iNumber)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int iValue = 0;
    int bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number \n", iValue);
    }
    else
    {
        printf("%d is not a perfect number \n", iValue);
    }

    return 0;
}


//Time Complexity : O(N/2)
// where N is the input (Natural Number)
