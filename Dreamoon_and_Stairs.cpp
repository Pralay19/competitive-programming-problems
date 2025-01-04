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
		
	int n,m;
	cin>>n>>m;
	int lower_bound = (n+1)/2 ;
    int ans = (lower_bound+m-1)/m*m ;
    if(ans>n)
        ans = -1 ;
 
    printf("%d\n", ans) ;
 
    return 0 ;
}