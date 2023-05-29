/*
Write a program which accept string from user and count number of capital characters

Input  : "Marvellous Multio OS"
Output : 4

*/       

#include<stdio.h>

int CountCapital(char *str)
{
   int iCnt =0;
   
   if(*str == '\0')
   {
     printf("Please enter a valid string");
     return 0;
   }

   while(*str != '\0')
   {
     if((*str >= 'A') && (*str <= 'Z'))
     {
          iCnt++;
     }
     str++;
   }

   return iCnt;

}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   iRet = CountCapital(arr);

   printf("%d \n", iRet);
   
    return 0;
}