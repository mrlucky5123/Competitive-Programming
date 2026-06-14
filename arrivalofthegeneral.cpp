// #include<bits/stdc++.h>
// using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int count = 0;
//     int max_pos = 0, min_pos = 0;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] > arr[max_pos]){
//             max_pos = i;
//         }
//         if(arr[i] <= arr[min_pos]) {
//             min_pos = i;
//         }
//     }
//     count = max_pos + (n - 1 - min_pos);
//     if(max_pos < min_pos) {
//         cout << count << endl;
//     }else {
//         cout << count - 1 << endl;
//     }
// }

#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    ll min_idx = 1, max_idx = n;
    ll max_ele = a[n], min_ele = a[1];

    for(ll i = 2; i <= n; i++) {
        if(a[i] <= min_ele) {
            min_ele = a[i];
            min_idx = i;
        }
    }
    for(ll i = n-1; i >= 1; i--) {
        if(a[i] >= max_ele) {
            max_ele = a[i];
            max_idx = i;
        }
    }
    
    ll ans = max_idx-1 + n-min_idx;

    if(min_idx < max_idx) cout << ans - 1 << endl;
    else cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    // cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}