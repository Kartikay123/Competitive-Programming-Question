#include"Kartikay.h"
/* list is same as vector to re move the the mid value from any array and arrange it*/

void display(list <int> &l){
list <int> :: iterator iter1;
for (iter1 = l.begin(); iter1!=l.end() ; iter1++)
{
    /* code */cout<<*iter1<< " ";
    
}
cout<<endl;

}
int main(){
    list <int> obj1;    /*syntax is: list <t> ovjevt*/
    obj1.push_back(4);
    obj1.push_back(45);
    obj1.push_back(47);
    obj1.push_back(48);
    obj1.push_back(41);
    display(obj1);
    // obj1.remove(48);    /* remove the value*/
    //  display(obj1);

    // obj1.sort(); /* sorting*/
    // display(obj1);

    // // reversig the list/*/
    // obj1.reverse();
    //  display(obj1);

    
    list<int> obj2(3);/*empty list of size 3/*copying value of obj1 in 2*/
    list <int>::iterator iter2;
    iter2 = obj2.begin();
    *iter2 = 41;
    iter2++;
    *iter2 = 56;
    iter2++;
    *iter2 = 40;
    iter2++;
    display(obj2);
    // obj2.pop_front();   /* remove one value from front*/
    // display(obj2);
    // obj2.pop_back();   /* remove one value from back*/
    // display(obj2);
    obj1.merge(obj2);/* merging of list*/
    display(obj1);
   
    
    return 0;
}
 // list <int> ::iterator iter;
    // iter = obj1.begin();
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;