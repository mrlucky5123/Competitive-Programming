#include<bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid(10);
    for(int i = 0; i < 10; i++) {
        cin >> grid[i];
    }
    int total_points = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(grid[i][j] == 'X') {
                int points = min(min(i + 1, 10 - i), min(j + 1, 10 - j));
                total_points += points;
            }
        }
    } 
    cout << total_points << endl;   
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}