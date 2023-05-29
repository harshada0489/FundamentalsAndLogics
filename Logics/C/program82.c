#include<stdio.h>
#include<stdlib.h>

int Fun(int Arr[], int iLength)
{
    //Logic
}

int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt = 0;

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

    Fun(ptr, iSize);

    free(ptr);

    return 0;
}