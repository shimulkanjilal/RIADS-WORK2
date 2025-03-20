#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("This will be a Triangle.\n");
        if(a==b && b==c)
        {
            printf("This triangle is equilateral.\n");
        }
        else
        {
            printf("This triangle is not equilateral.\n");
        }
        if(a==b || b==c || c==a)
        {
            printf("This triangle is isosceles.\n");
        }
        else
        {
            printf("This triangle is not isosceles.\n");
        }

        if(a!=b&&b!=c&&c!=a)

        {
            printf("This triangle is scalene.\n");

        }
        else
        {
            printf("This triangle is not scalene.\n");
        }
    }
    else
    {
       printf("This will not be a triangle.\n");
    }
    return 0;
}

