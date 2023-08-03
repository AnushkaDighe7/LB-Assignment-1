#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == TRUE)
    {
        printf("Enterd Number is Even\n");
    }
    else
    {
        printf("Entered Number is Odd\n");
    }
    return 0;
}