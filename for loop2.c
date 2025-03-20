
#include<stdio.h>
int main()
{
     int a,sum=0;
     printf("The sum between 1-10:\n");
     for(a=1;a<=10;a++)
     {
           sum=sum+a;
         printf("%d.",a);
     }
     printf("\nTotal sum:%d\n",sum);
     return 0;
}
