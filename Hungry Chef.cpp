#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    int o,p;
	    if(r<n*x) cout<<-1<<endl;
	    else{
	        p=(r-x*n)/(y-x);
	        if(p>n) p=n;
	        o=n-p;
	        cout<<o<<" "<<p<<endl;
	    }
	}
	return 0;
}
