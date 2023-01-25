#include <stdio.h>

// This program uses a reversed version of Russian Multiplication (https://www.youtube.com/watch?v=HJ_PP5rqLg0) to multiply 2 numbers

int main(){
  int a, b, i=0, sum_of_a=0;
  scanf("%d",&a);
  scanf("%d",&b);
  printf("Computing product of %d and %d... \n", a, b);
  // The main loop that follows the algorithm
  while (b!=1) {
    i++;
    a*=2;
    b/=2;
    if (b%2!=0){
      sum_of_a += a;
      printf("%d \t %d \n", a, b); // prints only the rows that are not crossed out
    }
  }
  
  printf("Product: %d \n",sum_of_a);
  
  return 0;
}
