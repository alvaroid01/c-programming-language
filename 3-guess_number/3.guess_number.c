#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getRandomNumber(){
  srand((unsigned)time(NULL));  
    int n = rand() % 100;       
    printf("%d\n", n);
    return n;
}

int main(){
  int input,number,diff;
  char output;
  number = getRandomNumber();
  
  printf("Enter a number:");
  scanf("%d",&input);
  diff = number - input;

  printf("Difference is: %d",diff);
  while (
    number != input
  ) {



      
      if (diff <10) {
       printf("Caliente Caliente: \n");
      scanf("%d",&input);
        diff = number - input;
      }else if (diff <20) {
       printf("CAliente pero no mucho : \n");
      scanf("%d",&input);
        diff = number - input;
      }
      else if (diff <30) {
       printf("Empieza a calentar : \n");
        scanf("%d",&input);
        diff = number - input;

      }
    
     
     

    
  }

         printf("You guessed it! \n");


}
