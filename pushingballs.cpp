#include <bits/stdc++.h>
using namespace std;

bool is_possible(int n, int m, vector<string>& grid) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                bool left_ok = true;
                for (int col = 0; col < j; col++) {
                    if (grid[i][col] == '0') {
                        left_ok = false;
                        break;
                    }
                }
                bool up_ok = true;
                for (int row = 0; row < i; row++) {
                    if (grid[row][j] == '0') {
                        up_ok = false;
                        break;
                    }
                }
                if (!left_ok && !up_ok) {
                    return false;
                }
            }
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
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        cout << (is_possible(n, m, grid) ? "Yes" : "No") << "\n";
    }
    return 0;
}