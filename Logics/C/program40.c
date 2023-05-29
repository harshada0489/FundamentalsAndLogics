#include<stdio.h>
#include<stdbool.h>

void DisplayF(int iNo)
{
    int iCnt = 0;


    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d \t", iCnt);
         iCnt++;
    }
    printf("\n");
}

void DisplayB(int iNo)
{
    int iCnt = 0;


    iCnt = iNo;
    while(iCnt >= 1)
    {
        printf("%d \t", iCnt);
         iCnt--;
    }
    printf("\n");
}


int main()
{
    int iValue =0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayF(iValue);
    DisplayB(iValue);
    

   return 0;
}

/*
iNo = 5;

5!

Factorial = 5*4*3*2*1 = 120

*/
 