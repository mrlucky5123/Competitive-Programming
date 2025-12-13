#include<bits/stdc++.h>
using namespace std;

int reverse(int n) {
  int rev_num = 0;
  while(n>0) {
    int last_digit = n % 10;
    
    n = n / 10;
    
    rev_num = (rev_num * 10) + last_digit;
  }
  return rev_num;
}

int main() {
  int n;
  cin >> n;
  int reversed_num = reverse(n);
  cout << reversed_num << endl;
  return 0;
  
}