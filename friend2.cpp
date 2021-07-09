#include"Kartikay.h"
class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val1 = a;
    }
    void display(){
        cout<<val1<<endl;
    }
};
class c2{
int val2;
friend void exchange(c1 &,c2 &);
public:
void indata(int a){
    val2 =a;

}
void display(){
    cout<<val2<<endl;
}
};
void exchange(c1 &x,c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}
int main(int argc, char const *argv[])
{
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(85);
    exchange(oc1,oc2); /* here oc1 and oc2 are equal to x and y in exchange function*/
    cout<<"THe value of c1 after exchanging becomes:";oc1.display();
    cout<<"THe value of c2 after exchanging becomes:";oc2.display();
    return 0;
}
/* since we are dealing with values here we are using the Reference Variable*/