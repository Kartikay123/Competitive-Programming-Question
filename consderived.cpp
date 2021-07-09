#include"Kartikay.h"
/*construction call in derived class
1) case 1:
class b: public class a{
    order of execution of construction is a(base class)-->then derived class b
}
1) case 2:
class derived:public base1, public base2{
    order of execution of construction is base1(base class)---->base2-->then derived class b
}
1) case 3:
class derived:public base1, virtual public base2{
    order of execution of construction is base2(base class)--->base1-->then derived class b
}*/
class base1{
int data1;
public:
base1(int a): data1(a)    /* this is the intialisation of constructor*/{

cout<<"base1 is called"<<endl;
}
};
class base2{
int data2;
public:
base2(int b){
    data2 =b;
    cout<<"base2 is called"<<endl;
}
};
class derived:public base1,public base2{    /* if this order of calling is changed then executeion also interchange*/
int cons,count;
public:
/*in order to call constructor*/
derived(int a,int b,int c,int d): base1(a),base2(b){
    /*c and d are cons and count*/
    cons =c;
    count =d;
    cout<<"c value is :"<<cons<<endl;
    cout<<"d value is :"<<count<<endl;
    cout<<"derived cons is called"<<endl;
}
};
int main(int argc, char const *argv[])
{
    derived kartik(1,4,5,2);
    return 0;
}
