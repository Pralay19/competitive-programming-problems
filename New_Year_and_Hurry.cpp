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
	
	int n,k;
	cin>>n>>k;

	int minsleft=4*60-k;
	// int total = 0;
	// for(int i = 1; i <= n; ++i) {
	// 	total += 5 * i;
	// }

	// int solved=0,cur=0,i=1,probs=0;
	// while(i<=n and cur<=minsleft){
	// 	cur+=5*i;
	// 	if(cur<=minsleft){
	// 		probs++;
	// 	}
	// 	i++;
	// }
	// cout<<probs;
	int l=0,r=n;
	int ans;
	while(l<=r){
		int mid=(l+r)/2;
		if(5*(mid*(mid+1)/2)<=minsleft){
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	cout<<ans;
}