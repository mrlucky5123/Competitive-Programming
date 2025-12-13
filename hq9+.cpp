#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool language_char = false;
    for(long long i = 0; i < s.size(); i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            language_char = true;
        }
    }
    if(language_char) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    return 0;
}