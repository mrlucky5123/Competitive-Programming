#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;

// bool isprime(ll n) {
//     if(n < 2) return false;
//     for(ll i = 2; i*i <= n; i++) {
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// void solve() {
//     ll n, a, b; cin >> n >> a >> b;

//     //find a^2 - b^2
//     // a^2 - b^2 = (a-b)(a+b)
//     ll num1 = (a-b);
//     ll num2 = (a+b);
//     ll k = num1 * num2;

//     if(isprime(k)) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

void solve() {
    ll a, b; cin >> a >> b; 
    if(a-b != 1) {
        cout << "NO" << endl;
        return;
    }
    ll num = a+b;
    // we will check if num is prime or not
    // for(ll i = 2; i*i <= num; i++) {
    //     if(num % i == 0) {
    //         cout << "NO" << endl;
    //         return;
    //     } 
    // }
    // cout << "YES" << endl;

    ll cnt = 0; 
    for(ll i = 2; i * i <= num; i++) {
        if(num%i == 0) {
            while(num%i==0) {
                cnt++;
                num /= i;
            }
        }
    }
    if(num > 1)cnt++;
    if(cnt==1) cout << "YES" << endl;
    else cout << "NO" << endl;
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