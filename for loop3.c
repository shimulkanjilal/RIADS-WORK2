
#include<stdio.h>
int main()
{
     int a,n,sum=0;
     printf("Input Value of terms:\n");
     for(a=1;a<=10;a++)
     {
         printf("%d.",a);
        scanf("%d",&n);
        sum=sum+n;
     }
      printf("\nTotal sum:%d\n",sum);

}
