#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  if (t != 10) {
    cout.width(n);
    // ASCII '0' = 48
    char c = t + 48;
    cout.fill(c);
    LOG("");
  } else {
    if (n != 1) {
      cout.width(n);
      cout.fill('1');
      LOG("0");
    } else {
      LOG("-1");
    }
  }
  return 0;
}
