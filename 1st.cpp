#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool isPossible(vector<vector<int>>& decks, vector<int>& order) {
    int n = decks.size();
    vector<int> pointers(n, 0);
    int top = -1;

    for (int round = 0; round < decks[0].size(); ++round) {
        for (int cow : order) {
            while (pointers[cow] < decks[cow].size() && decks[cow][pointers[cow]] <= top) {
                ++pointers[cow];
            }
            if (pointers[cow] == decks[cow].size()) return false;
            top = decks[cow][pointers[cow]++];
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> decks(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end());
        }

        vector<pair<int, int>> cows;
        for (int i = 0; i < n; ++i) {
            cows.emplace_back(decks[i][0], i);
        }
        sort(cows.begin(), cows.end());

        vector<int> order;
        for (auto& cow : cows) {
            order.push_back(cow.second);
        }

        if (isPossible(decks, order)) {
            for (int i = 0; i < n; ++i) cout << order[i] + 1 << " ";
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
