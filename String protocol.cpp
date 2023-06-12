#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0;
	    string s;
	    cin>>n>>s;
	    int i=0;
	    while(i<n){
	        if(s[i]==s[i+1]) i+=2;
	        else i++;
	        cnt++;
	    }
	    cout<<cnt<<endl;
	   
	}
	return 0;
}
