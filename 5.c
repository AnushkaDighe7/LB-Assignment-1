#include<stdio.h>
void Accept(int iNo)
{
    int iCnt = 0;
    for(int iCnt = 1;iCnt<=5;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}