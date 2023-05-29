/*
Accepts N number from user and accept one another number as NO, 
return index of last occurance of that NO

Input  : N : 6
        NO : 66
        Elements : 85 66 3 66 93 88
Output : 3

*/


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCounter=0;
 
    int iCnt = 0;

    for(iCnt=iLength-1; iCnt>=0; iCnt--)
    {
        if((Arr[iCnt]%iNo == 0))
        {
          iCounter = iCnt;
          break;
        }
    }
    return iCounter;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iLength = 0, iValue = 0;
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

    printf("Enter the number whose frequncy needs to be checked in the array \n");
    scanf("%d",&iValue);

    iRet = LastOcc(p, iSize,iValue);

    printf("Last occurance of number is %d \n", iRet);

    free(p);
    
    return 0;
}