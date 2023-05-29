#include<stdio.h>

void strNcpyX(char *src, char *dest, int iLength)
{
 
  while(*src != '\0' && (iLength !=0))
  {
      *dest = *src;
      dest++;
      src++;
      iLength--;
  }

  *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr); 

    printf("Enter the number of letters that you want to concat : \n");
    scanf("%d",&iNo);    

    strNcpyX(Arr,Brr,iNo);  
    
    printf("String after copying is : %s \n",Brr); 

    return 0;
}