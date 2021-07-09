#include"Kartikay.h"
class student{
 protected:
 int  rollno;
public:
void setrollno(int r){
    rollno =r;
}
void getrollno(){
    cout<<rollno<<endl;
}
};
class exam: public student{
protected:
float maths;
float physics;
public:
void setmarks(float m1,float m2){
    maths =m1;
    physics =m2;
}
void display2(){
    cout<<"This statement show that protected member can be accesed "<<rollno<<endl;
}
void getmarks(){
    cout<<"The marks you get "<<maths<<endl;
    cout<<"The marks you get "<<physics<<endl;
}
};
class result: public  exam{
float per;
public:
void display(){
    cout<<"The percentage you got is:"<<(maths+physics)/2<<"%"<<endl;
}

};
int main(int argc, char const *argv[])
{
    result Kartik;
    Kartik.setrollno(36);
    Kartik.getrollno();
    Kartik.setmarks(85,96);
    Kartik.getmarks();
    Kartik.display();
    Kartik.display2();
    return 0;
}
/* A--->B--->C is called the inheritant Path since here is a public mode*/