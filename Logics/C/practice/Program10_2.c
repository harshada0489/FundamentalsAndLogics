/*
Accepts N number from user and return difference between frequncy of even numbers and odd numbers

Input  : N : 7
        Elements : 85 66 3 80 93 88
Output : 1 (4-3)

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
     int iEvenSum = 0;
    int iOddSum = 0;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2 == 0))
        {
           iEvenSum++;
        }
        else
        {
            iOddSum++;
        }
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iLength = 0, iRet = 0;
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

    iRet = Frequency(p, iSize);
    printf("%d\n", iRet);

    free(p);
    
    return 0;
}