/*
Write a program which accepts number from user and displays 
its multiplication of factors

Input  : 12
Output : 144  (1*2*3*4*6) 
*/

#include<stdio.h>


int MultFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1;


    for(iCnt =1; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number \n");
    scanf("%d", &iValue);


    iRet = MultFact(iValue);

    printf("Multiplication of factors : %d  \n", iRet);
     
    return 0;
}