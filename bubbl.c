#include<stdio.h>

int swap(int*,int*);
int main()
{
  int count=0;
  printf(":::::::::::::::  BUBBLE SORTING :::::::::::::::::::::");
  printf("\nElements of array :");
  int ar[7]={1,2,3,0,4,1,4};
  for(int i=0; i<7; i++)
    printf("%d ",ar[i]);
  while(count<7)
  {
    for(int i=0;i<6;i++)
    {
      if(ar[i]>ar[i+1])
        swap(&ar[i],&ar[i+1]);
    }
    count ++;
  }
  printf("\n Elements after sorting :");
  for(int i=0;i<7;i++)
  {
    printf("%d ",ar[i]);
  }
  return 0;
}
 int swap(int *a ,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
  return 0;
}












