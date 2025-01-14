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

    int r,c;
    cin>>r>>c;

    vector<string> mat(r);
    for(int i=0;i<r;i++){
    	cin>>mat[i];
    }

    vector<vector<int>> ht(r,vector<int>(c,0));
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            ht[i][j]=(mat[i][j]=='1')?(i==0?1:ht[i-1][j]+1):0;
        }
    }

    int maxA=0;
    for(int i=0;i<r;i++){
        vector<int> sh=ht[i];
        sort(sh.begin(),sh.end(),greater<int>());
        // sort(sh.begin(),sh.end());
        for(int j=0;j<c;j++){
            maxA=max(maxA,sh[j]*(j+1));
        }
    }
    cout<<maxA<<endl;
    return 0;
}
