/*class in oops is smisalr as structure in pops*
 but the basic difference is than we cqan use function in class not in structure*/
#include"Kartikay.h"
class donkartik
{
private:
    int a, b,c; /* this private value can be accesed by only the function prwesent inside the class*/
    /* if private is not written then it will accepte it as private as default*/
public:
int d,e;
void chess(int a1,int b1,int c1);  /*declaration of function -*/
void chess2() {
    cout<<"the values "<<a<<endl;
    cout<<"the values "<<b<<endl;
    cout<<"the values "<<c<<endl;
    cout<<"the values "<<d<<endl;
    cout<<"the values "<<e<<endl;
/*implementation of one function inside the class */
}  
};
/*implementation of other function outside the class */
/*functiontype classname :: functionname(declaration){}*/
void donkartik :: chess(int a1, int b1, int c1){
a= a1;
b= b1;
c=c1;
}
int main(int argc, char const *argv[])
{
    donkartik kartik;
    kartik.chess(2,9,6);
    kartik.d = 19;
    kartik.e= 34;
    kartik.chess2();
  //  kartik.a; here a is private heb=nce not be accesed by here it can be accesed by function inside the class//
    return 0;
}
