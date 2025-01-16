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
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i=0;
		vector<ll>mat(n);
		while(i<n){
			cin>>mat[i];
			i++;
		}
		i=0;
		int bad = -1, margin = 1e9, need = 0;
        bool reject = 0;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (mat[i] < a) {
                if (bad != -1) reject = 1;
                bad = i;
                need = a - mat[i];
            } else {
                margin = min(margin, mat[i] - a);
            }
        }
        if (reject) {
            cout << "NO" << endl;
            continue;
        } else {
            cout << ((margin >= need) ? "YES" : "NO") << endl;
        }




		// i=0;
		// int left=0,zero=0,more=0;
		// ll required=0;
		// while(i<n){
		// 	if(mat[i]-craft[i]>0){
		// 		mat[i]=mat[i]-craft[i];
		// 		craft[i]=0;
		// 		more++;
		// 	}
		// 	else if(mat[i]-craft[i]==0){
		// 		mat[i]=mat[i]-craft[i];
		// 		craft[i]=0;
		// 		zero++;
		// 	}
		// 	else{
		// 		required=craft[i]-mat[i];
		// 		mat[i]=0;
		// 		left++;
		// 	}
		// 	i++;
		// }
		// if(left==0){
		// 	cout<<"YES"<<endl;
		// 	continue;
		// }
		// if(left and zero){
		// 	cout<<"NO"<<endl;
		// 	continue;
		// }
		// if(left>1){
		// 	cout<<"NO"<<endl;
		// 	continue;
		// }
		// ll sum=0;
		// i=0;
		// while(i<n){
		// 	sum+=mat[i];
		// 	i++;
		// }
		// if(required<=sum){
		// 	cout<<"YES"<<endl;
		// }
		// else{
		// 	cout<<"NO"<<endl;
		// }

	}
}