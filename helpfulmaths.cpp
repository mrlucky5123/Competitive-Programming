#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '+') {
            continue;
        } else {
            result.push_back(s[i]);
        }
    }

    sort(result.begin(), result.end());


    for(int i = 0; i < result.size(); i++) {
        cout << result[i];
        if(i != result.size()-1) {
            cout << "+";
        }
    }
    
    return 0;
}