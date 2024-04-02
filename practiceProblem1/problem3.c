#include <stdio.h>

int main (void)
{
  int a;
  scanf("%d",&a);
  int num = a%2;
   if(num){
    printf("odd");
   }else{
    printf("even");
   }
};