/*
Write a program which accept string from user and accept one character. 
Check whether that character is present in string or not

Input  : "Hello World"
          e

Output : True

*/       

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{   
    bool bFlag = false;

 while(*str != '\0')
    {
        if((*str == ch))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
   char arr[20];
   char cValue;

   bool bRet = false;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   printf("Enter the charcter to be searched \n");
   scanf(" %c", &cValue);

   bRet = ChkChar(arr, cValue);

   if(bRet == true)
   {
    printf("Character found \n");
   }
   else
   {
    printf("Character not found \n");
   }
   
    return 0;
}