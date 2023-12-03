#include<stdio.h>
#include<math.h>
int main()
{

float p,r,t;
printf("Enter principal Amount  : ");
scanf("%f",&p);

printf("Enter Rate : ");
scanf("%f",&r);

printf("Enter time : ");
scanf("%f",&t);

float ci=p*pow((1+r/100),t);
printf("Compound Interset is %.2f",ci);
return 0;
}

