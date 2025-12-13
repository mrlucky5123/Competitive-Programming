#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

const ll max_a = 300010;
vector<ll> prefix_xor(max_a, 0);

void precompute() {
    prefix_xor[0] = 0;
    for(ll i = 1; i < max_a; i++) {
        prefix_xor[i] = prefix_xor[i-1] ^ i;
    }
}

void solve() {
    ll a, b;
    cin >> a >> b;
    ll arr_xor = (a==0 ? 0 : prefix_xor[a-1]);

    if(arr_xor == b) cout << a << endl;
    else if((arr_xor ^b) != a) cout << a + 1 << endl;
    else cout << a + 2 << endl;
}


// ll xor_till(ll n) {
//     if(n % 4 == 0) return n;
//     else if(n % 4 == 1) return 1;
//     else if(n % 4 == 2) return n + 1;
//     else return 0;
// }

// void solve() {
//     // vector<ll> xor_values(50);
//     // xor_values[0] = 0;
//     // for(ll i = 1; i < 50; i++) {
//     //     xor_values[i] = xor_values[i-1] ^ i;
//     // }
//     // for(ll i = 1; i < 50; i++) {
//     //     cout << xor_values[i] << " ";
//     // }
//     // cout << endl;

//     ll a, b;
//     cin >> a >> b;
//     ll arr_xor = xor_till(a-1);

//     if(arr_xor == b) cout << a << endl;
//     // else if((arr_xor ^ b) != a) cout << a + 1 << endl;
//     // else cout << a + 2 << endl;
//     else if((arr_xor ^ b ) == a) cout << a + 2 << endl;
//     else cout << a + 1 << endl;
// }

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   precompute();
   long long t;
   cin >> t;
   while(t--) {
       solve();
   }
   return 0;
}