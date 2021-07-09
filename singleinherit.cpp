// #include"Kartikay.h"
// class base{
// int data1;  /*this can not be inherit*/
// public:
// int data2;
// void setdata();
// int getdata1();
// int getdata2();
// };
// void base :: setdata(){
//     data1 =14;
//     data2 =4;
// }
// int base :: getdata1(){
//     return data1;
// }
// int base :: getdata2(){
//     return data2;
// }

// class derived : public base{
//     int data3;  /* hare it is called publicliy*/
//     public:
//     void process();
//     void display();
// };
// void derived:: process(){
//     data3 = data2*getdata1();
// }
// void derived:: display(){
//     cout<<"Value of data 1 is:"<<getdata1()<<endl;
//     cout<<"Value of data 2 is:"<<data2<<endl;
//     cout<<"Value of data 3 is:"<<data3<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     derived der;
//     der.setdata();
//     der.process();
//     der.display();
//     return 0;
// }
#include"Kartikay.h"
class base{
int data1;  /*this can not be inherit*/
public:
int data2;
void setdata();
int getdata1();
int getdata2();
};
void base :: setdata(){
    data1 =14;
    data2 =4;
}
int base :: getdata1(){
    return data1;
}
int base :: getdata2(){
    return data2;
}

class derived : private base{
    int data3;  /* hare it is called publicliy*/
    public:
    void process();
    void display();
};
void derived:: process(){
    setdata();
    data3 = data2*getdata1();
}
void derived:: display(){
    cout<<"Value of data 1 is:"<<getdata1()<<endl;
    cout<<"Value of data 2 is:"<<data2<<endl;
    cout<<"Value of data 3 is:"<<data3<<endl;
}
int main(int argc, char const *argv[])
{
    derived der;
    /*der.setdata();*/
    der.process();
    der.display();
    return 0;
}
