#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[], int iLength)
{
    int iMax=Arr[0];
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
          iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the size of Array : \n");
    scanf("%d", &iSize);
    ptr = (int *) malloc(iSize * sizeof(int));

    printf("Enter elements :\n");
    
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    iRet = Max(ptr, iSize);
    printf("Max is : %d\n", iRet);

    free(ptr);

    return 0;
}