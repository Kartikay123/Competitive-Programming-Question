#include"Kartikay.h"
// A ,B,C are classes*/ where A is base class somewhere and other is derived class*/
/*inheritance are used to copy the class with its with element + some modification*/
// modification is the thing that you want
// five type of inheritance are there
// 1 ) single inheritance (simply copy A to B with some modification if you want)
// 2) multiple inheritance(A + B combine to form C with modification)
// 3) hierachical inheritance(C break into A and B with modification)
//4) multilevel inheritance(A converts to B,B converts to C(modificatiion))
//5) Hybrid inheritance (combination of multilevel and multiple inheritance like A + B = C
//similarly A+D = C)
/* When visibility mode is accesed publicily then public member of base class will become
public member of derived class*/
/* When visibility mode is accesed privately then public member of base class will become
private member of derived class*//*this is also a default visibility mode*/
/* private member of base class can not be inherit*
syntax for inherit class
class derivedclassname : visibilitymode(public/private) baseclassname;*/
//{

//}//
class employee{
    
    public:
    float salary;
    int id;
    employee(){}    /* This default is necessary*/
    employee(int inpid){
        id =1;
        cout<<id<<endl;
        salary =34;
        cout<<salary<<endl;
    }
    
    

};
class programmer : employee{
    
     public:
     programmer(int inpid){
         id = inpid;
         int language =8;
         cout<<id<<endl;
     }
     int language =987;
     void getdata(){
         cout<<id<<endl;
     }

};
int main(int argc, char const *argv[])
{
    employee kartik(0),shivam(6),harsh(78);
    programmer Gaurav(785415);
    cout<<Gaurav.language<<endl;
    Gaurav.getdata();
    
    return 0;
}
