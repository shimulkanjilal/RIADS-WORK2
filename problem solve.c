#include<stdio.h>
int main()
{
    int w;
    printf("ENTER THE WEIGHT BETWEEN (1<=W<=100):\n");
    scanf("%d",&w);
    if(w%2==1)
    {
     printf("NO");
    }
    else
    {
     printf("YES");
    }
    return 0;
}
