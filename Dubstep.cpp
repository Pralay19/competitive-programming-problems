#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int i=0;
	string ans="";
	while(str.find("WUB")<1){
		str=str.substr(3);

	}
	reverse(str.begin(),str.end());
	while(str.find("BUW")<1){
		str=str.substr(3);
	}
	reverse(str.begin(),str.end());

	while(str.find("WUB")!=string::npos){
		int pos=str.find("WUB");
		str.replace(pos,3," ");
		// cout<<str<<endl;
	}
	cout<<str;
}