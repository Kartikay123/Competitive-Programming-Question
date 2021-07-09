#include <vector>
#include "Kartikay.h"
template<class T>
void display(vector <T> &v){
for (int i = 0; i < v.size(); i++)
{
  //  cout<<"Display the enterted no."<<endl;
 // cout<<"**************"<<endl;
    cout<<v[i]<<endl;
  //  cout<<v.at(i)<<endl; both are same*/
    /* code */
}

}
int main(){
   
vector<int> obj1;   /* vector<T> is datatype or class*/
vector<char> obj2(6);   /* vector<T> is datatype or class*/
vector<char> obj3(obj2);   /* vector<T> is datatype or class*/
vector<int > obj4(3,5);   /* here 3 times 5 will print*/
//obj2.push_back('7');

 //display(obj1);
 //display(obj2);
 //display(obj3); /* nothing will happen*/
 display(obj4); /* nothing will happen*/
 
 
    return 0;

}
// vector <int> :: iterator iter = obj1.begin();
// // obj1.insert(iter,)/* syntX of insert*/
// vector <int> :: iterator iter = obj1.begin();
// obj1.insert(iter,8);
// obj1.insert(iter+1,8);
//int k,size;
// cin>>size;
// for (int i = 0; i < size; i++)
// {
//     /* code */cout<<"enter the element"<<endl;
    
//     cin>>k;
//     obj1.push_back(k);/* pushback store the data in vector*/

// }

// //obj1.pop_back();   /*it remove the last elelement*/