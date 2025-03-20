#include<stdio.h>
int main()
{
    int marks,as;
    printf("Enter the grade:\n");
    scanf("%d", & marks);

    switch(marks)
    {
   case 1:
   /*marks will be (80-100)*/
        printf("A+");
        break;
    case 2:
    /*marks will be (75-79)*/
        printf("A");
        break;
    case 3:
    /*marks will be (70-74)*/
        printf("A-");
        break;
    default:
        printf("fail");
    }
   return 0;
}
