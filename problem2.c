#include <stdio.h>
int main (void)
{
  float a;
  float b; 
  scanf("%f %f",&a,&b);
  printf("%.0f\n",a+b);
  printf("%.0f\n",a-b);
  printf("%.0f\n",a*b);
  printf("%.2f\n",a/b);
  return 0;
};