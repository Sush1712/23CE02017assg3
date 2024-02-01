#include<stdio.h>
int main()
{
    int days;
    printf("Enter no of days");
    scanf("%d", &days);
    if(days<=5)
    {
        printf("Fine is 1 rupee");
    }
    else if(days>=6 && days<=10)
    {
        printf("Fine is 2 rupees");
    }
    else if(days>10 && days<=30)
    {
        printf("Fine is 5 rupees");
    }
    else
    {
        printf("Membership is cancelled");
    }
    return 0;
}