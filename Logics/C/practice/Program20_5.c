/*
Accepts Division of student from user depends on the division display exam timing. There are 4 divisions 
inschool as A,B,C,D. Exam of division A is at 7 AM, Bat 8.30 AM, C at 9.20 AM and D at 10.30 AM
(Application should be case insensitive)

Input  : C

Output : Your exam at 9.20 AM

*/       

#include<stdio.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


void DisplaySchedule(char chDiv)
{
        if((chDiv == 65) || (chDiv == 97))
        {
            printf("Your exam at 7 AM \n");
        }
        else if((chDiv == 66) || (chDiv == 98))
        {
            printf("Your exam at 8.30 AM \n");
        }
        else if((chDiv == 67) || (chDiv == 99))
        {
            printf("Your exam at 9.20 AM \n");
        }
        else if((chDiv == 68) || (chDiv == 100))
        {
            printf("Your exam at 10.30 AM \n");
        }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
   
    return 0;
}