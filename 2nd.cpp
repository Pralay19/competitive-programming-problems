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
        int n,k;
        cin>>n>>k;
        int temp=n;
        bool poss=true;
        vector<int>ans(n);
        int j=0;
        while(temp--){
            vector<int>cow(k);
            int i=0;
            while(i<k){
                cin>>cow[i];
            }
            sort(cow.begin(),cow.end());
            i=1;
            while(i<k){
                if((cow[i]-cow[i-1])==n){
                    poss=true;
                }
                else{
                    poss=false;
                    break;
                }
            }
            ans[j]=cow[i];
        }
    }
}   