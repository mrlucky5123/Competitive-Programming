#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;

void solve() {
    ll n;
    cin >> n;
    if(n % 4 == 0) {
        cout << "BOB" << endl;
    } else {
        cout << "ALICE" << endl;
    }
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