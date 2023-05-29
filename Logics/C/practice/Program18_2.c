/*
Accepts number  of row and col from user and display below pattern

Input  : iRow = 4     iCol = 4

Output : * * * *
         * * * #
         * * # #
         * # # #
         
*/  

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i=iRow-1; i>=0; i--)
    {
        for(j=0; j<iCol; j++)
        {
            if(j<=i)
            {
                printf("* \t");    
            }
            else
            {
                printf("# \t");    
            }
            
        }
        printf("\n");
    }

    printf("\n");
}


int main()
{
    int iValue1 = 0, iValue2=0;

    printf("Enter number of  row and columns \n");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    
    return 0;
}