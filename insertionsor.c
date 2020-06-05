#include<stdio.h>

int inser(int b[],int s)
{
  int j,temp;
  for(int i=0;i<s;i++)
  {
    temp=b[i];
    j=i;
    while(j>0 && temp<b[j-1])
    {
      b[j]=b[j-1];
      j--;
    }
    b[j]=temp;
  }
  printf("\n\nNos after sorting :");
  for(int i=0;i<s;i++)
  {
    printf("%d ",b[i]);
  }
}
int main()
{
  printf(":::::::::::::::::::::::::::::::::::::::::: INSERTION SORTING :::::::::::::::::::::::::::::::::::::::::::\n");
  int a[8]={5,4,7,27,15,9,2,1};
  printf("Nos for sorting :");
  for(int i=0;i<7;i++)
    printf("%d ",a[i]);
  inser(a,7);
  return 0;
}














