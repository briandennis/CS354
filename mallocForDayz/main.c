#import <stdio.h>
#import <string.h>

int main (){

  struct Animal {
    char name[10];
    int age;
    double attackMult;
    int health;
  };

    *Animal createAnimal (char name[10], int age, double attackMult){

    struct Animal returnAnimal = (struct Animal) malloc(sizeof(struct Animal));

    strcpy(&returnAnimal.name, name);
    returnAnimal.name = name;
    returnAnimal.age = age;
    returnAnimal.attackMult = attackMult;
    returnAnimal.health = 100;

    return &returnAnimal;
  }

  struct Animal *bobby = createAnimal("Giraffe",20,1.9);


  printf("Bobby's name: %s", *bobby.name);

  return 1;

}
