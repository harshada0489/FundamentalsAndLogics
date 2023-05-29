/*
Write a program which accepts number from user and displays its table in reverese order
Input  : 2
Output : 20 18 16 14 12 10 8 6 4 2

*/

#include<stdio.h>

void TableRev(int iNo)
{
     if(iNo < 0) //updater
    {
        iNo = -iNo;
    }
    
   int iCnt = 0;
   int iMult = 1;

   for(iCnt=10; iCnt>=1; iCnt--)
   {
        printf("%d \t", (iCnt * iNo));
   }
   printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}