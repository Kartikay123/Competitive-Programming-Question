#include <bits/stdc++.h>
using namespace std;
int main(){
   int T,N,c=0,d=0;
   string s;
   cin>>T;
   long long int A,B;
   for (int i = 0; i < T; i++)
   {
       cin>>N>>A>>B;
       for (int j = 0; i < N; j++)
       {
           cin>>s;
           
           
           if (s.at(1)=='E'||s.at(1)=='Q'||s.at(1)=='U'||s.at(1)=='N'||s.at(1)=='I'||s.at(1)=='O'||s.at(1)=='X')
           {
               cout<<"SARTHAK"<<endl;
               c++;
           }
           else if(c==d){
               cout<<"DRAW";
           }
           else{
               cout<<"ANURADHA"<<endl;
               d++;
           }
           
           
       }
       

   }
   

   
    
    
    return 0;
}