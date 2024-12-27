#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<int>>teams(n,vector<int>(3));
	int i=0;
	while(i<n){
		int a,b;
		cin>>a>>b;
		teams[i]={a,b};
		i++;
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(teams[i][0]==teams[j][1]){
				count++;
			}
		}
	}
	cout<<count;
}