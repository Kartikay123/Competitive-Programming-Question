#include"Kartikay.h"
/* virtual function for polymorphism
in order to remove the default behaviour seen in pointerin derived class
virtual function is used which simply claae the function and desired variable*/
class base{

public:
int _base;
virtual void display(){ /* this is virtual function now display of derived class willl excecute*/
    cout<<"displaying base class variable :"<<_base<<endl;
}
};
class derived :public base{
public:
int _derived=98;
void display(){
    cout<<"displaying base class variable :"<<_base<<endl;
    cout<<"displaying derived class variable :"<<_derived<<endl;
}
};
int main(int argc, char const *argv[])
{
    base *basepointer;
    base object1;
    derived *derivedpointer;
    derived object2;
    basepointer = &object2;
    basepointer->_base =34;
    basepointer->display(); /*this display the will call ths function of  derived class*/
    /*this is run time*/
    

    return 0;
}
