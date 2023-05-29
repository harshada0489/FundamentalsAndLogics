#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=(iNo/2); iCnt++) 
    {
        if((iNo % iCnt)  == 0)
        {
            iSum = iSum + iCnt;
            printf("%d\n", iCnt);
        }
    }

    printf("Sum = %d\n", iSum);
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}


//Time Complexity : O(N/2)
// where N is the input (Natural Number)

/*

iNo = 8;                                  _________\  iNo
                                        /          /
iNo % 1 == 0            for(iCnt =1; iCnt <= 8; iCnt++)   
iNo % 2 == 0            {
iNo % 3 == 0                iNo % ___iCnt___ == 0
iNo % 4 == 0                printf("%d", iCnt);
iNo % 5 == 0            }
iNo % 6 == 0
iNo % 7 == 0
iNo % 8 == 0

*/
