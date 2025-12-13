#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    string s = to_string(n);
    int count = 0;
    for(char char_digit : s) {
        int digit = char_digit - '0';
        if(digit != 0 && n % digit == 0) {
            count++;
        }
    }
    return count;
}