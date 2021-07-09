#include"Kartikay.h"


class CWH{
protected:
string title;
float rating;
public:
CWH(string s,float r){
title =s;
rating =r;
}
  virtual void display()=0;/* this show that it si pure virtual function and must declare in upcoming inherit class*/

};
class CWHvideo: public CWH{
int videolength;
public:
CWHvideo(string s,float r,int vl):CWH(s,r){
videolength= vl;
}
void display(){
    cout<<"title of video:"<<title<<endl;
    cout<<"Rating  of video:"<<rating<<endl;
    cout<<"length  of video:"<<videolength<<endl;
}
};
class CWHtext: public CWH{
int words;
public:
CWHtext(string s,float r,int wc):CWH(s,r){
words =wc;

}
void display(){
     cout<<"title of text:"<<title<<endl;
    cout<<"Rating  of text:"<<rating<<endl;
    cout<<"length  of text:"<<words<<endl;
}
};
int main(){
    /*for CWH video*/
     string title = "GO CORONA GO";
     float rating= 4.2;
     int videolength= 98.7;
     int words=345;
    CWHvideo objvideo(title,rating,videolength);
    // objvideo.display();
     /*for CWH text*/
     string title2 = "GO CORONA GO TEXT";
     
    CWHtext objtext(title2,rating,words);
    // objtext.display();
    /*now clalling by pointer*/
    CWH*tuts[2];
    tuts[0]= &objvideo;
    tuts[1]= &objtext;
    tuts[0]->display();
    tuts[1]->display(); /*apna apna display call karege CWh ka nhi
    kyoki virtula use hua hai*/

    return 0;
}/* virtual function attach with function is not called */
/* abstract base class is simislar to base class which contain at least one virtual function*/
