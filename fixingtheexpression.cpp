#include<bits/stdc++.h>
using namespace std;

bool isTrue(string s){
    int d1 = s[0] - '0';
    int d2 = s[2] - '0';
    char symbol = s[1];
    if (symbol == '<') {
        return d1 < d2;
    } else if (symbol == '>') {
        return d1 > d2;
    }else if (symbol == '=') {
        return d1 == d2;
    }
    return false;
}

void solve() {
    string s;
    cin >> s; 
    if(isTrue(s)) {
        cout << s << endl;
    } else {
        int d1 = s[0] - '0';
        int d2 = s[2] - '0';
        char correcSymbol;
        if(d1 < d2) {
            correcSymbol = '<';
        } else if (d1 > d2) {
            correcSymbol = '>';
        } else {
            correcSymbol = '=';
        }

        string newS = string(1, s[0]) + correcSymbol + string(1, s[2]);
        cout << newS << endl;
    }

}

int main() {
    int t; // for reading the no. of test cases
    cin >> t;
    while (t--) {
        solve();
    }
}