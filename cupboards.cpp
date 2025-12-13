#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int left_open = 0, right_open = 0, left_close = 0, right_close = 0;
    while(n--) {
        int left, right;
        cin >> left >> right;
        if(left == 0) {
            left_close++;
        } else if(left == 1) {
            left_open++;
        } else if(right == 0) {
            right_close++;
        } else if(right == 1) {
            right_open++;
        }
    }

    int ans = min(left_close, left_open) + min(right_close, right_open);
    cout << ans << endl;
    return 0;
}