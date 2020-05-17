#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  reverse(t.rbegin(), t.rend());
  bool result = s == t;
  LOG((result ? "YES" : "NO"));
  return 0;
}