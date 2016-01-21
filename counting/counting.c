#include <stdio.h>

int main(){
  printf("Hello, I am going to count the numbers from 1 to 5000 and calculate their sum\n");

  int count = 0;

  for(int i = 1; i <= 5000; i++){
    printf("%d\n",i);
    count += i;
  }
  printf("The sum is: %d", count);
  return 1;
}
