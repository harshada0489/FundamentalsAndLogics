#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue1);

   iRet = CountDigits(iValue1);
   printf("No of digits : %d \n" , iRet);
 
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
 