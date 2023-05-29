/*
Write a program which accepts number from user and print that number of $ & * on screen

Input  : 5
Output : $ * $ * $ * $ * $ *

*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0) //Updater
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1 ; iCnt<=iNo; iCnt++)
    {
        printf("$ \t * \t");
    }
    printf("\n");
}
int main()
{
    float iValue = 0;
    
    printf("Enter number \n");
    scanf("%f", &iValue);

    Pattern(iValue);

    return 0;
}