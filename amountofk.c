#include<stdio.h>
int main() {
  int  n,k,i,l;
  scanf("%d%d",&n,&k);
  int a[n];l=0;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]==k)
      {
          l++;
      }
     
  }
  printf("%d",l);
       
  return 0;
}
