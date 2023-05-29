/*
Accepts N number from user and display all such elements which are even and divisible by 3 & 5

Input  : N : 6
        Elements : 85 66 3 80 93 88
Output : 15

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iEvenSum = 0;
    int iOddSum = 0;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%3 == 0) && (Arr[iCnt]%5) == 0)
        {
            printf("%d \n", Arr[iCnt]);
        }
    }
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

    Display(p, iSize);

    free(p);
    
    return 0;
}