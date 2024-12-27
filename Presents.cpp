#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>arr(n+1);
	int i=1;
	while(i<n+1){
		cin>>arr[i++];
	}
	vector<int>ans(n+1);
	i=1;int j=1;
	while(j<(n+1)){
		i=1;
		for(i=1;i<(n+1);i++){
			if(j==arr[i]){
				ans[j]=i;
			}
		}
		j++;
	}
	for(int j=1;j<n+1;j++){
		cout<<ans[j]<<" ";
	}	
}