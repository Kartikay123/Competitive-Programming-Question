#include"Kartikay.h"
/*virtual base class is used when same variable or function is inherita two or more times*/
class student{
 protected:
 int rollno;
 public:
 void setrollno(int a){
     rollno =a;
 }
 void printroll(){
     cout<<"your roll no is: "<<rollno<<endl;
 }
};
class test:virtual public student{
protected:
int maths,physics;
public:
void setmarks(int m1, int m2){
    maths=m1;
    physics=m2;
}
void displaymarks(){
    cout<<"your maths marks is:"<<maths<<endl;
    cout<<"your physics marks is:"<<physics<<endl;
}
};
class sports: virtual public student{
protected:
int scrcric,scrchess;
public:
void setscore(int s1,int s2){
    scrcric=s1;
    scrchess =s2;
}
void displayscore(){
    cout<<"your score in cricket is: "<<scrcric<<endl;
    cout<<"your score in chess is: "<<scrchess<<endl;
}
};
class result: public test, public sports{
protected:
int result;
public:
void setresult(){
    result = maths+physics+scrcric+scrchess;
}
void displayres(){
 cout<<"your result is "<<result<<endl;
}
};
int main(int argc, char const *argv[])
{
    result Kartikay;
    Kartikay.setrollno(36);
    Kartikay.printroll();
    Kartikay.setmarks(80,78);
    Kartikay.displaymarks();
    Kartikay.setscore(78,96);
    Kartikay.displayscore();
    Kartikay.setresult();
    Kartikay.displayres();
    return 0;
}
/*here rollno is inherit two time in test and sports both hence virtual is 
used t remove the ambiguity */