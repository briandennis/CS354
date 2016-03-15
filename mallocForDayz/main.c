#import <stdio.h>
#import <string.h>

int main (){

  struct Animal {
    char name[10];
    int age;
    double attackMult;
    int health;
  };

  struct Animal bobby;

  char *namePointer = &bobby.name[0];

  strcpy(namePointer, "Giraffe");
  bobby.age = 49;
  bobby.attackMult = 1.9;
  bobby.health = 100;


  printf("Bobby's name: %s", bobby.name);

  return 1;
}
