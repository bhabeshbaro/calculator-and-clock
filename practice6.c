#include<stdio.h>
int main()
{
    int day;
    printf("the number of day:\n");
    scanf("%d",day);



    if (day==1)
    printf("the day is monday:\n");

    else if (day==2)
    printf("the day is tuesday:\n");

    else if (day==3)
    printf("the day is wednesday:\n");

    else if (day==4)
    printf("the day is thursday:\n");

    else if (day==5)
    printf("the day is friday:\n");

    else if (day==6)
    printf("the day is satarday:\n ");

    else if (day==7)
    printf("the day is sunday:\n");

    else
    printf("invalid day!!");

    return 0;

}