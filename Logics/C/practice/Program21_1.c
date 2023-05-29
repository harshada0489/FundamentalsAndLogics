/*
Write a program which displays ASCII table. 
Table contains symbol, Desimal, HexaDecimal and Octal representation of wvery member from 0 to 255

*/       

#include<stdio.h>

void DisplayASCII()
{
     int iCnt = 0;
     printf("ASCII Table \n");

     for(iCnt=0; iCnt<=255; iCnt++)
     {
        printf("%c\t%d\n",iCnt,iCnt);
     }

}

int main()
{
    DisplayASCII();
   
    return 0;
}