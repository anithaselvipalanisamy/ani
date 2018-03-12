#include<stdio.h>
#include<string.h>
int main()
{
int a,b,i,c,product,k;
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<c;i++)
{
    product=i*i;
    if(c==product)
    {
        k=1;
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
