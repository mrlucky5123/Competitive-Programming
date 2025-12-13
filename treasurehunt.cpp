#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a;
    cin >> x >> y >> a;

    int target_depth = a;

    int depth = 0;
    while(depth <= target_depth) {
        depth += x;
        if(depth > target_depth) {
            cout << "NO" << endl;
            return;
        }
        depth += y;
        if(depth > target_depth) {
            cout << "YES" << endl;
            return;
        }
        
    }

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a;
    cin >> x >> y >> a;
    
    long long cycle = x + y;
    long long n = a / cycle;
    long long depth = n * cycle;
    
    if(depth == a) {
      if(depth + x > a) {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
      return;
    }
    
    if(depth + x > a) {
      cout << "NO" << endl;
      return;
    }
    if(depth + x + y > a) {
      cout << "YES" << endl;
      return;
    }
    

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;

}