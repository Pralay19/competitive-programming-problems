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
 
// #define max(a, b) (((a) > (b)) ? (a) : (b))
// #define min(a, b) (((a) > (b)) ? (b) : (a))
// #define abs(a) (((a) > 0) ? (a) : (-(a)))
 
typedef long long ll;
 
using namespace std;
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	int i=0;
	vector<int>arr(n);
	int one=0,two=0,three=0;
	while(i<n){
		cin>>arr[i];
		if(arr[i]==1){
			one++;
		}
		else if(arr[i]==2){
			two++;
		}
		else{
			three++;
		}
		i++;
	}
	int teams=min({one,two,three});
	map<int,int>mpp;
	int temp=0;
	cout<<teams<<endl;
	while(temp<teams){
		int j=0;
		while(j<n){
			if(arr[j]==1 and mpp.find(j)==mpp.end()){
				cout<<j+1<<" ";
				mpp[j]++;
				break;
			}
			j++;
		}
		j=0;
		while(j<n){
			if(arr[j]==2 and mpp.find(j)==mpp.end()){
				cout<<j+1<<" ";
				mpp[j]++;
				break;
			}
			j++;
		}
		j=0;
		while(j<n){
			if(arr[j]==3 and mpp.find(j)==mpp.end()){
				cout<<j+1<<" ";
				mpp[j]++;
				break;
			}
			j++;
		}
		cout<<endl;
		temp++;
	}


}