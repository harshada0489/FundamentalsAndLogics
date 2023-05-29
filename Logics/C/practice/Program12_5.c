/*
Accepts N number from user and display summation of digits of each number

Input  : N : 6
        Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21 

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
     int iSum = 0;
     int iDigit = 0;
     int iNo = Arr[iCnt];

     while(iNo != 0)
     {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
     }

        printf("%d \t" , iSum);
    }

    printf("\n");
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

     DigitsSum(p, iSize);

    free(p);
    
    return 0;
}