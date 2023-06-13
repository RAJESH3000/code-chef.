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
	    int mini=arr[0];
	    for(int i=1;i<n;i++){
	        if(mini<arr[i]){
	            cnt=max(cnt,arr[i]-mini);
	        }
	        else mini=arr[i];
	    }
        cnt>0?cout<<cnt<<endl:cout<<"UNFIT"<<endl;	    
	}
	return 0;
}
