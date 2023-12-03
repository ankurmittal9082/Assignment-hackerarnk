#include<stdio.h>
int main()
{

int a,b,c;
printf("Enter A marks  : ");

scanf("%d",&a);
printf("Enter B marks  : ");
scanf("%d",&b);
printf("Enter C marks  : ");
scanf("%d",&c);

if(a>b && a>c)
{
	printf("%d is a greatest number .",a);
}

if(b>a && b>c)
{
	printf("%d is a greatest number .",b);
}
if(c>b && c>a)
{
	printf("%d is a greatest number .",c);
}


return 0;
}

