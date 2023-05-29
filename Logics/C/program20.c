#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)  // Filter for negative input
    {
        printf("Error: Invalid Input. \n");
        printf("Note: Please enter positive number. \n");
        return;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo;  iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter the frequncy : \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}


// #include<stdio.h>

// void Display(int iNo)
// {
//     if(iNo < 0)  // Updater
//     {
//         iNo = -iNo;
//     }
//     int iCnt = 0;
//     for(iCnt = 1; iCnt <= iNo;  iCnt++)
//     {
//         printf("%d\n", iCnt);
//     }
// }
// int main()
// {
//     int iValue = 0;
    
//     printf("Enter the frequncy : \n");
//     scanf("%d",&iValue);
//     Display(iValue);
//     return 0;
// }