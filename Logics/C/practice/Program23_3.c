/*
Write a program which accept string from user and toggle the case

Input  : "Hello"
Output : "olleh"

*/       

#include<stdio.h>
#include<stdbool.h>

void strtogglex(char *str)
{
 while(*str != '\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            *str = *str+32;
        }
        else if((*str >='a') && (*str <='z'))
        {
            *str = *str-32;
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

   strtogglex(arr);
   
    printf("Modified string is : %s \n",arr);
    return 0;
}