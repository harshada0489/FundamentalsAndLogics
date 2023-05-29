#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iLength)
{
    int iMin=Arr[0];
    int iMax=Arr[0];
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
          iMin = Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
          iMax = Arr[iCnt];
        }

    }
    printf("Max is : %d\n", iMax);
    printf("Min is : %d\n", iMin);
    
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

     MaxMin(ptr, iSize);

    free(ptr);

    return 0;
}