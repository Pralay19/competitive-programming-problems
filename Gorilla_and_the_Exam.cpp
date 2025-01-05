// #include <algorithm>
// #include <cmath>
// #include <cstdlib>
// #include <cstdio>
// #include <cstring>
// #include <ctime>
// #include <iostream>
// #include <map>
// #include <set>
// #include <string>
// #include <vector>
 
// #define max(a, b) (((a) > (b)) ? (a) : (b))
// #define min(a, b) (((a) > (b)) ? (b) : (a))
// #define abs(a) (((a) > 0) ? (a) : (-(a)))
#include<bits/stdc++.h>
typedef long long ll;
 
using namespace std;
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;

		map<ll,ll>mpp;
		int i=0;
		while(i<n){
			ll a;
			cin>>a;
			mpp[a]++;
			i++;
		}
		i=0;
		vector<ll>arr;
		for(auto it:mpp){
			arr.push_back(it.second);
			// cout<<it.first<<"freq"<<it.second<<" ";
		}
		// cout<<endl;
		sort(arr.begin(),arr.end());
		i=0;
		int count=arr.size();
		for(int i=0;i<arr.size();i++){
			k-=arr[i];
			if(k<0) break;
			count--;
		}
		// for(auto it:arr){
		// 	if(it!=0 ){
		// 		count++;
		// 	}
		// }
		cout<<max(count,1)<<endl;
	}
}