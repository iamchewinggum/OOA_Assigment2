#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(){
    cout<<"creating Dog"<<endl;

}


Dog::~Dog(){
    cout << "destroying Dog"<<endl;
}


void Dog::Speak(){
    cout << "Bow wow" << endl;
}

void Dog::Jump(){
    cout << "dog boing" << endl;
}