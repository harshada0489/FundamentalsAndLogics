#include<stdio.h>
#include<stdbool.h>

void ForwardDisplay(int iNo)
{
    int iCnt = 0;

    //      1           2       3
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d \t", iCnt);  // 4
    }
    printf("\n");
}

void BackwardDisplay(int iNo)
{
    int iCnt = 0;

    //      1           2       3
    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        printf("%d \t", iCnt);  // 4
    }
    printf("\n");
}

int main()
{
    int iValue =0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    ForwardDisplay(iValue);
    BackwardDisplay(iValue);

   return 0;
}

/*
iNo = 5;

5!

Factorial = 5*4*3*2*1 = 120

*/
 