#include<stdio.h>
int main()
{float m,g,h,v;
printf("enter mass,gravity,height,velocity in order");
scanf("%f%f%f%f",&m,&g,&h,&v);
printf("the mechanical energy is %f",m*g*h+(m*v*v)/2);
return 0;
}
