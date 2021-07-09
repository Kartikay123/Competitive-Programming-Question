/* With Friend Function: Function Which  is used to access the private variable of Class but can not */
#include"Kartikay.h"
class complex{
private:
int real;
int imag;
public:
void comp(int a, int b){
     real=a;
     imag=b;
}
friend complex sumcomp(complex x,complex y);
void printvalue(){
    cout<<"The complex number is "<<real<<" + "<<imag<<"i"<<endl;

}
    
};
complex sumcomp(complex x,complex y){
    complex z;
    z.comp((x. real +y.real),(x.imag+y.imag));
    return z;
}
int main(int argc, char const *argv[])
{
    complex first,second,sum;
    first.comp(4,5);
    first.printvalue();
    second.comp(7,5);
    second.printvalue();
    sum =sumcomp(first,second);/* here sum.sumcomp is not used since sumcomp function is Friend Function hence It vcan be called like this*/
    sum.printvalue();
    return 0;
}