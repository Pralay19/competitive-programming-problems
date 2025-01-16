#include <iostream>
#include <vector>
using namespace std;

int countAlmostPrimes(int n) {
    vector<int> primeDivisors(n + 1, 0);

    // Count prime divisors for each number
    for (int i = 2; i <= n; i++) {
        if (primeDivisors[i] == 0) { // i is prime
            for (int j = i; j <= n; j += i) {
                primeDivisors[j]++;
            }
        }
    }

    // Count numbers with exactly 2 prime divisors
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (primeDivisors[i] == 2) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countAlmostPrimes(n) << endl;
    return 0;
}
