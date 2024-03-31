#include <stdio.h>
int main (){
  // arithmetic test
 /*  int a = 5,b=2;
  float add = a*1.0/b;

  printf("%f",add); */
  int x ;
  scanf("%d",&x);
 /*   if(x==2){
    printf("hallo world");
   }; */
   //nested if else
   if(x >= 1000){
    printf("hallo world\n");
    if (x>=2000){
      printf("hallo world yes\n");
    }else{
      printf("hallo world no\n");
    }
   }else{
    printf("hallo world back\n");
   }
  return 0;
 }