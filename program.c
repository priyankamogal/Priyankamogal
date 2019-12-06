#include<stdio.h>
int main()
{  
int i,f;
printf("%d",&x); 
for(i=2;i<=x/2;i++)
{
f=1;
if(x%i==0)
{
f=0;
break;
}
}
if(f==1)
{
printf(“prime”);
}
else
{
printf(“not prime”);
}
return 0;
}