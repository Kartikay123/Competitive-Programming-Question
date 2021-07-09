#include"Kartikay.h"

class complex{
    int a,b;
    public:
    complex(int , int);/*constructor define always in public class*/
    void printnumber(){
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
    
};
complex ::complex(int x, int y){    /*This is parameterized construct since does not accept value*/
    a = x;
    b = y;
    cout<<"Hello world"<<endl;
}
int main(int argc, char const *argv[])
{
   complex c1(4,6); /* This is implicit call to construction*/
   c1.printnumber();
   complex c2 =complex(4,63);   /*This is explicit call to function*/
   c2.printnumber();
   complex c3(78,99);
   c3.printnumber();
   return 0;
}