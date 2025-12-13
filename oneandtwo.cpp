#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <int> arr(n);
    int two_count = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 2) {
            two_count++;
        }
    }
    if(two_count % 2 != 0){
        cout << -1 << endl;
        return;
    }
    
    int required_twos = two_count / 2;
    int current_two = 0;
    int k = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 2) {
            current_two++;
        }
        if(required_twos == current_two) {
            k = i + 1;
            break;
        }
    }
    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}