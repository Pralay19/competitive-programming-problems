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
		int i=0;
		vector<int>arr(n);
		while(i<n){
			cin>>arr[i];
			i++;
		}
		if(n==1){
			cout<<-1<<endl;
			continue;
		}
		sort(arr.begin(),arr.end(),greater<int>());
		vector<int>b,c;
		c.push_back(arr[0]);
		arr[0]=0;
		for(int j=1;j<n;j++){
			if(c[0]==arr[j]){
				arr[j]=0;
				c.push_back(c[0]);
			}
		}
		for(int j=0;j<n;j++){
			if(arr[j]!=0){
				b.push_back(arr[j]);
			}
		}
		if(c.size()==n){
			cout<<-1<<endl;
			continue;
		}
		cout<<b.size()<<" "<<c.size()<<endl;
		for(auto it:b){
			cout<<it<<" ";
		}
		cout<<endl;
		for(auto it:c){
			cout<<it<<" ";
		}
		cout<<endl;

	}
}