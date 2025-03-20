#include<stdio.h>
int main ()
{
    int a;
    printf ("Enter a number between 1-100\n");
    scanf ("%d", &a);
    if (a>0 && a<=40)
    {
        printf ("First block!\n");
        printf ("Value of a is = %d", a);

    }
    else if (a>40 && a <=80)
    {
        printf ("second Block!\n");
        printf ("Value of a is = %d", a);
        }
        else if (a >80 && a <=100)
        {
            printf ("Third Block!\n");
            printf ("Value of is a = %d",a);
        }
        else
        {
            printf("Fourth Block!(It's not between 1-100)\n");
            printf ("value of is a = %d",a);
        }
        return 0;

}
