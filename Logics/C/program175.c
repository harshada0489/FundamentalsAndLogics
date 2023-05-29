#include<stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while(*str != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }

        str++;
    }

    printf("Capital case letter count : %d \n", iCapCnt);
    printf("Small case letter count : %d \n", iSmallCnt);

}

int main()
{
    char Arr[20];
   
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

     Frequency(Arr);  
    
    return 0;
}