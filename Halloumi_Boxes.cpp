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

bool check(vector<int>&arr){
	for(int i=1;i<arr.size();i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
	}
	return true;
}
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;

		vector<int>arr(n);
		int i=0;
		while(i<n){
			cin>>arr[i];
			i++;
		}
		if(k<2 and n>1){
			if(check(arr)){
				cout<<"YES"<<endl;
				continue;
			}
			else{
				cout<<"NO"<<endl;
				continue;
			}
		}
		cout<<"YES"<<endl;
		
	}
}