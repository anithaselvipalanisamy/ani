#include<stdio.h>
int main() {
  int  n,k,i,j=1;
  scanf("%d%d",&n,&k);
  int a[n],b[k];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      if(a[i]%2!=0)
      {
          b[j]=a[i];
          printf("%d\t",b[j]);
          j++;
          
      }
     
  }
  for(j=1;j<=k;j++)
  {
      if(k==j)
      {
      printf("\n%d",b[j]);
      break;
      }
  }

  return 0;
}
