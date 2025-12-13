#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    if(nums[0] == nums.back()) {
        cout << -1 << endl;
    } else {
        int smallest_count = 0;
        for(int num : nums) {
            if(num == nums[0]) {
                smallest_count++;
            } else {
                break;
            }
        }
        cout << smallest_count << " " << n - smallest_count << endl;

        for(int i = 0; i < smallest_count; i++) {
            cout << nums[i] << (i == smallest_count - 1 ? "" : " ");
        }
        cout << endl;
        for(int i = 0; i < smallest_count; i++) {
            cout << nums[i] << (i == n - 1? "" : " ");
        }
        cout << endl;
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}