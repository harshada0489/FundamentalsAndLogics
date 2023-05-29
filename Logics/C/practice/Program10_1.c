/*
Accepts N number from user and returnfrequncy of even numbers

Input  : N : 6
        Elements : 85 66 3 80 93 88
Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCount;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2 == 0))
        {
            iCount++;
        }
    }

    return iCount;
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

    iRet = CountEven(p, iSize);
    printf("%d\n", iRet);

    free(p);
    
    return 0;
}