#include"Kartikay.h"
using namespace std;
class complex{
int a,b;
public:
complex(){
a =3;
b =9;
}

void display(){
cout<<"The value is :"<<a<<" and "<<b<<endl;
}
};
int main(int argc, char const *argv[])
{
    /* code */int a=6;
    int *pointer =&a;
    cout<<"The value of pointer is :"<<*(pointer)<<endl;
    cout<<"The value of pointer is :"<<*(pointer)<<endl;
    /* New and delete operator*/
    float *p= new float(56.54);
   /* datatype *pointer =new datatype(argumremt)*/
   /* datatype *pointer =new datatype[size] in case of an array*/
    delete p;       /*delete operator*/
    cout<<"The value of pointer p is:"<<*(p)<<endl;
    int *arr = new int[3];/* integer array*/
    arr[0]= 12;
    arr[1]= 36;
    arr[2]= 87;
     delete[] arr; /* this show that value is deleted*/
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
       complex kartik;
      complex *p2 = &kartik;
      (*p2).display();/* both are same*/
      (p2)->display();/* this is arrow*/

    return 0;
}
/*Arrow pointer is similar to *ptr = ptr-> before calling the function */

