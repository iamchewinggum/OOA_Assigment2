#ifndef ANIMAL_H
#define ANIMAL_H


class Animal {
public:
    Animal(); //Constructor 
    ~Animal(); //Destructor 
    virtual void Speak() = 0; //Virtual function 

    void Jump(); //Non Virtula function 

private: 

    int speak_counter;

    int jump_counter;


};

#endif


