#include"Kartikay.h"
//*recursion of making fibonacci series*/
/*1,1,2,3,5,8,13,21,34,*/
int fibo(int a){
 if (a<2){
     return 1;
 }
 return fibo(a-1)+fibo(a-2);
} 

/* recursion of making factoral*/
int factorial(int a){
 if(a<2){
     return 1;
 }
 else
 return a*factorial(a-1);    /* here again calling the function*/
}
int main(int argc, char const *argv[])
{
    /* code */
    /*recursiion mean something already exisits in function all calling the function afagin and again*/
    int d;
    cin>>d;
    cout<<"entered value is "<<d<< " and calling the function "<<factorial(d)<<endl;
    cout<<"entered value is "<<d<< " and calling the function "<<fibo(d)<<endl;
    return 0;
}
