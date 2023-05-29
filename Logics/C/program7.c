//Write a program which checks whether number  is even or odd.

#include<stdio.h>    //For printf and scanf
#include<stdbool.h>  //For bool data type

////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckDivisible
//Input             : Integer
// Output           : Boolean
// Description      : Check whether input is divisible by 3 and 5
// Autor            : Harshada Bhangale
// Date             : 25/04/2023       
//  Updaye date     : 26/04/2023
//
///////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;               //Variable to accept the input
    bool bRet = false;          //Variable to accept the return value

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);  //Function call

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5 \n" , iValue);
    }
    else
    {
        printf("%d is not divisible by 3 and 5 \n" , iValue);
    }
    return 0;
}
