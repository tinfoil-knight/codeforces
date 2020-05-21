#include <bits/stdc++.h>
#define LOG(x) cout << x << "\n"

using namespace std;

int main() {
  int n, k;
  // Integer range for C++
  int best = -2147483648;
  cin >> n >> k;
  while (n--) {
    int f, t;
    cin >> f >> t;
    if (t > k) {
      best = max(best, f - (t - k));
    } else {
      best = max(best, f);
    }
  }
  LOG(best);
  return 0;
}