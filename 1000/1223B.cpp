#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
// Incorrect
using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] != t[i]) {
        if (i > 0 && s[i - 1] == t[i]) {
          s[i] = s[i - 1];
        }
        if (i < s.length() - 1 && s[i + 1] == t[i]) {
          s[i] = s[i + 1];
        }
      }
    }
    for (int i = 0; i < t.length(); i++) {
      if (s[i] != t[i]) {
        if (i > 0 && t[i - 1] == s[i]) {
          t[i] = t[i - 1];
        }
        if (i < t.length() - 1 && t[i + 1] == s[i]) {
          t[i] = t[i + 1];
        }
      }
    }
    if (s.compare(t) == 0) {
      LOG("YES");
    } else {
      LOG("NO");
    }
  }
  return 0;
}