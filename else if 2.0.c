#include<stdio.h>
int main()
{
    int units;
    int bill;
    printf("Enter using units: ");
    scanf("%d",&units);
    if(units <= 100){
        bill = units*5.0;
    }
    else if(units <= 200){
        bill = (100*5.0)+(units-100)*6.0;
    }
    else if(units <= 300){
        bill = (100*5.0)+(100*6.0)+(units-200)*7.0;
    }
    else{bill = (100*5.0)+(100*6.0)+(100*7.0)+(units-300)*8.0;
    }
    printf("Total Electricity bill:%d TAKA\n",bill);
    return 0;
}
