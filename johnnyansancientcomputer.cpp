#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll a, b; cin >> a >> b;

    ll ra = a;
    ll rb = b;

    while(ra % 2 == 0) {
        ra /= 2;
    }
    while(rb % 2 == 0) {
        rb /= 2;
    }

    if(ra != rb) {
        cout << -1 << endl;
        return;
    } else {
        a /= ra;
        b /= rb;

        a = log2(a);
        b = log2(b);
        ll count = ceil(abs(a-b) / 3.0);
        cout << count << endl;
        return;
    }
    

    // if(a == b) {
    //     cout << 0 << endl;
    //     return;
    // }
    // while(a != b) {
    //     if(a > b){
    //         if(a % 8 == 0) {
    //             a /= 8;
    //             count++;
    //         } else if(a % 4 == 0) {
    //             a /= 4;
    //             count++;
    //         } else if(a % 2 == 0) {
    //             a /= 2;
    //             count++;
    //         } else {
    //             cout << -1 << endl;
    //             return;
    //         }

    //     }else if(a < b) {
    //         if(a * 8 <= b) {
    //             a *= 8;
    //             count++;
    //         } else if(a * 4 <= b) {
    //             a *= 4;
    //             count++;
    //         } else if(a * 2 <= b) {
    //             a *= 2;
    //             count++;
    //         } else {
    //             cout << -1 << endl;
    //             return;
    //         }
    //     }
    // }
    // cout << count << endl;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin >> t;
   while(t--) {
       solve();
   }
   return 0;
}