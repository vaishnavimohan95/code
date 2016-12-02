#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  if(num<1)
    printf("\n0");
  else
  {
    printf("\n%d",num%100);
  }
  return 0;
 }
