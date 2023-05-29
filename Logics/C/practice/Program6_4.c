/*
Write a program which accepts number from user and displays its table
Input  : 2
Output : 2 4 6 8 10 12 14 16 18 20

*/

#include<stdio.h>

void Table(int iNo)
{
     if(iNo < 0) //updater
    {
        iNo = -iNo;
    }
    
   int iCnt = 0;
   int iMult = 1;

   for(iCnt=1; iCnt<=10; iCnt++)
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

    Table(iValue);

    return 0;
}