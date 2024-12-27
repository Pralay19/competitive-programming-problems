#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	set<int>st;
	int i=0,p;
	cin>>p;
	while(i<p){
		int a;
		cin>>a;
		st.insert(a);
		i++;
	}
	i=0;int q;
	cin>>q;
	while(i<q){
		int a;
		cin>>a;
		st.insert(a);
		i++;
	}
	st.size()==n?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
}