#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"
// Seen
using namespace std;

int maxBurles(int x) {
  if (x >= 10) {
    int ans = 0;
    // Specified limit
    int pw = 1000 * 1000 * 1000;
    while (x > 0) {
      while (x < pw) {
        pw /= 10;
      }
      ans += pw;
      x -= pw - pw / 10;
    }
    return ans;
  } else {
    return x;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int s;
    cin >> s;
    LOG(maxBurles(s));
  }
  return 0;
}