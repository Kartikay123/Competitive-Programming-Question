#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,sum=0;
	for( int i=1;i<n;i++){
	    if(n%i==0){
	        sum=sum+i;
	    }
	}
	if(sum==n){
	    cout<<"YES"<<endl;
	}
	else{
	cout<<"NO"<<endl;
	}
	return 0;
}
