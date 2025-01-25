#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct arrays {
    int id;
    int num;
};

bool cmp(arrays x, arrays y) {
    return x.num > y.num;
}

int main() {
    int n;
    int a[200005], b[200005];
    arrays c[200005];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i].num);
        c[i].id = i;
    }

    sort(a, a + n);
    sort(c, c + n, cmp);

    for (int i = 0; i < n; i++) {
        b[c[i].id] = a[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}