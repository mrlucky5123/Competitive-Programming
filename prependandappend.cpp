// 

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int left = 0, right = n - 1;
    while(left < right) {
        if ((s[left] == '0' && s[right] == '1') || 
            (s[left] == '1' && s[right] == '0')) {
            left++;
            right--;
        } else {
            break;
        }
    }
    int min_length = (left <= right) ? (right - left + 1) : 0;
    cout << min_length << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}