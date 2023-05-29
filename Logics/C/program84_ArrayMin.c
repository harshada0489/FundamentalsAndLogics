#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[], int iLength)
{
    int iMin=Arr[0];
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
          iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Min(ptr, iSize);
    printf("Min is : %d\n", iRet);

    free(ptr);

    return 0;
}