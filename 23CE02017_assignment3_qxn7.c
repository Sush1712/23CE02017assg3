#include<stdio.h>
int main()
{
    float M,N,K;
    float T,W;
     printf("enter M,N,K");
     scanf("%f %f %f", &M ,&N,&K);
     W=N/K;
     T=M*W;
     if(T>=90)
     {
        printf("\n Final Score=%f",T);
        printf("\n Grade=Ex");
     }
     else if(T>=80 && T<=89)
     {
        printf("\n Final Score=%f", T);
        printf("\n Grade=A");
     }
     else if(T>=70 && T<=79)
     {
        printf("\n Final Score=%f", T);
        printf("\n Grade=B");
     }
     else if(T>=60 && T<=69)
     {
        printf("\n Final Score=%f",T);
        printf("\n Grade=C");
     }
     else if(T>=50 && T<=59)
    {
        printf("\n Final score =%f",T);
        printf("\n Grade= D");
    }
    else if(T>=40 && T<=49)
    {
        printf("\n Final Score=%d",T);
        printf("\n Grade=P");
    }
    else{
        printf("\n Final Score=%f", T);
        printf("\n Fail");
    }
    return 0;
}