#include"Kartikay.h"
#include<stdio.h>
/* map is an associative array*/
int main(){
    map<string ,int> marksmap;
marksmap["kartikay"]=10;
marksmap["om"]=100;
marksmap["sankalp"]=99;
marksmap["gaurav"]=99;
map<string,int> :: iterator i;
marksmap.insert({{"rohan", 89},{"vineet", 123}});
for ( i = marksmap.begin(); i!=marksmap.end(); i++)
{
    /* code */cout<<(*i).first<<" "<<(*i).second<<endl;
    /* here first and second string and int will print out*/
    /*there are other opertaor which we will study in cplusplus reference site*/
    cout<<"The size of :"<<marksmap.size()<<endl;
}


}



    
    
