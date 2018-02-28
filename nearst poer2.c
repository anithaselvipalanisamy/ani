#include<stdio.h>
#include<math.h>
int main()
{
int a,i,c;
scanf("%d",&a);
for(i=0;i<a;i++)
{
c=pow(2,i);
if(a<c)
{
printf("%d",c);
break;
}
}
return 0;
}
