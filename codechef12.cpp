#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	long long int n;
	while(T--){
	    cin>>n;
        long long int ans=1;
	    while(n>0){
	        
	      ans=ans*n;
          n--;
	      
	    }
        cout<<ans<<endl;
	}
	return 0;
}
