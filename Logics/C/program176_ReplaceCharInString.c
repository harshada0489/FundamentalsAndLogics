#include<stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str)
{
    while(*str != '\0')
    {
        if((*str ==' '))
        {
            *str = '_';
        }
        str++;
    }

}

int main()
{
    char Arr[20];
   
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

     Frequency(Arr);  
    
    printf("%s",Arr); 
    return 0;
}