#include<bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int lowercase_count = 0;
    int uppercase_count = 0;

    for(int i = 0; i < text.length(); i++) {
        if(text[i] >= 'a' && text[i] <= 'z') {
            lowercase_count++;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            uppercase_count++;
        }
    }

    if(uppercase_count > lowercase_count) {
        transform(text.begin(), text.end(), text.begin(), ::toupper);
    } else {
        transform(text.begin(), text.end(), text.begin(), ::tolower);
    }
    cout << text << endl;
}