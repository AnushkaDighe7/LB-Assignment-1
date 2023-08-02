#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please Enter the Number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Divisible by 5\n");

    }
    else
    {
        printf("Number is Not Divisible by 5\n");
    }

    return 0;
}
