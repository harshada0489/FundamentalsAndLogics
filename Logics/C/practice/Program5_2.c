/*
Write a program which accepts number from user and print them until the number

Input  : 8
Output : 1 2 3 4 5 6 7 8

*/

#include<stdio.h>

void Display(int iNo)
{
    
    int iCnt = 0;

    for(iCnt = 1 ; iCnt<=iNo; iCnt++)
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