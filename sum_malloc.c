#include <stdio.h>

int main(void) {
  int i,n,s=0;
  int *p;
  p=(int*)malloc(n*sizeof(int));
  printf("Enter no. of integers :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",p+i);
    s+=*(p+i);
  }
  free(p);
  printf("Sum of integers : %d",s);
  return 0;
}
