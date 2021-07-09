#include"Kartikay.h"
class binary {
    private:
    string s;
    public:
    void input();
    void checkinput();
    void interchange();
    void display();

};
void binary :: input(){ /*type classname :: typename;*/
    cout<<"enter the binary number"<<endl;
    cin>>s;
}
void binary :: checkinput(){
    for ( int i = 0; i < s.length(); i++)
    {
        /* code */if (s.at(i)!='0'&& s.at(i)!= '1'){
            cout<<"Incorrect Binary format"<<endl;
            exit(0);
          }
        
              
    }
    
} 
void binary :: interchange(){
   for ( int i = 0; i < s.length(); i++){
       if (s.at(i)=='1')
       {
           /* code */s.at(i)='0';
       }
       else{
           s.at(i)='1';
       }
   }
}
void binary :: display(){
    cout<<"Dispalying your Binary number"<<endl;
   for ( int i = 0; i < s.length(); i++){
      cout<< s.at(i);
   } cout<<endl;
}
int main(int argc, char const *argv[])
{
    binary k;
    k.input();
    k.checkinput();
    k.display();
    k.interchange();
    k.display();
    return 0;
}
