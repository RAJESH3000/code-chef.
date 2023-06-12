#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r,s,ans=0;
	    cin>>r>>s;
	    for(int i=0;i<r;i+=2){
	        if(s%2) ans+=(s/2)+1;
	        else ans+=s/2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
