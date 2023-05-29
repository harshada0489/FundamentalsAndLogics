/*
Write a program which accept string from user and convert it into lower case

Input  : "Hello"
Output : "olleh"

*/       

#include<stdio.h>
#include<stdbool.h>

void strlwrx(char *str)
{
 while(*str != '\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            *str = *str+32;
        }
        str++;
    }

}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   strlwrx(arr);
   
    printf("Modified string is : %s \n",arr);
    return 0;
}