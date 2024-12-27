#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,int>matrix;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int a;
			cin>>a;
			if(a==1){
				matrix.first=i;
				matrix.second=j;
				break;
			}
		}
	}
	int ans=abs(2-matrix.first)+abs(2-matrix.second);
	cout<<ans;
}