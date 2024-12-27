#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>arr(m);
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int l=0,r=0;
	int maxsum=0,minsum=1000;
	int ans=1000;
	while(l<=r and r<m){
		if((r-l+1)==n){
			ans=min(ans,arr[r]-arr[l]);
			l++;
		}
		// cout<<maxsum<<" "<<minsum;
		r++;
	}
	cout<<ans;
}