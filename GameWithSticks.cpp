#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;

	int inter=n*m;
	int rounds=0;
	while(inter>0){
		inter=inter-(n-1)-(m-1)-1;
		n=n-1;m=m-1;
		rounds++;
	}
	if(rounds%2==0){
		cout<<"Malvika";
	}
	else{
		cout<<"Akshat";
	}

}