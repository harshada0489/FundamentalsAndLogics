#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;

    bool bRet = false; 

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime no \n", iValue);
    }else{
        printf("%d is not a prime no \n", iValue);
    }
    return 0;
}

/*

Time Complexity 
    if prime number  --> O(N/2)
    if not a prime number --> O(X) 
                         where X = the 1st factor of that number

 CPU pre fetchiing of data for next 10 instructions in instruction queue
  if you write the function with return value inside the for loop
  it is done abnormally
  So as a good programmer, dont write retrun inside for loop, 
                            instead break the for loop


*/
 