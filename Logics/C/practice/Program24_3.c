/*
Write a program which accept string from user and accept one character. 
Return index of first occurance of that character

Input  : "Hello World"
          l

Output : 2

*/       

#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch)
{   
    int iCnt= 0;

 while(*str != '\0')
    {
        if((*str == ch))
        {
            break;
        }
        iCnt++;
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

   printf("Enter the charcter \n");
   scanf(" %c", &cValue);

   iRet = FirstChar(arr, cValue);

    printf("%d \n", iRet);
  
   
    return 0;
}