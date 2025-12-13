#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n = s.size();
    set<char> unique_chars;
    for(int i = 0; i < n; i++) {
        unique_chars.insert(s[i]);
    }

    int unique_count = unique_chars.size();
    if (unique_count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}