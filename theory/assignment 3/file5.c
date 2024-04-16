#include"stdio.h"
int fun1(int *,int *);
void main()
{
int a=10,b=20,sum,z=5;
int *p,*q;
p=&a,q=&b;
z=fun1(p,q);
printf("x=%d y=%d p=%d q=%d\n",a,b,*p,*q);
printf("z=%d\n",z++);
}
int fun1(int *a,int *b)
{
*a=*a+*b;
*b=*a+*b;
int sum=*a+*b;
printf("a=%d b=%d sum=%d\n",*a,*b,sum);
return sum;
}
