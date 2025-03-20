#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b&&b==c)
    {
        printf("equilateral triangle\n");
    }
    else if (a==b||b==c||c==a)
    {
        printf("isosceles triangle\n");
    }
    else
    {
        printf("scalene triangle\n");
    }
    }
    else
    {
        printf("nothing\n");
    }
    return 0;
}
