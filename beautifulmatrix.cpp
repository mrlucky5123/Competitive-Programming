#include<bits/stdc++.h>
using namespace std;

int main() {
    int r = 0;
    int c = 0;
    int matrix[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }
    int row_move = abs(r-2);
    int col_move = abs(c-2);
    int total = row_move + col_move;
    cout << total << endl;
    
}