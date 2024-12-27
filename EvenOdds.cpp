// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	long long n,k;
// 	cin>>n>>k;
// 	long long estart=(n+1)/2;
// 	long long ans;
// 	if(k>=estart){
// 		k=(long long)(k-estart);
// 		ans=(long long)(k*2);
// 	}
// 	else{
// 		ans=(long long)(k*2-1);
// 	}
// 	cout<<ans;
// }

#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}