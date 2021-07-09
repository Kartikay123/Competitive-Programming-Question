#include"Kartikay.h"
class shop{
int id;
float price;
public:
void setdata(int a, float b){
id =a;
price = b;
}
void getdata(){
    cout<<"ID of the item is :"<<id<<endl;
    cout<<"Price of the item is :"<<price<<endl;

}
};
int main(int argc, char const *argv[])
{
    int size =3;
   /* dataype *ptr= new dataype[size]*/
   shop *ptr = new shop[size];
   shop *ptrtemp =ptr;
   /* let the three shop store is general, fruit, hardware*/
   int p;
   float q;
   for (int  i = 0; i < size; i++)
   {
       cout<<"ID and price of the item is :"<<i+1<<endl;
       cin>>p>>q;
      //* (*ptr).setdata(p,q);*/
       ptr->setdata(p,q);
       ptr++;
   }
   for (int i = 0; i < size; i++)
   {
       /* code */cout<<"Id and price of the item is :"<<i+1<<endl;
       ptrtemp->getdata();
       ptrtemp++;
   }
   
   
    return 0;
}
