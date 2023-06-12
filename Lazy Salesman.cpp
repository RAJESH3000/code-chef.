#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,count=0;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
	    int i=n-1;
	    while(x>0){
	            x-=arr[i];
	            count++;
	            i--;
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}
