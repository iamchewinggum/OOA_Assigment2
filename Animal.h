#ifndef Animal.h
#define Aminal.h


class Aminal {
public:
    Animal(); //Constructor 
    ~Animal(); //Destructor 
    Virtual speak(); //Virtual function 

    void Jump(); //Non Virtula function 

private: 

    int speak_counter;

    int jump_counter;


};

#endif