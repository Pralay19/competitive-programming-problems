#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int i=0;
		map<int,int>mpp;
		while(i<n){
			int a;
			cin>>a;
			mpp[a]++;
			i++;
		}
		if(mpp.size()>=3){
			cout<<"NO"<<endl;
		}
		///Hellloe
		else{
			auto it=mpp.begin();
			int prev=it->second;
			int cur=mpp.rbegin()->second;
			if(abs(prev-cur)<=1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	
}