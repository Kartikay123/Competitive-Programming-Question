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
void printvalue(){
    cout<<"The complex number is "<<real<<" + "<<imag<<"i"<<endl;

}
    void sumcomp(complex first,complex second){
        real = first.real + second.real;
        imag = first.imag + second.imag;
    }
};
int main(int argc, char const *argv[])
{
    complex first,second,sum;
    first.comp(4,5);
    first.printvalue();
    second.comp(7,5);
    second.printvalue();
    sum.sumcomp(first,second);
    sum.printvalue();



   return 0;
 }


