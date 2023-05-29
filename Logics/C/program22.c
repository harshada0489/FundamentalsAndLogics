#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iNo % iCnt)  == 0)
        {
            printf("%d\n", iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}


//Time Complexity : O(N)
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
