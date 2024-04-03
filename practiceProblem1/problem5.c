#include <stdio.h>
int main (void){
  int a ;
  scanf("%d",&a);
  if(a>20000){
    printf("Gucci Bag\n Gucci Belt");
  } else if(a>=10000){
  printf("Gucci BagGucci Bag");
  } else if(a >= 5000){
  printf("Levis Bag");

  }else{
    printf("Something");
  }
}