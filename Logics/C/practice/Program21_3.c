/*
Accept character from user. If it is capital then display all the characters from the input charachter till Z.
If input character is small then print all the characters in reverse order till a. In other cases return directly.

Input  : Q
Output : Q R S T U V W Z Y Z 

*/       

#include<stdio.h>

void Display(char ch)
{
      int iCnt=0;

     if((ch>='A') && (ch <='Z'))
     {
        for(iCnt=ch; iCnt<=90; iCnt++)
        {
            printf("%c \t", iCnt); 
        }
        printf("\n");
     }
     else if((ch>='a') && (ch <='z'))
     {
        for(iCnt=ch; iCnt>=97; iCnt--)
        {
            printf("%c \t", iCnt); 
        }
        printf("\n");
     }
     else
     {
        return;
     }

}

int main()
{
   char cValue='\0';
   
   printf("Enter the character \n");
   scanf("%c", &cValue);

    Display(cValue);
   
    return 0;
}