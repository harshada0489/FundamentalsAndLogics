/*
Accepts N number from user and return  product of all odd elements

Input  : N : 6
        Elements : 15 66 3 70 10 88
Output : 45

*/


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iMult=1;
 
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2 != 0))
        {
          iMult = iMult * Arr[iCnt];
        }
    }

    return iMult;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iLength = 0, iValue1 = 0, iValue2 = 0;
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

    iRet = Product(p, iSize);
    printf("Product is : %d \n", iRet);

    free(p);
    
    return 0;
}