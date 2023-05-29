#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG; 

ULONG CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    ULONG iResult = 1;

    if(iBase < 0 || iPower < 0)  //Filter
    {
        return 0;
    }
    for(iCnt=1; iCnt<=iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0; 

    printf("Enter base : \n");
    scanf("%d", &iValue1);

    printf("Enter power : \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);
    
    printf("Result is : %ld \n", iRet);
 
    return 0;
}

/*
Base = 2;
Power = 5;

Result = 2*2*2*2*2;


For bigger power, you can assign the long int for Result
For displaying long int in printf, use %ld
if returned value is long int --> it is bydefault signed
but if you write unsigned for long int -> size will be doubled

Write filter for -ve base and Power value


unsigned long is used multiple time, so you can use typedef for it i.e(Used for naming it only once and use it)
typedef is given below the declarations

*/
 