#include <bits/stdc++.h>
using namespace std;

void factor(vector<int>& v,int n){
    vector<int> factor(n+1,0);
    factor[1]=1;
    for(int i=2;i<=n;i++){
        if(factor[i]==0) 
        {   
            factor[i]=1;
            for(int j=2*i;j<=n;j+=i){
            factor[j]++;
            }
        }
    }
    v=factor;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<int> all;
	factor(all,100000);
	while(t--){
	    int a,b,k,cnt=0;
	    cin>>a>>b>>k;
	    for(int i=a;i<=b;i++){
	        if(all[i]==k) cnt++;
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
