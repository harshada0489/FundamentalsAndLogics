/*
Accept number of rows and number if columns from user and display below pattern


Input  : iRow = 6 iCol = 6

Output : * * * * * *
         *       * *
         *     *   *  
         *   *     *
         * *       *  
         * * * * * *
*/       

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
  int i = 0;
  int j = 0;

  for(i=iRow; i>=1; i--)
  {
    for(j=1; j<=iCol; j++)
    {
      if((i == 1) || (i == iRow) || (j == 1) || (j == iCol)
      || (i == j))
      {
        printf("*\t");  
      }
      else
      {
        printf(" \t");
      }
    }
    printf("\n");
  }

}

int main()
{

   int iValue1 = 0, iValue2 = 0;

   printf("Enter the umber of row and column \n");
   scanf("%d%d",&iValue1,&iValue2);

   Pattern(iValue1,iValue2);

    return 0;
}