#include<stdio.h>
void Display(int iNo)
{
   //int iCnt = 0;
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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
