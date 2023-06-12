#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,res=0;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]<x){
	            res=i+1;
	            break;
	        }
	    }
	    cout<<res<<endl;
	    
	    
	    
	}
	return 0;
}
