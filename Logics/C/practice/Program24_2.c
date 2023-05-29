/*
Write a program which accept string from user and accept one character. 
Return frequncy of that character

Input  : "Hello World"
          l

Output : 3

*/       

#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str, char ch)
{   
    int iCnt= 0;

 while(*str != '\0')
    {
        if((*str == ch))
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
   char cValue;

   int iRet = 0;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   printf("Enter the charcter to be searched \n");
   scanf(" %c", &cValue);

   iRet = CountChar(arr, cValue);

    printf("%d \n", iRet);
  
   
    return 0;
}