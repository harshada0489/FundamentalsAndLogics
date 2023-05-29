/*
Write a program which accept string from user and accept one character. 
Return index of last occurance of that character

Input  : "Hello World"
          l

Output : 9

*/       

#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch)
{   
    int iCnt= 0;
    int iPos = 0;


 while(*str != '\0')
    {
        if((*str == ch))
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
   char arr[20];
   char cValue;

   int iRet = 0;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   printf("Enter the charcter \n");
   scanf(" %c", &cValue);

   iRet = LastChar(arr, cValue);

    printf("%d \n", iRet);
  
   
    return 0;
}