#include<stdio.h>
int main()
{
    int num1,num2,n,total;
    printf("sum calculation:\n");
    scanf("%d\n%d",&num2,&num1);
    n=(num2-num1)/1+1;
    total=n*(n+1)/2;
    printf("result=%d\n",total);
    return 0;
}
