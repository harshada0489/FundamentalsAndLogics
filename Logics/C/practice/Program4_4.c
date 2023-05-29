/*
Write a program which accepts three number and print its multiplication

Input  : 5 4 7 
Output : 140

*/

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;
    iAns = iNo1 * iNo2 * iNo3;
    
    return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet=0;
    
    
    printf("Enter three number \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d  \n", iRet);
     
    return 0;
}