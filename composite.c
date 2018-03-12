#include<stdio.h>
#include<string.h>
int main()
{
int i,a,k=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
    if(a%i==0)
    {
        k=1;
        break;
    }
}
if(k==1)
{
    printf("yes");
}
else

{
    printf("no");
}
return 0;
}
