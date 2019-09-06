#include<stdio.h>
int add(int a,int b)
{
if(!a)
return b;
else
return add((a&b)<<1,a^b);
}
int main()
{
int c=add(2,3);
printf("%d",c);
}


