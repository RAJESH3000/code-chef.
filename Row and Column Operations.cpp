#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,q,mr,mc,a,b;
	string s;
	cin>>n>>q;
	vector<int> r(n,0);
	vector<int> c(n,0);
	while(q--){
	    cin>>s>>a>>b;
	    if(s[0]=='R'){
	        r[a-1]+=b;
	    }
	    else{
	        c[a-1]+=b;
	    }
	}
	mr=*max_element(r.begin(),r.end());
	mc=*max_element(c.begin(),c.end());
	cout<<mc+mr;
	
	return 0;
}
