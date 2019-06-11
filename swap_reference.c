#include<stdio.h>

void swap(int *,int *);

int main()
{
  int a,b;
  printf("Enter values of two integers :");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("Values after changing: a= %d, b=%d",a,b);
  return 0;
}

void swap(int *m,int *n)
{
  int *temp;
  temp=*m;
  *m=*n;
  *n=temp;
}
