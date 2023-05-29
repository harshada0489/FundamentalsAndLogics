#include<stdio.h>       //IO
#include<stdlib.h>  //Memory Management -> malloc & free function 

int main()  // Entry point function
{
    int iSize = 0; // To store size of array
    int *ptr = NULL;     // To store the address of array
    int iCnt = 0;   // Loop counter

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
        printf("%d", ptr[iCnt]);
    }
    return 0; //Return success to OS
}
