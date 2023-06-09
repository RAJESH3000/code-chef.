#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int p1[n],p2[n],p1c=0,p2c=0,maxi=0,win=1;
	for(int i=0;i<n;i++){
	    cin>>p1[i]>>p2[i];
	}
	
	for(int i=0;i<n;i++){
	    p1c=p1c+p1[i];
	    p2c=p2c+p2[i];
	    if(p1c>p2c){
	        if(maxi<p1c-p2c){
	            maxi=p1c-p2c;
	            win=1;
	        }
	    }
	    else{
	        if(maxi<p2c-p1c){
	            maxi=p2c-p1c;
	            win=2;
	        }
	    }
	}
	
	cout<<win<<" "<<maxi;
	return 0;
}
