/*
Accepts N number from user and accept range, display all elements from that range

Input  : N : 6
        START : 60
        END: 90
        Elements : 85 66 3 66 93 88
Output : 66 76 88

*/


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCounter=0;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
          printf("%d \n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iLength = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements \n");
    scanf("%d", &iSize);

    printf("Enter the starting point \n");
    scanf("%d", &iValue1);

    printf("Enter the ending point \n");
    scanf("%d", &iValue2);

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

    Display(p, iSize,iValue1, iValue2);

    free(p);
    
    return 0;
}