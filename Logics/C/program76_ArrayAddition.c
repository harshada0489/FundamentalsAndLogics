#include<stdio.h> 
#include<stdlib.h>

int Addition(int Arr[], int iLength)
{

    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()  // Entry point function
{
    int iSize = 0; // To store size of array
    int *ptr = NULL;     // To store the address of array
    int iCnt = 0;   // Loop counter
    int iRet = 0;

    // Step 1 :  Accept the number of elements from the user
    printf("Enter the no of elements : \n");
    scanf("%d",&iSize);     
    
    //Step 2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //Step 3: Accept the values from user
    printf("Enter the elements \n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are \n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("%d \n", ptr[iCnt]);
    }

    //Step 4: Pass he array to the function
    iRet = Addition(ptr,iSize); //Demo(400,4)

    printf("Addition is : %d \n", iRet);

    //Step 6: Deallocate the memory of array
    free(ptr);
 
    return 0; //Return success to OS
}
