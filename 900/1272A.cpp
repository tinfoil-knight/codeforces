#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
// Seen
using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    int a, b, c;
    cin >> a >> b >> c;
    int x = abs(a - b) + abs(b - c) + abs(c - a);
    LOG(max(0, x - 4));
  }
  return 0;
}