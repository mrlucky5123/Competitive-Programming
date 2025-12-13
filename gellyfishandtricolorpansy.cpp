#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    
    // if ((a >= b && c >= b) || (a >= d && c >= d))
    //       cout << "Gellyfish\n";
    //   else
    //       cout << "Flower\n";
  
    // ll min1 = min(a,c);
    // ll min2 = min(b,d);
  
    // if(min1 < min2) {
    //   cout << "Flower" << '\n';
    // } else {
    //   cout << "Gellyfish" << '\n';
    // }
    if (a >= min(b,d) && c >= min(b,d))
        cout << "Gellyfish" << endl;
    else
        cout << "Flower" << endl;

}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}