/*
Write a program which accepts three number and print its multiplication

Input  : 1000 745
Output : 74.5%

*/

#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
    float fAns = 0.0;

    // if(iNo1 == 0) // Validator
    // {
    //     printf("Divide by zero error. Please enter correct value \n");
    //     return ;
    // }
    
    fAns = (iNo2/iNo1) * 100;
    printf("fAns = %f \n " , fAns);

    return fAns;
}
int main()
{
    float iValue1 = 0.0, iValue2 = 0.0;
    float fRet=0.0;
    
    
    printf("Enter total marks \n");
    scanf("%f", &iValue1);

    printf("Enter marks  obtained\n");
    scanf("%f", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f \n", fRet);
     
    return 0;
}