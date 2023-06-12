#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,o;
	    cin>>n>>o;
	    string s;
	    cin>>s;
	    if(s[0]=='0'){
	        s[0]='1';
	        for(int i=1;i<o;i++) s+='0';
	    }
	    else {
	        for(int i=0;i<o;i++) s+='0';
	    }
	    cout<<s<<endl;
	    
	}
	return 0;
}
