#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b and c");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && b+c>a && a+c>b)
    printf( "triangle does exist");
    else
    printf("triangle does not exist");
    return 0;
}