#include"Kartikay.h"
class base {
protected:
int a;
private:
int b;
public:

};
class derived: protected base{        /* As mode public,private,protected can be used*/

};
/* IN PUBLIC mode:
protected member become protected in derived class*/
/*IN PRIVATE mode:
protected member becomes private in derived class*/
/* IN protected mode:
protected member become protected in derived class and public member becomes also protective*/
int main(int argc, char const *argv[])
{
    base kartik;
    derived don;
  // Hence it will not work*/  cout<<don.a;    /*since a is protected variable*//*
    return 0;
}
