#import <stdio.h>
#import <string.h>

int main (){

  struct Animal {
    char species[10];
    int age;
    double attackMult;
    int health;
  };

  struct Animal bobby = {"Giraffe", 20, 1.9, 100};


  printf("Bobby's species: %s \n", bobby.species);

  struct Animal * bobbyPointer = &bobby;

  printf("Bobby's species via pointer: %s", bobbyPointer -> species);

  return 1;

}
