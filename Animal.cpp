#include "Animal.h"
#include <iostream>

using namespace std;


//constructor definition
Animal::Animal(){
cout<<"creating Animal"<<endl;
}
//destructor
Animal::~Animal(){
cout<<"destroying Animal"<<endl;
}

//function definition 
void Animal::Speak(){
    cout<<"Speaking"<<endl;
}
//function definition 
void Animal::Jump(){
    cout << "jumping" <<endl;
}

class RobotLeg:public Leg
{
    public:
        RobotLeg()
        {
            cout << "Make Robot Leg."<<endl;
        }
        void action()
        {
            cout << "Robot leg moves."<<endl;
        }
} 


