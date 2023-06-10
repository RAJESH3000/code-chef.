#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,cnt=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    for(int i=0;i<n;i++){
	        if(i==0 && arr[i]!=arr[i+1]) cnt++;
	        else if(i==n-1 && arr[i]!=arr[i-1]) cnt++;
	        else if(i!=0 && i!=n-1){
	            if(arr[i]!=arr[i-1] || arr[i]!=arr[i+1]) cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
