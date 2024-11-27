#include<stdio.h>
int main()
{int a,b,t;
printf("write values of a,b");
scanf("%d%d",&a,&b);
t=a,a=b,b=t;
printf("the value of a is %d and b is %d",a,b);
return 0;
}
