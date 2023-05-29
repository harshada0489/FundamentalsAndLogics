/*
Write a program which accept string from user and display it in reverse order

Input  : "Hello"
Output : "olleH"

*/       

#include<stdio.h>
#include<stdbool.h>

void Reverse(char *str)
{
 char *start = NULL;
  char *end = NULL;
  char temp = '\0';
  
  start = str;
  end = str;

  while(*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
      temp = *start;
      *start = *end;
      *end = temp;
      
      start++;
      end--;
  }


}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   Reverse(arr);
   
    printf("Reverse string is : %s \n",arr);
    return 0;
}