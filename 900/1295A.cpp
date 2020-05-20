#include <bits/stdc++.h>
#define LOG(x) cout << x << '\n'
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n % 2 == 0) {
      REP(i, 0, n / 2) { cout << 1; }
      cout << '\n';
    } else {
      REP(i, 0, n) {
        if (i % 2 == 0) {
          cout << 7;
          // 7 requires 3 segments, loop does i++
          i += 2;
        } else {
          cout << 1;
          // 1 requires 2 segments, loop does i++
          i += 1;
        }
      }
      cout << '\n';
    }
  }
  return 0;
}