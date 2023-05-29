/*
Write a program which accepts N and print dirst 5 multiples of N

Input  : 4
Output : 4 8 12 16 20

*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1 ; iCnt<=5; iCnt++)
    {
        
            printf("%d \t", iNo* iCnt);
        
        
    }
    printf("\n");
}
int main()
{
    float iValue = 0;
    
    printf("Enter number \n");
    scanf("%f", &iValue);

    MultipleDisplay(iValue);

    return 0;
}