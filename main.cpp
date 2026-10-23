#include "Cat.h"
#include "Dog.h"
#include <iostream>
using namespace std;


//client
int main(){
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();

    for (int i = 0; i < 3; i++){
        animals[i]->Speak();
        animals[i]->Jump();

    }

    for(int i = 0; i < 3; i++){
        delete animals[i];
    }

    
}

