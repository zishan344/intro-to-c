#include <stdio.h>
int main (){
 
//  problem 1
/* printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100%% dedication to learn!\tI will succeed one day."); */
// problem 2
/* 
    long long a ;
    long long b ;
    scanf("%lld %lld", &a,&b);
    printf("%lld", a*b);
 */

//problem 3

    int n;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
        if(i % 3 == 0 && i % 7 == 0)
        {
        printf("%d\n",i);

        }
            
         
    };


 
  return 0;
 };