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
		int n;
		cin>>n;
		// vector<int>arr(n);
		int i=0;
		int mstart;
		bool ans=true;
		while(i<n){
			int a;
			cin>>a;
			if(i==0){
				mstart=a;
			}
			if(a<mstart){
				ans=false;
			}
			i++;
		}
		if(!ans) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}