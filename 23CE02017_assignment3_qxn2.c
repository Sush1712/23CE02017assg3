#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x,y and z;");
    scanf("%d %d %d" , &x, &y, &z);
    if (x>y && y>z)
    {
        printf("x=%d is maximum", x);
    }
    else if (y>z && y>z)
    {
        printf("y=%d is maximum", y);
    
    }
    else{
        printf("z=%d is maximum", z);
    
    }
    return 0;

}