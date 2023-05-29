/*
Accepts N number from user and accept one another number as NO, 
check whether NO is present or not

Input  : N : 6
        NO : 66
        Elements : 85 66 3 66 93 88
Output : TRUE

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL Check(int Arr[], int iLength, int iNo)
{
    BOOL isPresent = FALSE;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%iNo == 0))
        {
          isPresent = TRUE;
          break;
        }
    }
    return isPresent;
}

int main()
{
    int iSize = 0, iCnt = 0, iLength = 0, iValue = 0;
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

    printf("Enter the number whose frequncy needs to be checked in the array \n");
    scanf("%d",&iValue);

    bRet = Check(p, iSize,iValue);

    printf("%d \n", bRet);

    free(p);
    
    return 0;
}