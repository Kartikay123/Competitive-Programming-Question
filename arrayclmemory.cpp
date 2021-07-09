#include"Kartikay.h"

class shop {
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void inticounter(){
        counter =0;
    }
    void setprice();
    void displayprice();
    
};
void shop :: setprice(){
    cout<<"Enter the value of Id of your item and item no."<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price of your Item"<<endl;
    cin>>itemprice[counter];
    counter ++;
}
void shop :: displayprice(){
    for ( int  i = 0; i < counter; i++)
    {
        /* code */cout<<"The price of item with Id "<<itemid[i] <<" is "<<itemprice[i] <<endl;
    }
    /* here in 0 the itemid is store */
}
    int main(int argc, char const *argv[])
    {
        shop dukaan;
    dukaan.inticounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    
        return 0;
    }
    