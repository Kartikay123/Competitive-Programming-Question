#include"Kartikay.h"
/* polymorphism is of two tupe:
1)compiler base and Run base
compiler base ex are function and opertaiion overloading and 
Run base ex are virtula function*/


/*pointer in derived class*/
class base{
public:
int _base;
void display(){
    cout<<"displaying base class variable :"<<_base<<endl;
}
};
class derived :public base{
public:
int _derived;
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
    basepointer = &object2;/*This is legal in C++ late binding
    but the pointer is of base class hence it can only acces the function and variable of base class if called*/ 
    basepointer->_base =34;
    derivedpointer = &object2;
    derivedpointer->_derived=765;
    derivedpointer->_base=76;
    basepointer-> display();/*display of base class will  run*/
    derivedpointer-> display();/*display of derived class will  run*/
    return 0;
}
