#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
 
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))
 
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
		// while(k){
		// 	for(auto it:mpp){
				
		// 	}
		// 	// auto it = next(mpp.begin(), 1);
		// 	// if(it==mpp.end()) break;
		// 	// mpp.erase(it);
		// 	k--;
		// }
		// map<ll,ll>temp=mpp;
		for(auto it:mpp){
			if(it.second>0) it.second-=1;
			if(k=<0) break;
			k--;
		}
		
	}
}