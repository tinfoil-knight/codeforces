#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// -std=c++11
using namespace std;
typedef pair<char, char> cc;

int main() {
  char shift;
  string input;
  cin >> shift >> input;
  string s1 = "qwertyuiop";
  string s2 = "asdfghjkl;";
  string s3 = "zxcvbnm,./";
  // Size of strings
  int n = 10;
  map<char, char> sub;

  if (shift == 'R') {
    for (int i = 1; i < n; i++) {
      sub.insert(cc(s1[i], s1[i - 1]));
      sub.insert(cc(s2[i], s2[i - 1]));
      sub.insert(cc(s3[i], s3[i - 1]));
    }
  }
  if (shift == 'L') {
    for (int i = 0; i < n - 1; i++) {
      sub.insert(cc(s1[i], s1[i + 1]));
      sub.insert(cc(s2[i], s2[i + 1]));
      sub.insert(cc(s3[i], s3[i + 1]));
    }
  }
  for_each(input.begin(), input.end(), [sub](char c) { cout << sub.at(c); });
  cout << "\n";
  return 0;
}