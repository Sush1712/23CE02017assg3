#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,area;
    printf("Enter x1,y1,x2,y2,x3,y3");
    scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2,&x3,&y3);
    area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (area==0)
    printf("All points lie on one straight line");
    else
    printf("All points does not lie on one straight line");
    return 0;
}