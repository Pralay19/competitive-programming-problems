#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			int a;
			cin>>a;
			if(j==0)x+=a;
			else if(j==1)y+=a;
			else z+=a;
		}
	}
	(x==0 and y==0 and z==0)?cout<<"YES":cout<<"NO";
}