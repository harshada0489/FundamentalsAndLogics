/*
Accepts N number from user and return difference between summation of even elements 
and summation of odd digits.

Input  : N : 6
        Elements : 85 66 3 80 93 88
Output : 53 (234 -181)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0;
    int iOddSum = 0;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return iEvenSum-iOddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter number of elements \n");
    scanf("%d", &iSize);

    p = (int*) malloc(iSize * (sizeof(int)));

    if(p == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element : %d \n", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d \n", iRet);

    free(p);
    
    return 0;
}