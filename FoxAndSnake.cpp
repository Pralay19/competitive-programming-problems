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
	bool last=true;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			for(int j=1;j<=m;j++){
				cout<<'#';
			}
			cout<<endl;
		}
		else if(last){
			for(int j=1;j<m;j++){
				cout<<'.';
			}
			cout<<'#'<<endl;
			last=false;
		}
		else{
			cout<<'#';
			for(int j=1;j<m;j++){
				cout<<'.';
			}
			cout<<endl;
			last=true;
		}

	}

}