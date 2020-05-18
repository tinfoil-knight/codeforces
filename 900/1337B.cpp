#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int whoWins(int x, int n, int m) {
  while (n-- && x > 20) {
    x = (x / 2) + 10;
    if (x <= 0) {
      return 1;
    }
  }

  x -= 10 * m;
  if (x <= 0) {
    return 1;
  }

  return 0;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, n, m;
    cin >> x >> n >> m;
    if (whoWins(x, n, m) == 1) {
      LOG("YES");
    } else {
      LOG("NO");
    }
  }

  return 0;
}