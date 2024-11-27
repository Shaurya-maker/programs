#include<stdio.h>
#include<math.h>
int main()
{float s,c,r,t,p;
printf("enter rate,principal and time in this order\n");
scanf("%f%f%f",&r,&p,&t);
printf("the simple interest is %f and compound interest is %f ",p*t*r/100,p*(pow(1+r/100,t)-1));
return 0;
}
