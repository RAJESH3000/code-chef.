#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,mini=INT_MAX;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++){
	        int res=abs(arr[i]-arr[i+1]);
	        mini=min(mini,res);
	    }
	    cout<<mini<<endl;
	}
	return 0;
}
