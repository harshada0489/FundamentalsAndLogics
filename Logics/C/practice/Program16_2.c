/*
Accepts number  of row and col from user and display below pattern

Input  : iRow = 4     iCol = 4

Output : A B C D
         a b c d
         A B C D
         a b c d
*/  

#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i=1; i<=iRow; i++)
    {
        char ch = '\0';

        for(j=1, ch='A'; j<=iCol; j++, ch++)
        {
            if((i%2)==0)
            {
                printf("%c \t", (ch+32));
            }
            else
            {
                printf("%c \t", ch);
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