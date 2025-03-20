#include<stdio.h>
int main()
{
    int a;
    char result;
    printf("Enter the number:\n");
    scanf("%d",&a);
    result=(a>=0)?printf("positive"):printf("negative");
    return 0;
}
