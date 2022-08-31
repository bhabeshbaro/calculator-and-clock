#include<stdio.h>
int main()
{
    char operator;
    double first ,second;
    printf("\n enter the operator(+,-,/,*): ");
    scanf("%c",&operator);

    printf("\n enter the numbers:");
    scanf("%lf  %lf",&first,&second);
    switch (operator)

{
case'+':
printf("%lf+%lf=%lf",first,second,(first+second));
break;

case'-':
printf("%lf-%lf=%lf",first,second,(first-second));
break;

case'/':
printf("%lf/%lf=%lf",first,second,(first/second));
break;

case'*':
printf("%lf*%lf=%lf",first,second,(first*second));
break;


 default:
 printf("invalid operator");


}


}