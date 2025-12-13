#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    long long n = s.size();
    long long balance = 0;
    // long long score = 0;
    // for(char ch : s) {
    //     if(ch == '(') {
    //         score++;
    //     } else {
    //         score--;
    //     }
    //     if(score == 0) {
    //         balance++;
    //     }
    // }
    // if(balance > 1) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }
    int count = 0;
    stack<char> st;
    for(char ch : s) {
        count++;
        if(ch == '(') {
            st.push(ch);
        } else {
            st.pop();
        }
        if(st.empty() == true && count < n) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}