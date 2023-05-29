/*
Write a program which accept string from user and display only digits from the string

Input  : "Hello123"
Output : 123

*/       

#include<stdio.h>
#include<stdbool.h>

void DisplayDigit(char *str)
{

 while(*str != '\0')
    {
        if((*str >='1') && (*str <='9'))
        {
            printf("%c", *str);
        }
        str++;
    }

    printf("\n");
}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   DisplayDigit(arr);
    return 0;
}