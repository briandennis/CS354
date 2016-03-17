#import <stdio.h>
#import <string.h>

#define PI 3.141592
#define TRUE 1
#define FALSE 0

struct Animal {
  char species[10];
  int age;
  double attackMult;
  int health;
  int alive;
};

void decreaseHealth (struct Animal * animal, int decrement){
  animal -> health = (animal -> health) - decrement;
  if(animal -> health < 0){
    animal -> alive = FALSE;
    printf("A %s has died :\( \n", animal -> species);
  }
}

int main (){

  struct Animal bobby = {"Giraffe", 20, 1.9, 100, TRUE};


  printf("Bobby's species: %s \n", bobby.species);

  struct Animal * bobbyPointer = &bobby;

  printf("Bobby's species via pointer: %s \n", bobbyPointer -> species);

  printf("Bobby's attack value for throwing a pie is: %f \n", PI * bobby.attackMult);

  decreaseHealth(&bobby, 110);

  return 1;

}
