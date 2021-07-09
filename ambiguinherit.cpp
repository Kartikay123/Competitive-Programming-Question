/*Ambhiguilty resolution in inheritance 
when same function is there in base1 and base2 then which function will run thta's the abhiguilty*/
#include"Kartikay.h"
class base1{
public:
void greet(){
    cout<<"Good morning"<<endl;
}
};
class base2{
public:
void greet(){
    cout<<"Good Afternoon"<<endl;
}
};
class derived : public base1,public base2{
int a;
/*resolution of ambigious*/
public:
void greet(){
    base2::greet();
}
};
int main(int argc, char const *argv[])
{
//    // Ambiguity 1
//     base1 hh1;
//     base2 hh2;
//     hh1.greet();
//     hh2.greet();
//     derived ram;
//     ram.greet();    /*konnsa greet run hoga??*/
//Ambiguity 2
    base1 hh1;
    base2 hh2;
    hh1.greet();
    hh2.greet();
    derived ram;
    ram.greet();  
    return 0;
}


