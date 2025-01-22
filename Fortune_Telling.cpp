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
	
	int n;
	cin>>n;

	vector<int>boq(n);
	int i=0,odd=0,even=0;
	int oddsum=0,evensum=0;
	int smallestodd=99;
	while(i<n){
		cin>>boq[i];
		if(boq[i]%2==0){
			evensum+=boq[i];
			even++;
		}
		else{
			oddsum+=boq[i];
			smallestodd=min(smallestodd,boq[i]);
			odd++;
		}
		i++;
	}
	if(odd==0){
		cout<<0;
		return 0;
	}
	sort(boq.begin(),boq.end(),greater<int>());
	int ans1=0;
	if(odd%2==0){
		ans1=oddsum-smallestodd;
	}
	else{
		ans1=oddsum;
	}
	int ans2=evensum;
	cout<<ans1+ans2;




	// int ans1=0;
	// if(odd%2==0){
	// 	int i=0,j=0;
	// 	while(i<n and j<odd){
	// 		if(boq[i]%2!=0){
	// 			ans1+=boq[i];
	// 			j++;
	// 		}
	// 		i++;
	// 	}
	// }
	// else{
	// 	int i=0,j=0;
	// 	while(i<n and j<=odd){
	// 		if(boq[i]%2!=0){
	// 			ans1+=boq[i];
	// 			j++;
	// 		}
	// 		i++;
	// 	}
	// }


}