#include<stdio.h>
#include<stdbool.h>

bool checkPalindrome(char *str)
{
  char *start = NULL;
  char *end = NULL;

  start = str;
  end = str;

  while (*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
    if(*start != *end)
    {
      break;
    }
    start++;
    end--;
  }

  if(start < end)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int main()
{
  char Arr[20];
  bool bRet = false;

  printf("Enter the string \n");
  scanf("%s[^'\n']s",Arr);

  bRet = checkPalindrome(Arr);

  if(bRet == true)
  {
    printf("String is palindrome \n");
  }
  else
  {
    printf("String is not palindrome \n");
  }

  

  return 0;
}