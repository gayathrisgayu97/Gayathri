#include<stdio.h>
int main()
{
int a=2;
int b=3;
a^=b^=a^=b;
printf("a=%d \n b=%d", a,b);
return 0;
}
 
 
