#include<bits/stdc++.h>
using namespace std;



int main() {
    int n = 3, m = 3;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    int final_state[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            int toggles = grid[i][j]; 

            if(i > 0) toggles += grid[i-1][j]; //up
            if(i < 2) toggles += grid[i+1][j]; //down
            if(j > 0) toggles += grid[i][j-1]; //left
            if(j < 2) toggles += grid[i][j+1]; //right 
            final_state[i][j] = (toggles % 2 == 0) ? 1 : 0; //even = 1, odd = 0
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << final_state[i][j];
        }
        cout << endl;
    }
    return 0;
}