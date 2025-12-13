#include<bits/stdc++.h>
#define ll long long
using namespace std;

void remove(vector<ll> &a, long long n){
    for(long long i = 0; i <= n; i++) {
        if(a[i] == n) {

        }
    }
}

void solve() {
    ll n, i;
    cin >> n;
    vector<ll> a(n);
    bool allsame = true;
    for(i = 0; i <= n; i++){
        cin >> a[i];
        if(a[0] != a[i]) {
            allsame = false;
        }
    }
    if(allsame || n == 1) {
        cout << 1 << endl;
        return;
    }
    bool diff_greaterthan_1 = false;
    long long count = 0;
    long long num = a[0];
    for(i = 0; i <= n; i++) {
        if((num + 1 )) {
            diff_greaterthan_1 = true;
        } else if (a[i] - a[i-1] <= 1) {
            count++;
            i = i - 1;
        }
    }


}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}