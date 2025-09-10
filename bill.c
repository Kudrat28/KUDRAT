#include <stdio.h>

int main() {
float units,bill;
printf("enter the units : ");
scanf("%f",&units);

if ( units<=100 )
{
bill=units*3;}
else if (units<=300) {
bill = (100*3 + (units-100)*5)+180;
}
else if (units <=500)
{
bill = ((100*3)+(200*5)+(units-300)*7)+200;
}
else
{
bill = ((100*3)+(200*5)+(200*7)+(units-500)*10)+300;
}
printf("Energy charged =%.2f\n",bill);
return 0;
}

