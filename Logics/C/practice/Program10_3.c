/*
Accepts N number from user check whether that number contains 11 in it or not

Input  : N : 7
        Elements : 85 66 11 80 93 88
Output : 11 is present

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Frequency(int Arr[], int iLength)
{
    BOOL iCheck = FALSE;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%11 == 0))
        {
           iCheck = TRUE;
           break;
        }
        
    }
    return iCheck;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;
    BOOL bRet = FALSE;


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

    bRet = Frequency(p, iSize);
    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(p);
    
    return 0;
}