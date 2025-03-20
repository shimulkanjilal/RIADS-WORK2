#include<stdio.h>
int main()
{
    int a,b;
    printf("Check the discount:\n");
    scanf("%d\n%d",&a,&b);
    if(a==1 && b>=1000)
    {
        printf("You get 25%% discount");
    }
    else
    {
        printf("You get no discount");
    }
    return 0;
}
