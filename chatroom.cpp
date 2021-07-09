// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	 string s; cin>>s ; int n=s.size(); string u="hello" ; int count=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(s[i]=='h'&&count==0) count++ ;
// 		else if(s[i]=='e'&&count==1) count++ ;
// 		else if(s[i]=='l'&&count==2) count++ ;
// 		else if(s[i]=='l'&&count==3) count++ ;
// 		else if(s[i]=='o'&&count==4) count++ ;
// 	    else ;
// 	}
// 	if (count==5) {cout<<"YES"; }
// 	else 
//     cout<<"NO";
//     return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// string s;
// cin>>s;
// string h="hello";
// int j=0;
// for(int i=0;i<s.size();i++)
// {
//   if(s[i]==h[j])
//   {
//     j++;
//     if(j==h.size())
//     {
//       cout<<"YES";
//       return 0;
//     }
//   }
// }
// cout<<"NO";
// return 0;
// }

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    string s;
    cin>>s;
    string s1="hello";
        int j=0;
       
            for(int i=0;i<s.size();i++){
                
                if(s1[j]==s[i]){
                    j++;
                }
                
            }
        
        if(j==5){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return 0;
}