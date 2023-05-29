/*
Accept character from user. If charachter is small display its corresponding capital character, 
and if it is small then display its corresponding capital. In other cases display as it it.

Input  : M
Output : m 

*/       

#include<stdio.h>

void Display(char ch)
{
    int Gap = 'a' - 'A';

     if((ch>='A') && (ch <='Z'))
     {
        printf("%c \n", (ch+Gap));
     }
     else if((ch>='a') && (ch <='z'))
     {
        printf("%c \n", (ch-Gap));
     }
     else
     {
        printf("%c \n", ch);
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