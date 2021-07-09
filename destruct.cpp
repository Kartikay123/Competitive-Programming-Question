#include"Kartikay.h"
/*Destructor never take arugement nor return any value*/
   int count =0;/*global variable*/
class num{
    
     public:
     num(){ 
    count++;
    cout<<"This is the time when constructor is called for object number "<<count<<endl;
     }
      ~num(){ 
    cout<<"This is the time when destructor is called for object number "<<count<<endl;
    count--;
     }
};
int main(int argc, char const *argv[])
{
    num n1;{    /*here constructor is called*/
        cout<<"Enteriing this block{}"<<endl;
        cout<<"Creating two more object"<<endl;
        num n2,n3; /*here again constructor is called*/
        cout<<"Exiting the block"<<endl;    /*destructor means coming of out of block {} */
    }   /*here destructor is called* of n2 and n3*/
    cout<<"We are in main"<<endl;
    /* destructor of n1 will called*/
    return 0;
}
