#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int count=1;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length()-1;i++){
	        if(s[i]!=s[i+1]) count++;
	    }
	    cout<<count/2<<endl;
	}
	return 0;
}
