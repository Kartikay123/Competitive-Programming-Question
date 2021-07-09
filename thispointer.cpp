#include"Kartikay.h"
class A{
int a;
public:
A(int a){
    this->a = a;/*this is the use of 'this' pointer*/
}
void display(){
    cout<<"The value of a is :"<<a<<endl;
}
};
int main(){
    A kartik(9);
    kartik.display();
    return 0;
}