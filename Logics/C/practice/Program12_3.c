/*
Accepts N number from user and return  the difference between largest and smallest number

Input  : N : 6
        Elements : 85 66 3 66 93 88
Output : 90 (93-3)

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int iMin=Arr[0];
    int iMax=0;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
          iMax = Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
          iMin = Arr[iCnt];
        }
    }

    return (iMax-iMin);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iLength = 0;
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
    printf("Differecne is : %d \n", iRet);

    free(p);
    
    return 0;
}