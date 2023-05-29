/*
Accept single digit number from user and print it into word
Input  : 9
Output : Nine

*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0) //updater
    {
        iNo = -iNo;
    }
   switch(iNo)
   {
    case 1 :
        printf("One \n"); 
        break;
    case 2 :
        printf("Two \n"); 
        break;
    case 3 :
        printf("Three \n"); 
        break;
    case 4 :
        printf("Four \n"); 
        break;
    case 5 :
        printf("Five \n"); 
        break;
    case 6 :
        printf("Six \n"); 
        break;
    case 7 :
        printf("Seven \n"); 
        break;
    case 8 :
        printf("Eight \n"); 
        break;
    case 9 :
        printf("Nine \n"); 
        break;
   }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}