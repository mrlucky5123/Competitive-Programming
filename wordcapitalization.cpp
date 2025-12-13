#include<bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    for(int i = 0; i < 1; i++) {
        text[i] = toupper(text[i]);
    }
    cout << text << endl;
    return 0;
}