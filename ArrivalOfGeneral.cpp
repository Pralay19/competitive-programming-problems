#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    // Find the leftmost maximum height soldier
    int maxHeight = *max_element(heights.begin(), heights.end());
    int maxPos = find(heights.begin(), heights.end(), maxHeight) - heights.begin();

    // Find the rightmost minimum height soldier
    int minHeight = *min_element(heights.begin(), heights.end());
    int minPos = find(heights.rbegin(), heights.rend(), minHeight) - heights.rbegin();
    minPos = n - 1 - minPos; // Convert to the actual position in the array

    // Calculate the number of swaps
    int swaps = maxPos + (n - 1 - minPos);
    if (maxPos > minPos) {
        --swaps;
    }

    cout << swaps << endl;

    return 0;
}
