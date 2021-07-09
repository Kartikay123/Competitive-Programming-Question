#include"Kartikay.h"
class complex; /* forward declaration*/
class calculator{
public:
int sumcomreal(complex , complex  );
int sumcomimag(complex , complex  );

};
class complex{
private:
int real;
int imag;
public:
void comp(int a, int b){
     real=a;
     imag=b;
}
/*friend int calculator :: sumcomreal(complex , complex );
friend int calculator :: sumcomimag(complex , complex );*/
/*Above is used for function to function  when one function ids present in classes in classes*/
friend class calculator;        /* it makes the access of all function of calculator to access*/
void printvalue(){
    cout<<"The complex number is "<<real<<" + "<<imag<<"i"<<endl;

}
    
};
int calculator ::sumcomimag(complex x, complex y){
    return (x.imag+y.imag);
}
int calculator ::sumcomreal(complex x, complex y){
    return (x.real+y.real);
}
int main(int argc, char const *argv[])
{
    complex x,y;
    x.comp(4,5);
    x.printvalue();
    y.comp(7,5);
    y.printvalue();
    calculator sumreal,sumimag;
    int res =sumimag.sumcomimag(x,y);
    cout<<"The imaginary part of the complex sum  is:"<<res<<endl;
    int res2 = sumreal.sumcomreal(x,y);
    cout<<"The real part of the complex is :"<<res2<<endl;
    
    return 0;
}