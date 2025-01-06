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
		int n,x;
		cin>>n>>x;
		vector<int>gas(n+2);
		int i=1;
		while(i<n+1){
			cin>>gas[i];
			i++;
		}
		gas[n+1]=x;
		// for(auto it:gas){
		// 	cout<<it<<" ";
		// }
		// cout<<endl;
		int maxdiff=0;
		i=1;
		while(i<n+2){
			if(i==gas.size()-1){
				maxdiff=max(maxdiff,2*(gas[i]-gas[i-1]));
				i++;
				continue;
			}
			maxdiff=max(maxdiff,gas[i]-gas[i-1]);
			// cout<<maxdiff<<" ";
			i++;
		}
		cout<<maxdiff<<endl;

	}
}