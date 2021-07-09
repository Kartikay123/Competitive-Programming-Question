#include<iostream>
using namespace std;
/*struct donkartik// structure datatype store the different value of datatype such as int float double char before main function
// {
//     /* data */
//     int age;
//     float salary;
//     char favchar;
// };

// int main(int argc, char const *argv[])
// {
//    struct donkartik kartikay;
//    kartikay.age  =18;
//    kartikay.salary = 400000;
//    kartikay.favchar = 'b';
//    cout <<kartikay.age<<endl; 
//    cout <<kartikay.salary<<endl; 
//    cout <<kartikay.favchar<<endl; 
//     return 0;
// }


/*before struct we can use the typedef of and before semicolon of struct we can use any symbol
which replaes the struct donkartik in int main function*/


typedef struct donkartik// structure datatype store the different value of datatype such as int float double char before main function
 {
     /* data */
     int age;
          float salary;
     char favchar;
 }kg;

 int main(int argc, char const *argv[])
 {
    kg kartikay;
    kartikay.age  =18;
    kartikay.salary = 400000;    kartikay.favchar = 'b';
    cout <<kartikay.age<<endl; 
    cout <<kartikay.salary<<endl; 
    cout <<kartikay.favchar<<endl; 
    return 0;
 }