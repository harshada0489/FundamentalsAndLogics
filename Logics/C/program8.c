//Write a program which accepts the marks and displayhr e class accordingly
//0 to 34   Fail
//35 to 49  Pass class
//50 to 59  second class
//60 to 74  First class
//75 to 100 Distinction with first class

#include<stdio.h>    

void DisplayClass(float fMarks)
{
    if((fMarks<0.0f) || (fMarks > 100.00)) //filter
    {
        printf("Invalid Input \n");
        printf("Please enter the marks in between the range 0 to 100 \n");
        return;
    }

    if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail \n");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You got pass class \n");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("You got second class \n");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You got first class \n");
    }
    else if((fMarks >= 75.00f) && (fMarks <= 100.00f))
    {
        printf("You got distinction with first class \n");
    }

}

int main()
{
    float fValue=0;

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%f", &fValue);

    DisplayClass(fValue);
    
    return 0;
}
