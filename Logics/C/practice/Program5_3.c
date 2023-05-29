/*
Write a program which accepts number from user and print its number line

Input  : 4
Output : -4 -3 -2 -1 0 1 2 3 4

*/

#include<stdio.h>

void Display(int iNo)
{
    
    int iCnt =0;
    int iStart = -iNo;
    int iEnd = iNo;

    for(iCnt = iStart ; iCnt<=iEnd; iCnt++)
    {
        printf("%d \t", iCnt);
    }
    printf("\n");
}
int main()
{
    float iValue = 0;
    
    printf("Enter number \n");
    scanf("%f", &iValue);

    Display(iValue);

    return 0;
}