#include"Kartikay.h"
#include<stdlib.h>
int main(){
    int *ptr,n,i;
    cout<<"Enter the number of Element"<<endl;
    cin>>n;
    ptr= (int*)malloc(n*sizeof(int));
    cout<<*ptr<<endl;
    if (ptr==NULL)
    {
        /* code */cout<<"Allocation fail"<<endl;
        exit(0);
    }
    else{
        for (int  i = 0; i < n; i++)
        {
            /* code */cin>>*(ptr+i);
            cout<<"the element are"<<endl;
            for (int i = 0; i < n; i++)
            {
                /* code */cout<<*(ptr+i)<<endl;
            }
            

        }
        
    }
    
    return 0;
}