/*
Write a program which accept string from user and check whether it contains vowels in it or mot

Input  : "marvellous"
Output : True

*/       

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
   
 bool bRet = false;
 if((*str >= 'A') || (*str <= 'E') || (*str >= 'I') || (*str <= 'O') ||(*str >= 'U') ||
    (*str >= 'a') || (*str <= 'e') || (*str >= 'i') || (*str <= 'o') ||(*str >= 'u'))
   {
      bRet = true;
   }

   return bRet;

}

int main()
{
   char arr[20];
   bool bRet = false;

   printf("Enter the string \n");
   scanf("%[^'\n']s", arr);

   bRet = ChkVowel(arr);

   if(bRet ==  true)
   {
     printf("Contains vowels \n");
   }
   else
   {
      printf("There is no vowels \n");
   }

   
   
    return 0;
}