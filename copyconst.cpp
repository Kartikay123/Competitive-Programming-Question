#include"Kartikay.h"
class number{
    private:
    int a;
    public:
    number(){
        a =34; /*default value*/
    }/*default construction is necessary*/
    number(int k){
        a =k;
    }
     number(number &kar){
         cout<<"copy constructor is called!!"<<endl;/*When no copy constructor is there then complier have its o
    wn copy costructor without erreo*/
        a =kar.a;
    }
    void printnumber(){
    cout<<"The number is:"<<a<<endl;
    }
};
int main(int argc, char const *argv[])
{
    number x,z2, y,z(23);   /*implicit construction call*/
    
    // z.printnumber();
    x.printnumber();
   // y.printnumber();    /*since default value is 34*/
    number z1(x);   /*here z1 is copy constructor of x copy constructor invoked*/
    z1.printnumber();
    // z2 = z;     /*copy constructor will not invoked since it is assigned*/
    // z2.printnumber();
    // number z3 =z; /*copy constructor will invoked */
    // z3.printnumber();

    return 0;
}
