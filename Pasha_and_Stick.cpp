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
	
	long long n;
	cin>>n;

	if(n<=4){
		cout<<0;
		return 0;
	}
	if(n%2!=0){
		cout<<0;
		return 0;
	}
	long long partre=(long long)(n-2)/2;
	long long partsq=(long long)n/4;

	cout<<(long long)(partre-partsq);

}