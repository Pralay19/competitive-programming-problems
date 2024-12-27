#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="";
	char a;
	while(cin>>a){
		str+=a;
	}

	int c=0;
	set<char>st;
	while(c<str.size()-1){
		if(str[c]=='{' or str[c]==','){
			c++;
			continue;
		}
		st.insert(str[c]);
		c++;
	}
	cout<<st.size();
}