#include"Kartikay.h"
 int into(int &a , int &b){
     int temp=a;  
     a=b;             /*swaping the number*/
     b=temp;
      
    return 0;
 }
int main(int argc, char const *argv[])
{
   int x  = 2;
   int y =4;    //*here x and y value will copied simply in a and b//
 //a
   cout <<"simple printing inside the int main function "<<x <<" and " <<y<<endl;
   //calling the function with C++ reference* fixing the value of x and y is done through downward/
   into(x,y);
   cout <<"calling the functiion(swaping it)  the value of x is:"<<x<<" and y is:"<<y<<endl;

/* thus for calling the function & address operator is used**/
/* it can also be done by pointers such that-*/
//  /*int into(int *a , int *b){
//      int temp=*a;  
//      *a=*b;             /*swaping the number*/
//      *b=temp;
      
//     return 0;
//  }
// int main(int argc, char const *argv[])
// {
//    int x  = 2;
//    int y =4;   
//    cout <<"simple printing inside the int main function "<<x <<" and " <<y<<endl;
//into(&x,&y);
//    cout <<"calling the functiion  the value of x is:"<<x<<" and y is:"<<y<<endl;*/

    return 0;
}
