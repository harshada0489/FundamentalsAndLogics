#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

int SearchFirstOccurrance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
         break; 
        }
    }
    if(iCnt == iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}


int main()
{
    int iSize =0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;


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

    printf("Enter the elemnt you want to search : \n");
    scanf("%d", &iValue);

     iRet = SearchFirstOccurrance(ptr, iSize, iValue);

     if(iRet == ERR_NOTFOUND)
     {
        printf("Element is not present \n");  
     }
     else
     {
        printf("Element %d is present at %d\n", iValue, iRet);
     }

    free(ptr);

    return 0;
}