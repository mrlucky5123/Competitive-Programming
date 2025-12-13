#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int compute_gcd(const vector<int>& nums) {
    int result = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        result = gcd(result, nums[i]);
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool all_same = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            all_same = false;
            break;
        }
    }
    if (all_same) {
        cout << "NO" << endl;
        return;
    }
    
    bool one_found = false;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ans[i] = 1;
            one_found = true;
        } else {
            ans[i] = 2;
        }
    }
    // if (one_found) {
    //     vector<int> b, c;
    //     for (int i = 0; i < n; i++) {
    //         if (ans[i] == 1) b.push_back(arr[i]);
    //         else c.push_back(arr[i]);
    //     }
    //     if (!b.empty() && !c.empty() && compute_gcd(b) != compute_gcd(c)) {
    //         cout << "YES" << endl;
    //         for (int x : ans) cout << x << " ";
    //         cout << endl;
    //         return;
    //     }
    // }
    
    // if (one_found) {
    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] == 1) ans[i] = 2;
    //         else ans[i] = 1;
    //     }
    //     vector<int> b, c;
    //     for (int i = 0; i < n; i++) {
    //         if (ans[i] == 1) b.push_back(arr[i]);
    //         else c.push_back(arr[i]);
    //     }
    //     if (!b.empty() && !c.empty() && compute_gcd(b) != compute_gcd(c)) {
    //         cout << "YES" << endl;
    //         for (int x : ans) cout << x << " ";
    //         cout << endl;
    //         return;
    //     }
    // }
    
    for (int i = 0; i < n; i++) {
        vector<int> b, c;
        ans.assign(n, 2);
        ans[i] = 1;
        for (int j = 0; j < n; j++) {
            if (ans[j] == 1) b.push_back(arr[j]);
            else c.push_back(arr[j]);
        }
        if (!b.empty() && !c.empty() && compute_gcd(b) != compute_gcd(c)) {
            cout << "YES" << endl;
            for (int x : ans) cout << x << " ";
            cout << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}