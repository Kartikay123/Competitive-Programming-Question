#include"Kartikay.h"
// template <class t1, class t2>
// template <class t1= char, class t2=float,t3 =string> this is default template*/
// class name{
// /*body
// };
//template <class T1= string, class T2=double>
template <class T1, class T2>
class name1{
public:
T1 data1;
T2 data2;
 name1(T1 a, T2 b){
    data1 =a;
    data2 =b;
}
void display(){
    cout<<"the value is : "<<data1<<endl;
    cout<<"the value is : "<<data2<<endl;
}
};

int main(){
    name1<int ,float> obj1(4,40.55);
    obj1.display();
    name1<string ,char> obj2("Kartikay",'K');
    obj2.display();
   // name1<> obj3("don", 4.8745);    /*default template*/
   //  obj3.display();

    return 0;
}
