#include"Kartikay.h"
class bankdeposit{
    private:
    int principal;
    int years;
    float rate;
    float returnvalue;
    public:
    bankdeposit(){} /* This default empty definition of construction is compulsory*/
    bankdeposit(int p,int y, float r);/* Rate is in form of float decimal*/
    bankdeposit(int p,int y, int  R);/*Rate is  in whole number form*/
    void display();

};
bankdeposit :: bankdeposit(int p, int y, float r){
    principal =p;
    years = y;
    rate = r;
    returnvalue =principal;
    for (int  i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+rate);
    }
    
}
bankdeposit :: bankdeposit(int p, int y, int r){
    principal =p;
    years = y;
    rate = float (r)/100;
    returnvalue =principal;
    for (int  i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+rate);
    }
    
}

void bankdeposit:: display(){
    cout<<"Principal Amount was "<<principal<<"."<<endl
    <<"Return value after "<<years
    <<" years is "<<returnvalue<<endl;
}
int main(int argc, char const *argv[])
{
    bankdeposit c1,c2;
    int p,y,R;
    float r;
    cout<<"enter the value of p,y,r"<<endl;
    cin>>p>>y>>r;
    c1 = bankdeposit(p,y,r);
    c1.display();

    cout<<"enter the value of p,y,R"<<endl;
    cin>>p>>y>>R;
    c2 = bankdeposit(p,y,R);
    c2.display();
    
   
    return 0;
}
