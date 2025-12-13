#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    long long n = s.size();
    if(n == 1) {
        cout << s << endl;
        return;
    }
    if(s[0]!=s[n]) {
        s[n-1] = s[0];
    }
    long long count_ab = 0;
    long long count_ba = 0;
    for(long long i = 0; i < n-1; i++){
        if(s[i] == 'a' && s[i+1] == 'b') {
            count_ab++;
        } else if(s[i] == 'b' && s[i+1] == 'a') {
            count_ba++;
        } else {
            continue;
        }
    }
    if(count_ba == count_ab){
        cout << s << endl;
        return;
    }
    
    
    long long count_a = 0, count_b = 0;
    for(long long i = 0; i < n; i++) {
      if(s[i] == 'a'){
        count_a++;
      } else if(s[i] == 'b') {
        count_b++;
      }
    }
    if(count_a <= count_b) {
      cout << string(n, 'b') << endl;
    } else if(count_a > count_b){
      cout << string(n, 'a') << endl;
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