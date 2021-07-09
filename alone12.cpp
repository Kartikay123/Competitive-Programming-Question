#include<iostream>
using namespace std;
int main(){
  //  pointers and  arrays are used to combine the same type of datatype such as int float double char
  //arithmertic fo-rmula of pointers //
  //new address = current address + i*size of array//
  //ex.  p+2 = p[0] + 2*4//
int marks[] = {34, 56, 78, 90, 647};
int* p = marks;
cout<<"the value of *p is equal to the marks[0] "<<*p<<endl;
cout<<"the value of *(p+1) is equal to the marks[1] "<<*(p+1)<<endl;
cout<<"the value of *(p+2) is equal to the marks[2] "<<*(p+2)<<endl;
//  *p = marks[0], *(p+1) = marks[1], *(p+2)= marks[2]//
}