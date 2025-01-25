#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
    int n, m;
    cin >> n >> m;

    int a[51][51];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    LL sum = 0;
    int one, zero;

    // Calculate for rows
    for (int i = 0; i < n; ++i) {
        one = zero = 0;
        for (int j = 0; j < m; ++j) {
            if (a[i][j])
                one++;
            else
                zero++;
        }
        sum += (1LL << one) - 1; 
        sum += (1LL << zero) - 1; 
    }

   
    for (int i = 0; i < m; ++i) {
        one = zero = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j][i])
                one++;
            else
                zero++;
        }
        sum += (1LL << one) - 1;
        sum += (1LL << zero) - 1; 
    }

  
    cout << sum - n * m << endl;

    return 0;
}