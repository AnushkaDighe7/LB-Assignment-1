#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(int iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Please Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}