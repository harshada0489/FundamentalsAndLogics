/*

Algorithm

START
    Accept First Number as No1
    Accept Second Number as No2
    Create one variable as ANS
    Perform the addition of No1 and No2
    Stop the addition into variable ANS
    Display the value of ANS
STOP

*/


////////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Write a program which performs the addition of two numbers
//
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : Addition
// Input : Unsigned integer, Unsigned Integer
// Output : Unsigned integer
// Description: Performs addition of 2 numbers
// Author : Harshada Bhangale
//Date: 18/04/2023
//
///////////////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

////////////////////////////////////////////////////////////////////////////////////////////
//  Entry point function
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2, iAns = 0;

    printf("Enter first Number : \n");
    scanf("%d", &iNo1);

    printf("Enter second Number : \n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition of numbers : %d\n" , iAns);
    return 0;
}




