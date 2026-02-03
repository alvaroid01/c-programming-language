#include <stdio.h>

int main(){
  int a,b,c;
   a = 0;
   b = 1;
   c = 0;
   
   while (c<100) {
    c=a+b;
    printf("%d",c); 
    printf("\n"); 
    a=b;
    b=c; 
   }
   

}
