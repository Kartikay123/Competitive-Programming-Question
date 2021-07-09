#include"Kartikay.h"
/*construction are function with the same name as class and use to
initialize the object in class and automatically invoked*/
class complex{
    int a,b;
    public:
    complex(void);/*constructor define always in public class*/
    void printnumber(){
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
    
};
complex ::complex(void){    /*This is default construct since does not accept value*/
    a = 10;
    b = 50;
    cout<<"Hello world"<<endl;
}
int main(int argc, char const *argv[])
{
    complex c1,c2,c3;/* This is the use of Constructor*/
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
/* address can not be store in constructor and does not return value/*/