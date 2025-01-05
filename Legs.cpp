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

		int count=0;
		while(n>0 and n>=4){
			n-=4;
			count++;
		}
		while(n>0){
			n-=2;
			count++;
		}
		cout<<count<<endl;

	}
}