#include<stdio.h>

int main()
{
int a;
printf("Who is the Captain of Indian Cricket Team?\n" "Options are: \n" "1.Hardik\n" "2.Virat \n" "3.Rohit \n" "4.Dhoni \n" "5.Sachin \n");
scanf("%d",&a);
switch (a)
{
case 1:
printf("NO \n Sorry incorrect option");
break;

case 2:
printf("YES \n Correct Answer !!");
break;

case 3:
printf("NO \n  Sorry incorrect option");
break;

case 4:
printf("NO \n No longer the captain");
break;

case 5:
printf("NO \n Sorry no longer in the team");
break;

defult:
printf("Not allowed");
}
}

 
