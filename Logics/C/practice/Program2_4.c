/*
Accept two number from user and display first number in second number of times
Input  : 12 5
Output : 12 12 12 12 12
*/


#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    if(iFrequency < 0) // Updater
    {
        iFrequency = -iFrequency;
    }

    int iCnt = 0;
    for(iCnt=1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d \t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number");
    scanf("%d", &iValue);

    printf("Enter frequeny");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    
    return 0;
}