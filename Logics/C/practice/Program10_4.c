/*
Accepts N number from user and retturn frequency of 11 from it

Input  : N : 6
        Elements : 85 66 3 80 93 88
Output : 0

*/


#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength)
{
    int iFreq = 0;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%11 == 0))
        {
          iFreq++;
        }
        
    }
    return iFreq;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iLength = 0;
    int *p = NULL;
    int iRet = 0;


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

    iRet = Frequency(p, iSize);
    printf("%d\n", iRet);

    free(p);
    
    return 0;
}