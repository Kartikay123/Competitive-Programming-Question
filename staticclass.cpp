// // #include"Kartikay.h"
// // class employee {
// //     int id;
// //     int count;

// //     public:
// //     void setdata(){
// //      cout<<"Enter the Id"<<endl;
// //     cin >>id;
// //     }
// //     void getdata(){
// //       cout<<"Entered  Id is "<<endl;
// //         cout<<id;

// //     }

// // };
// // int main(int argc, char const *argv[])
// // {
// //     employee kartikay;
// //     kartikay.setdata();
// //     kartikay.getdata();

// //     return 0;
// // }
// /* now with static variable neeche*/
// // #include"Kartikay.h"
// // class employee {
// //     int id;
// //     static int count;

// //     public:
// //     void setdata(){
// //      cout<<"Enter the Id"<<endl;
// //     cin >>id;
// //     count++;
// //     }
// //     void getdata(){
// //       cout<<"Entered  Id is "<<endl;
// //         cout<<id<<endl;
// //         cout<<"The value of count can be increment with static variable "<<count<<endl;

// //     }

// // };
// // int employee ::count = 100;/*default value is 0*/
// // int main(int argc, char const *argv[])
// // {
// //     employee kartikay,Harry,om;
// //     kartikay.setdata();
// //     kartikay.getdata();
// //     Harry.setdata();
// //     Harry.getdata();
// //     om.setdata();
// //     om.getdata();

// //     return 0;
// // }


// /* static Function  : the Static Function can only access static variable*/
// #include "Kartikay.h"
// class employee
// {
//     int id;
//     static int count;

// public:
//     void setdata()
//     {
//         cout << "Enter the Id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getdata()
//     {
//         cout << "Entered  Id is " << endl;
//         cout << id << endl;
//         cout << "The value of count can be increment with static variable " << count << endl;
//     }
//     static void getcount(){
//         cout<<"The value of static variable is "<<count<<endl;
//     }
// };
// int employee ::count; /*default value is 0*/
// int main(int argc, char const *argv[])
// {
//     employee kartikay, Harry, om;
//     kartikay.setdata();
//     kartikay.getdata();
//     employee ::getcount();
//     Harry.setdata();
//     Harry.getdata();
//     employee ::getcount();
//     om.setdata();
//     om.getdata();
//     employee ::getcount();

//     return 0;
// }

// #include"Kartikay.h"
// class employee {
//     int id;
//     int count;

//     public:
//     void setdata(){
//      cout<<"Enter the Id"<<endl;
//     cin >>id;
//     }
//     void getdata(){
//       cout<<"Entered  Id is "<<endl;
//         cout<<id;

//     }

// };
// int main(int argc, char const *argv[])
// {
//     employee kartikay;
//     kartikay.setdata();
//     kartikay.getdata();

//     return 0;
// }
/* now with static variable neeche*/
// #include"Kartikay.h"
// class employee {
//     int id;
//     static int count;

//     public:
//     void setdata(){
//      cout<<"Enter the Id"<<endl;
//     cin >>id;
//     count++;
//     }
//     void getdata(){
//       cout<<"Entered  Id is "<<endl;
//         cout<<id<<endl;
//         cout<<"The value of count can be increment with static variable "<<count<<endl;

//     }

// };
// int employee ::count = 100;/*default value is 0*/
// int main(int argc, char const *argv[])
// {
//     employee kartikay,Harry,om;
//     kartikay.setdata();
//     kartikay.getdata();
//     Harry.setdata();
//     Harry.getdata();
//     om.setdata();
//     om.getdata();

//     return 0;
// }


/* static Function  : the Static Function can only access static variable*/
#include "Kartikay.h"
class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Entered  Id is " << endl;
        cout << id << endl;
        cout << "The value of count can be increment with static variable " << count << endl;
    }
    
};
    int employee ::count;
int main(int argc, char const *argv[])
{
    employee kartikay[4];
    for (int  i = 0; i < 4; i++)
    {
    kartikay[i].setdata();
    kartikay[i].getdata();
   
    }
    
    return 0;
}