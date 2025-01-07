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
		map<int,int>mpp;
		int i=0;
		// vector<char>str(n);
		// bool b=false;
		int count=0;
		while(i<n){
			// cin>>str[i];
			char c;
			cin>>c;
			if(c!='#'){
				count++;
			}
			else{
				mpp[count]++;
				count=0;
			}
			i++;
		}
		mpp[count]++;

		bool a=false;
		int ans=0;
		for(auto it:mpp){
			if(it.first>=3){
				a=true;
				break;
			}
			ans+=it.first*(it.second);
		}
		if(!a) cout<<ans<<endl;
		else cout<<2<<endl;
		
	}
}