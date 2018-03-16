#include<stdio.h>
int main() {
  int  n,k,i,l;
  scanf("%d%d",&n,&k);
  int a[n];l=k;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]==k)
      {
          k++;
      }
     
  }
       if(l!=k)
        {
          printf("yes");
         
      }
      else
      {
          printf("no");
          
      }
  return 0;
}
