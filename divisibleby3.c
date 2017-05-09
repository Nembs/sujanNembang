#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ans;
    printf("Enter your number:");
    scanf("%d",&n);
    ans=n%3;
    if(ans==0)
    {
        printf("The entered number is divisible by 3");
    }
    else
        printf("The entered number is not divisible by 3");
    getch();
}
