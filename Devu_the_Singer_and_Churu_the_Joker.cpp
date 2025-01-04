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
	
	int n,d;
	cin>>n>>d;
	vector<int>devu(n);
	int i=0;
	int totaldevu=0;
	while(i<n){
		cin>>devu[i];
		totaldevu+=devu[i];
		i++;
	}
	if(((n-1)*10+totaldevu)>d){
		cout<<-1;
		return 0;
	}
	
	int remtime=d-totaldevu;
	cout<<remtime/5;

}