#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(){
    cout << "creating Cat"<< endl;
}

Cat::~Cat(){
    cout << "destroying Cat"<< endl;
}

void Cat::Speak(){
    cout << "Meow"<< endl;
}

void Cat::Jump(){
    cout << "cat boing"<< endl;
}