#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue1);

   iRet = SumDigits(iValue1);
   printf("Sum of No of digits : %d \n" , iRet);
    return 0;
}

/*

iNo = 761;

iDigit = iNo % 10           1
iNo = iNo /10               76

iDigit = iNo % 10           6
iNo = iNo /10               7

iDigit = iNo % 10           7
iNo = iNo /10               0

*/
 