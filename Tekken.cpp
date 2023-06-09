#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a,b,c;
	for(int i=0;i<n;i++){
	    cin>>a>>b>>c;
	    int maxi=a;
	    maxi=max(a,max(b,c));
	    if(maxi==a) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
	return 0;
}
