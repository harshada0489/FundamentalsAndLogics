/*
Accept character from userand check whether it is special symbol or not(!,@,#,$,%,^,&,*)

Input  : %
Output : TRUE

*/       

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
      int iCnt=0;
      bool bFlag = false;

     if(((ch>=33) && (ch <=47)) || ((ch>=58) && (ch <=64)))
     {
      bFlag = true;
     }
     return bFlag;

}

int main()
{
   char cValue='\0';
   bool bRet = false;

   printf("Enter the character \n");
   scanf("%c", &cValue);

   bRet = ChkSpecial(cValue);

   if(bRet == true)
   {
      printf("It is a special character \n");
   }
   else
   {
      printf("It is not a special character \n");
   }

   
    return 0;
}