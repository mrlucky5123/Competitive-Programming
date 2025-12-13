#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = stoi(s);
    

    while(true) {
        n++;
        s = to_string(n);

        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]) {
            break;
        }
    }
    cout << s << endl;
    return 0;
}